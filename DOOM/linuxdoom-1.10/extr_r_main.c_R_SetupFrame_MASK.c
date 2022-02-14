
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fixedcolormap; int viewz; int extralight; TYPE_1__* mo; } ;
typedef TYPE_2__ player_t ;
typedef int lighttable_t ;
struct TYPE_5__ {size_t angle; int y; int x; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__* VAR_19 ;

void FUNC_0 (player_t* VAR_20)
{
    int VAR_21;

    VAR_14 = VAR_20;
    VAR_16 = VAR_20->mo->x;
    VAR_17 = VAR_20->mo->y;
    VAR_11 = VAR_20->mo->angle + VAR_12;
    VAR_3 = VAR_20->extralight;

    VAR_18 = VAR_20->viewz;

    VAR_15 = VAR_5[VAR_11>>VAR_0];
    VAR_13 = VAR_4[VAR_11>>VAR_0];

    VAR_9 = 0;

    if (VAR_20->fixedcolormap)
    {
 VAR_6 =
     VAR_2
     + VAR_20->fixedcolormap*256*sizeof(lighttable_t);

 VAR_19 = VAR_8;

 for (VAR_21=0 ; VAR_21<VAR_1 ; VAR_21++)
     VAR_8[VAR_21] = VAR_6;
    }
    else
 VAR_6 = 0;

    VAR_7++;
    VAR_10++;
}
