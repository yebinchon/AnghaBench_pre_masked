
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int boolean ;
typedef scalar_t__ angle_t ;
struct TYPE_4__ {scalar_t__ health; scalar_t__* weaponowned; int cheats; scalar_t__* powers; scalar_t__ attackdown; scalar_t__ damagecount; TYPE_1__* mo; TYPE_1__* attacker; scalar_t__ bonuscount; } ;
struct TYPE_3__ {scalar_t__ angle; int y; int x; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__* VAR_15 ;
 TYPE_2__* VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;

void FUNC_2(void)
{
    int VAR_22;
    angle_t VAR_23;
    angle_t VAR_24;
    static int VAR_25 = -1;
    static int VAR_26 = 0;
    boolean VAR_27;

    if (VAR_26 < 10)
    {

 if (!VAR_16->health)
 {
     VAR_26 = 9;
     VAR_19 = VAR_4;
     VAR_18 = 1;
 }
    }

    if (VAR_26 < 9)
    {
 if (VAR_16->bonuscount)
 {

     VAR_27 = 0;

     for (VAR_22=0;VAR_22<VAR_3;VAR_22++)
     {
  if (VAR_15[VAR_22] != VAR_16->weaponowned[VAR_22])
  {
      VAR_27 = 1;
      VAR_15[VAR_22] = VAR_16->weaponowned[VAR_22];
  }
     }
     if (VAR_27)
     {

  VAR_26 = 8;
  VAR_18 = VAR_5;
  VAR_19 = FUNC_1() + VAR_6;
     }
 }

    }

    if (VAR_26 < 8)
    {
 if (VAR_16->damagecount
     && VAR_16->attacker
     && VAR_16->attacker != VAR_16->mo)
 {

     VAR_26 = 7;

     if (VAR_16->health - VAR_20 > VAR_8)
     {
  VAR_18 = VAR_13;
  VAR_19 = FUNC_1() + VAR_9;
     }
     else
     {
  VAR_23 = FUNC_0(VAR_16->mo->x,
           VAR_16->mo->y,
           VAR_16->attacker->x,
           VAR_16->attacker->y);

  if (VAR_23 > VAR_16->mo->angle)
  {

      VAR_24 = VAR_23 - VAR_16->mo->angle;
      VAR_22 = VAR_24 > VAR_0;
  }
  else
  {

      VAR_24 = VAR_16->mo->angle - VAR_23;
      VAR_22 = VAR_24 <= VAR_0;
  }


  VAR_18 = VAR_13;
  VAR_19 = FUNC_1();

  if (VAR_24 < VAR_1)
  {

      VAR_19 += VAR_11;
  }
  else if (VAR_22)
  {

      VAR_19 += VAR_14;
  }
  else
  {

      VAR_19 += VAR_14+1;
  }
     }
 }
    }

    if (VAR_26 < 7)
    {

 if (VAR_16->damagecount)
 {
     if (VAR_16->health - VAR_20 > VAR_8)
     {
  VAR_26 = 7;
  VAR_18 = VAR_13;
  VAR_19 = FUNC_1() + VAR_9;
     }
     else
     {
  VAR_26 = 6;
  VAR_18 = VAR_13;
  VAR_19 = FUNC_1() + VAR_11;
     }

 }

    }

    if (VAR_26 < 6)
    {

 if (VAR_16->attackdown)
 {
     if (VAR_25==-1)
  VAR_25 = VAR_10;
     else if (!--VAR_25)
     {
  VAR_26 = 5;
  VAR_19 = FUNC_1() + VAR_11;
  VAR_18 = 1;
  VAR_25 = 1;
     }
 }
 else
     VAR_25 = -1;

    }

    if (VAR_26 < 5)
    {

 if ((VAR_16->cheats & VAR_2)
     || VAR_16->powers[VAR_17])
 {
     VAR_26 = 4;

     VAR_19 = VAR_7;
     VAR_18 = 1;

 }

    }


    if (!VAR_18)
    {
 VAR_19 = FUNC_1() + (VAR_21 % 3);
 VAR_18 = VAR_12;
 VAR_26 = 0;
    }

    VAR_18--;

}
