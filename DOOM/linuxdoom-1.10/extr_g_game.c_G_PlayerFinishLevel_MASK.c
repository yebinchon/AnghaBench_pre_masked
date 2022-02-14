
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bonuscount; scalar_t__ damagecount; scalar_t__ fixedcolormap; scalar_t__ extralight; TYPE_1__* mo; int cards; int powers; } ;
typedef TYPE_2__ player_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_2__* VAR_1 ;

void FUNC_1 (int VAR_2)
{
    player_t* VAR_3;

    VAR_3 = &VAR_1[VAR_2];

    FUNC_0 (VAR_3->powers, 0, sizeof (VAR_3->powers));
    FUNC_0 (VAR_3->cards, 0, sizeof (VAR_3->cards));
    VAR_3->mo->flags &= ~VAR_0;
    VAR_3->extralight = 0;
    VAR_3->fixedcolormap = 0;
    VAR_3->damagecount = 0;
    VAR_3->bonuscount = 0;
}
