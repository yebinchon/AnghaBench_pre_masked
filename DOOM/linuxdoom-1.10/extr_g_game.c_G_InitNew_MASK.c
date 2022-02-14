
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ skill_t ;
struct TYPE_6__ {int speed; } ;
struct TYPE_5__ {int playerstate; } ;
struct TYPE_4__ {int tics; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;
 TYPE_2__* VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 TYPE_1__* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

void
FUNC_4
( skill_t VAR_28,
  int VAR_29,
  int VAR_30 )
{
    int VAR_31;

    if (VAR_17)
    {
 VAR_17 = 0;
 FUNC_3 ();
    }


    if (VAR_28 > VAR_23)
 VAR_28 = VAR_23;





    if (VAR_29 < 1)
      VAR_29 = 1;

    if ( VAR_14 == VAR_21 )
    {
      if (VAR_29 > 4)
 VAR_29 = 4;
    }
    else if ( VAR_14 == VAR_22 )
    {
      if (VAR_29 > 1)
    VAR_29 = 1;
    }
    else
    {
      if (VAR_29 > 3)
 VAR_29 = 3;
    }



    if (VAR_30 < 1)
 VAR_30 = 1;

    if ( (VAR_30 > 9)
  && ( VAR_14 != VAR_9) )
      VAR_30 = 9;

    FUNC_1 ();

    if (VAR_28 == VAR_23 || VAR_20 )
 VAR_19 = 1;
    else
 VAR_19 = 0;

    if (VAR_11 || (VAR_28 == VAR_23 && VAR_15 != VAR_23) )
    {
 for (VAR_31=VAR_7 ; VAR_31<=VAR_6 ; VAR_31++)
     VAR_25[VAR_31].tics >>= 1;
 VAR_16[VAR_2].speed = 20*VAR_0;
 VAR_16[VAR_3].speed = 20*VAR_0;
 VAR_16[VAR_4].speed = 20*VAR_0;
    }
    else if (VAR_28 != VAR_23 && VAR_15 == VAR_23)
    {
 for (VAR_31=VAR_7 ; VAR_31<=VAR_6 ; VAR_31++)
     VAR_25[VAR_31].tics <<= 1;
 VAR_16[VAR_2].speed = 15*VAR_0;
 VAR_16[VAR_3].speed = 10*VAR_0;
 VAR_16[VAR_4].speed = 10*VAR_0;
    }



    for (VAR_31=0 ; VAR_31<VAR_1 ; VAR_31++)
 VAR_18[VAR_31].playerstate = VAR_5;

    VAR_26 = 1;
    VAR_17 = 0;
    VAR_10 = 0;
    VAR_8 = 0;
    VAR_27 = 1;
    VAR_12 = VAR_29;
    VAR_13 = VAR_30;
    VAR_15 = VAR_28;

    VAR_27 = 1;


    if ( VAR_14 == VAR_9)
    {
 VAR_24 = FUNC_2 ("SKY3");
 if (VAR_13 < 12)
     VAR_24 = FUNC_2 ("SKY1");
 else
     if (VAR_13 < 21)
  VAR_24 = FUNC_2 ("SKY2");
    }
    else
 switch (VAR_29)
 {
   case 1:
     VAR_24 = FUNC_2 ("SKY1");
     break;
   case 2:
     VAR_24 = FUNC_2 ("SKY2");
     break;
   case 3:
     VAR_24 = FUNC_2 ("SKY3");
     break;
   case 4:
     VAR_24 = FUNC_2 ("SKY4");
     break;
 }

    FUNC_0 ();
}
