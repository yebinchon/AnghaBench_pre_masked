
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ppnum_t ;
struct TYPE_3__ {scalar_t__ ksize; scalar_t__ kaddr; } ;
typedef TYPE_1__ boot_args ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 size_t VAR_3 ;
 int* VAR_4 ;

boolean_t
FUNC_2(ppnum_t VAR_5, ppnum_t VAR_6)
{
 ppnum_t VAR_7, VAR_8, VAR_9;
 boolean_t VAR_10;
 boot_args * VAR_11;

 VAR_11 = (boot_args *) VAR_1.bootArgs;




 VAR_8 = FUNC_1(VAR_11->kaddr);
 VAR_9 = FUNC_1(VAR_11->kaddr + VAR_11->ksize);

    FUNC_0(VAR_3);
    FUNC_0(VAR_5 <= VAR_6);

    for (VAR_10 = VAR_0, VAR_7 = VAR_5;
     !VAR_10
       && (VAR_7 <= VAR_6)
       && (VAR_7 <= VAR_3);
      VAR_7++)
    {
  if ((VAR_7 >= VAR_8) && (VAR_7 < VAR_9)) continue;
     VAR_10 = (0 != (VAR_4[VAR_7] & VAR_2));
    }

 return (VAR_10);
}
