
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ceilingheight; scalar_t__ floorheight; } ;
typedef TYPE_1__ sector_t ;
struct TYPE_5__ {int* sidenum; TYPE_1__* backsector; TYPE_1__* frontsector; } ;
typedef TYPE_2__ line_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_0 (line_t* VAR_4)
{
    sector_t* VAR_5;
    sector_t* VAR_6;

    if (VAR_4->sidenum[1] == -1)
    {

 VAR_2 = 0;
 return;
    }

    VAR_5 = VAR_4->frontsector;
    VAR_6 = VAR_4->backsector;

    if (VAR_5->ceilingheight < VAR_6->ceilingheight)
 VAR_3 = VAR_5->ceilingheight;
    else
 VAR_3 = VAR_6->ceilingheight;

    if (VAR_5->floorheight > VAR_6->floorheight)
    {
 VAR_1 = VAR_5->floorheight;
 VAR_0 = VAR_6->floorheight;
    }
    else
    {
 VAR_1 = VAR_6->floorheight;
 VAR_0 = VAR_5->floorheight;
    }

    VAR_2 = VAR_3 - VAR_1;
}
