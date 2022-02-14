
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; char data1; int data2; int data3; } ;
typedef TYPE_1__ event_t ;
typedef int boolean ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 char VAR_3 ;
 char VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 () ;
 char VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;




 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int* VAR_14 ;
 scalar_t__ VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;

boolean FUNC_6 (event_t* VAR_26)
{

    if (VAR_15 == VAR_2 && VAR_26->type == 130
 && VAR_26->data1 == VAR_3 && (VAR_25 || !VAR_8) )
    {

 do
 {
     VAR_11++;
     if (VAR_11 == VAR_5)
  VAR_11 = 0;
 } while (!VAR_23[VAR_11] && VAR_11 != VAR_7);
 return 1;
    }


    if (VAR_13 == VAR_12 && !VAR_25 &&
 (VAR_9 || VAR_15 == VAR_0)
 )
    {
 if (VAR_26->type == 130 ||
     (VAR_26->type == 128 && VAR_26->data1) ||
     (VAR_26->type == 131 && VAR_26->data1) )
 {
     FUNC_4 ();
     return 1;
 }
 return 0;
    }

    if (VAR_15 == VAR_2)
    {







 if (FUNC_3 (VAR_26))
     return 1;
 if (FUNC_5 (VAR_26))
     return 1;
 if (FUNC_0 (VAR_26))
     return 1;
    }

    if (VAR_15 == VAR_1)
    {
 if (FUNC_1 (VAR_26))
     return 1;
    }

    switch (VAR_26->type)
    {
      case 130:
 if (VAR_26->data1 == VAR_4)
 {
     VAR_24 = 1;
     return 1;
 }
 if (VAR_26->data1 <VAR_6)
     VAR_14[VAR_26->data1] = 1;
 return 1;

      case 129:
 if (VAR_26->data1 <VAR_6)
     VAR_14[VAR_26->data1] = 0;
 return 0;

      case 128:
 VAR_20[0] = VAR_26->data1 & 1;
 VAR_20[1] = VAR_26->data1 & 2;
 VAR_20[2] = VAR_26->data1 & 4;
 VAR_21 = VAR_26->data2*(VAR_19+5)/10;
 VAR_22 = VAR_26->data3*(VAR_19+5)/10;
 return 1;

      case 131:
 VAR_16[0] = VAR_26->data1 & 1;
 VAR_16[1] = VAR_26->data1 & 2;
 VAR_16[2] = VAR_26->data1 & 4;
 VAR_16[3] = VAR_26->data1 & 8;
 VAR_17 = VAR_26->data2;
 VAR_18 = VAR_26->data3;
 return 1;

      default:
 break;
    }

    return 0;
}
