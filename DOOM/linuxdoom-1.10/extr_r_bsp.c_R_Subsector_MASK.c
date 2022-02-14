
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numlines; size_t firstline; TYPE_3__* sector; } ;
typedef TYPE_1__ subsector_t ;
typedef int seg_t ;
struct TYPE_6__ {scalar_t__ floorheight; scalar_t__ floorpic; scalar_t__ ceilingheight; scalar_t__ ceilingpic; int lightlevel; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_4 (int VAR_9)
{
    int VAR_10;
    seg_t* VAR_11;
    subsector_t* VAR_12;
    VAR_6++;
    VAR_12 = &VAR_7[VAR_9];
    VAR_2 = VAR_12->sector;
    VAR_10 = VAR_12->numlines;
    VAR_11 = &VAR_4[VAR_12->firstline];

    if (VAR_2->floorheight < VAR_8)
    {
 VAR_1 = FUNC_3 (VAR_2->floorheight,
      VAR_2->floorpic,
      VAR_2->lightlevel);
    }
    else
 VAR_1 = ((void*)0);

    if (VAR_2->ceilingheight > VAR_8
 || VAR_2->ceilingpic == VAR_5)
    {
 VAR_0 = FUNC_3 (VAR_2->ceilingheight,
        VAR_2->ceilingpic,
        VAR_2->lightlevel);
    }
    else
 VAR_0 = ((void*)0);

    FUNC_2 (VAR_2);

    while (VAR_10--)
    {
 FUNC_1 (VAR_11);
 VAR_11++;
    }
}
