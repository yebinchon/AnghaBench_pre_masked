
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ fixed_t ;
struct TYPE_3__ {int topdelta; int length; } ;
typedef TYPE_1__ column_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_1 (column_t* VAR_11)
{
    int VAR_12;
    int VAR_13;
    fixed_t VAR_14;

    VAR_14 = VAR_3;

    for ( ; VAR_11->topdelta != 0xff ; )
    {


 VAR_12 = VAR_9 + VAR_10*VAR_11->topdelta;
 VAR_13 = VAR_12 + VAR_10*VAR_11->length;

 VAR_6 = (VAR_12+VAR_1-1)>>VAR_0;
 VAR_5 = (VAR_13-1)>>VAR_0;

 if (VAR_5 >= VAR_8[VAR_4])
     VAR_5 = VAR_8[VAR_4]-1;
 if (VAR_6 <= VAR_7[VAR_4])
     VAR_6 = VAR_7[VAR_4]+1;

 if (VAR_6 <= VAR_5)
 {
     VAR_2 = (byte *)VAR_11 + 3;
     VAR_3 = VAR_14 - (VAR_11->topdelta<<VAR_0);




     FUNC_0 ();
 }
 VAR_11 = (column_t *)( (byte *)VAR_11 + VAR_11->length + 4);
    }

    VAR_3 = VAR_14;
}
