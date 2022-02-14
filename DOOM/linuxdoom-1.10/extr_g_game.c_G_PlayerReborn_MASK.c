
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* frags; int killcount; int itemcount; int secretcount; int usedown; int attackdown; size_t readyweapon; size_t pendingweapon; int* weaponowned; int* ammo; int * maxammo; int health; int playerstate; } ;
typedef TYPE_1__ player_t ;
typedef int frags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

void FUNC_2 (int VAR_9)
{
    player_t* VAR_10;
    int VAR_11;
    int VAR_12[VAR_1];
    int VAR_13;
    int VAR_14;
    int VAR_15;

    FUNC_0 (VAR_12,VAR_6[VAR_9].frags,sizeof(VAR_12));
    VAR_13 = VAR_6[VAR_9].killcount;
    VAR_14 = VAR_6[VAR_9].itemcount;
    VAR_15 = VAR_6[VAR_9].secretcount;

    VAR_10 = &VAR_6[VAR_9];
    FUNC_1 (VAR_10, 0, sizeof(*VAR_10));

    FUNC_0 (VAR_6[VAR_9].frags, VAR_12, sizeof(VAR_6[VAR_9].frags));
    VAR_6[VAR_9].killcount = VAR_13;
    VAR_6[VAR_9].itemcount = VAR_14;
    VAR_6[VAR_9].secretcount = VAR_15;

    VAR_10->usedown = VAR_10->attackdown = 1;
    VAR_10->playerstate = VAR_3;
    VAR_10->health = VAR_0;
    VAR_10->readyweapon = VAR_10->pendingweapon = VAR_8;
    VAR_10->weaponowned[VAR_7] = 1;
    VAR_10->weaponowned[VAR_8] = 1;
    VAR_10->ammo[VAR_4] = 50;

    for (VAR_11=0 ; VAR_11<VAR_2 ; VAR_11++)
 VAR_10->maxammo[VAR_11] = VAR_5[VAR_11];

}
