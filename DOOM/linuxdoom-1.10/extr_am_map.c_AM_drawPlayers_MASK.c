
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mo; scalar_t__* powers; } ;
typedef TYPE_2__ player_t ;
struct TYPE_5__ {int y; int x; int angle; } ;


 int FUNC_0 (int ,int ,int ,int ,int,int ,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;

void FUNC_1(void)
{
    int VAR_14;
    player_t* VAR_15;
    static int VAR_16[] = { 129, 130, 131, 128 };
    int VAR_17 = -1;
    int VAR_18;

    if (!VAR_7)
    {
 if (VAR_5)
     FUNC_0
  (VAR_4, VAR_1, 0,
   VAR_11->mo->angle, VAR_3, VAR_11->mo->x, VAR_11->mo->y);
 else
     FUNC_0
  (VAR_8, VAR_2, 0, VAR_11->mo->angle,
   VAR_3, VAR_11->mo->x, VAR_11->mo->y);
 return;
    }

    for (VAR_14=0;VAR_14<VAR_0;VAR_14++)
    {
 VAR_17++;
 VAR_15 = &VAR_10[VAR_14];

 if ( (VAR_6 && !VAR_13) && VAR_15 != VAR_11)
     continue;

 if (!VAR_9[VAR_14])
     continue;

 if (VAR_15->powers[VAR_12])
     VAR_18 = 246;
 else
     VAR_18 = VAR_16[VAR_17];

 FUNC_0
     (VAR_8, VAR_2, 0, VAR_15->mo->angle,
      VAR_18, VAR_15->mo->x, VAR_15->mo->y);
    }

}
