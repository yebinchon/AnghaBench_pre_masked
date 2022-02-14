
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int speed; int spawnhealth; int flags; int raisestate; } ;
typedef TYPE_1__ mobjinfo_t ;
struct TYPE_11__ {size_t movedir; int x; int y; int height; struct TYPE_11__* target; int health; int flags; TYPE_1__* info; } ;
typedef TYPE_2__ mobj_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;

void FUNC_5 (mobj_t* VAR_14)
{
    int VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;

    int VAR_19;
    int VAR_20;

    mobjinfo_t* VAR_21;
    mobj_t* VAR_22;

    if (VAR_14->movedir != VAR_0)
    {

 VAR_10 =
     VAR_14->x + VAR_14->info->speed*VAR_12[VAR_14->movedir];
 VAR_11 =
     VAR_14->y + VAR_14->info->speed*VAR_13[VAR_14->movedir];

 VAR_15 = (VAR_10 - VAR_5 - VAR_2*2)>>VAR_1;
 VAR_16 = (VAR_10 - VAR_5 + VAR_2*2)>>VAR_1;
 VAR_17 = (VAR_11 - VAR_6 - VAR_2*2)>>VAR_1;
 VAR_18 = (VAR_11 - VAR_6 + VAR_2*2)>>VAR_1;

 VAR_9 = VAR_14;
 for (VAR_19=VAR_15 ; VAR_19<=VAR_16 ; VAR_19++)
 {
     for (VAR_20=VAR_17 ; VAR_20<=VAR_18 ; VAR_20++)
     {



  if (!FUNC_2(VAR_19,VAR_20,VAR_3))
  {

      VAR_22 = VAR_14->target;
      VAR_14->target = VAR_7;
      FUNC_1 (VAR_14);
      VAR_14->target = VAR_22;

      FUNC_3 (VAR_14, VAR_4);
      FUNC_4 (VAR_7, VAR_8);
      VAR_21 = VAR_7->info;

      FUNC_3 (VAR_7,VAR_21->raisestate);
      VAR_7->height <<= 2;
      VAR_7->flags = VAR_21->flags;
      VAR_7->health = VAR_21->spawnhealth;
      VAR_7->target = ((void*)0);

      return;
  }
     }
 }
    }


    FUNC_0 (VAR_14);
}
