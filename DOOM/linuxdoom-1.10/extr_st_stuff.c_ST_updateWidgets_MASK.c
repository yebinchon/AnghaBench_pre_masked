
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t readyweapon; int* ammo; scalar_t__* frags; scalar_t__* cards; } ;
struct TYPE_5__ {int* num; size_t data; } ;
struct TYPE_4__ {size_t ammo; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_2__ VAR_14 ;
 TYPE_1__* VAR_15 ;

void FUNC_1(void)
{
    static int VAR_16 = 1994;
    int VAR_17;




    if (VAR_15[VAR_5->readyweapon].ammo == VAR_1)
 VAR_14.num = &VAR_16;
    else
 VAR_14.num = &VAR_5->ammo[VAR_15[VAR_5->readyweapon].ammo];
    VAR_14.data = VAR_5->readyweapon;







    for (VAR_17=0;VAR_17<3;VAR_17++)
    {
 VAR_4[VAR_17] = VAR_5->cards[VAR_17] ? VAR_17 : -1;

 if (VAR_5->cards[VAR_17+3])
     VAR_4[VAR_17] = VAR_17+3;
    }


    FUNC_0();


    VAR_11 = !VAR_3;


    VAR_6 = VAR_13 && !VAR_3;


    VAR_9 = VAR_3 && VAR_13;
    VAR_8 = 0;

    for (VAR_17=0 ; VAR_17<VAR_0 ; VAR_17++)
    {
 if (VAR_17 != VAR_2)
     VAR_8 += VAR_5->frags[VAR_17];
 else
     VAR_8 -= VAR_5->frags[VAR_17];
    }


    if (!--VAR_10)
 VAR_7 = VAR_12;

}
