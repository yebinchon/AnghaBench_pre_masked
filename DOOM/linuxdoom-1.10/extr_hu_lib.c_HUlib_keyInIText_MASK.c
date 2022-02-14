
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int l; } ;
typedef TYPE_1__ hu_itext_t ;
typedef int boolean ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;

boolean
FUNC_2
( hu_itext_t* VAR_2,
  unsigned char VAR_3 )
{

    if (VAR_3 >= ' ' && VAR_3 <= '_')
   FUNC_0(&VAR_2->l, (char) VAR_3);
    else
 if (VAR_3 == VAR_0)
     FUNC_1(VAR_2);
 else
     if (VAR_3 != VAR_1)
  return 0;

    return 1;

}
