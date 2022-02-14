
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ floorheight; int special; } ;
typedef TYPE_2__ sector_t ;
struct TYPE_8__ {int health; TYPE_5__* mo; int cheats; int secretcount; int * powers; } ;
typedef TYPE_3__ player_t ;
struct TYPE_9__ {scalar_t__ z; TYPE_1__* subsector; } ;
struct TYPE_6__ {TYPE_2__* sector; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_5__*,int *,int *,int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 size_t VAR_2 ;

void FUNC_4 (player_t* VAR_3)
{
    sector_t* VAR_4;

    VAR_4 = VAR_3->mo->subsector->sector;


    if (VAR_3->mo->z != VAR_4->floorheight)
 return;


    switch (VAR_4->special)
    {
      case 5:

 if (!VAR_3->powers[VAR_2])
     if (!(VAR_1&0x1f))
  FUNC_2 (VAR_3->mo, ((void*)0), ((void*)0), 10);
 break;

      case 7:

 if (!VAR_3->powers[VAR_2])
     if (!(VAR_1&0x1f))
  FUNC_2 (VAR_3->mo, ((void*)0), ((void*)0), 5);
 break;

      case 16:

      case 4:

 if (!VAR_3->powers[VAR_2]
     || (FUNC_3()<5) )
 {
     if (!(VAR_1&0x1f))
  FUNC_2 (VAR_3->mo, ((void*)0), ((void*)0), 20);
 }
 break;

      case 9:

 VAR_3->secretcount++;
 VAR_4->special = 0;
 break;

      case 11:

 VAR_3->cheats &= ~VAR_0;

 if (!(VAR_1&0x1f))
     FUNC_2 (VAR_3->mo, ((void*)0), ((void*)0), 20);

 if (VAR_3->health <= 10)
     FUNC_0();
 break;

      default:
 FUNC_1 ("P_PlayerInSpecialSector: "
   "unknown special %i",
   VAR_4->special);
 break;
    };
}
