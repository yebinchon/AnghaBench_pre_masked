
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int playerstate; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

void FUNC_2 (void)
{
    VAR_15[VAR_4].playerstate = VAR_1;
    VAR_2 = 0;
    VAR_17 = 0;
    VAR_14 = 0;
    VAR_7 = VAR_6;

    if ( VAR_8 == VAR_16 )
      VAR_5 = (VAR_5+1)%7;
    else
      VAR_5 = (VAR_5+1)%6;

    switch (VAR_5)
    {
      case 0:
 if ( VAR_8 == VAR_3 )
     VAR_13 = 35 * 11;
 else
     VAR_13 = 170;
 VAR_9 = VAR_0;
 VAR_12 = "TITLEPIC";
 if ( VAR_8 == VAR_3 )
   FUNC_1(VAR_10);
 else
   FUNC_1 (VAR_11);
 break;
      case 1:
 FUNC_0 ("demo1");
 break;
      case 2:
 VAR_13 = 200;
 VAR_9 = VAR_0;
 VAR_12 = "CREDIT";
 break;
      case 3:
 FUNC_0 ("demo2");
 break;
      case 4:
 VAR_9 = VAR_0;
 if ( VAR_8 == VAR_3)
 {
     VAR_13 = 35 * 11;
     VAR_12 = "TITLEPIC";
     FUNC_1(VAR_10);
 }
 else
 {
     VAR_13 = 200;

     if ( VAR_8 == VAR_16 )
       VAR_12 = "CREDIT";
     else
       VAR_12 = "HELP2";
 }
 break;
      case 5:
 FUNC_0 ("demo3");
 break;

      case 6:
 FUNC_0 ("demo4");
 break;
    }
}
