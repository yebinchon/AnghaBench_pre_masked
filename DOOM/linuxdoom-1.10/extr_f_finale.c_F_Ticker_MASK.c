
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buttons; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_3 (int ) ;
 int VAR_14 ;

void FUNC_4 (void)
{
    int VAR_15;


    if ( (VAR_11 == VAR_3)
      && ( VAR_4 > 50) )
    {

      for (VAR_15=0 ; VAR_15<VAR_0 ; VAR_15++)
 if (VAR_13[VAR_15].cmd.buttons)
   break;

      if (VAR_15 < VAR_0)
      {
 if (VAR_10 == 30)
   FUNC_1 ();
 else
   VAR_8 = VAR_7;
      }
    }


    VAR_4++;

    if (VAR_5 == 2)
    {
 FUNC_0 ();
 return;
    }

    if ( VAR_11 == VAR_3)
 return;

    if (!VAR_5 && VAR_4>FUNC_3 (VAR_6)*VAR_1 + VAR_2)
    {
 VAR_4 = 0;
 VAR_5 = 1;
 VAR_14 = -1;
 if (VAR_9 == 3)
     FUNC_2 (VAR_12);
    }
}
