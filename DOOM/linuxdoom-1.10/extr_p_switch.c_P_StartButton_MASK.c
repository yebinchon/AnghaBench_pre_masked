
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mobj_t ;
struct TYPE_6__ {TYPE_1__* frontsector; } ;
typedef TYPE_2__ line_t ;
typedef int bwhere_e ;
struct TYPE_7__ {int btimer; int btexture; int * soundorg; int where; TYPE_2__* line; } ;
struct TYPE_5__ {int soundorg; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;

void
FUNC_1
( line_t* VAR_2,
  bwhere_e VAR_3,
  int VAR_4,
  int VAR_5 )
{
    int VAR_6;


    for (VAR_6 = 0;VAR_6 < VAR_0;VAR_6++)
    {
 if (VAR_1[VAR_6].btimer
     && VAR_1[VAR_6].line == VAR_2)
 {

     return;
 }
    }



    for (VAR_6 = 0;VAR_6 < VAR_0;VAR_6++)
    {
 if (!VAR_1[VAR_6].btimer)
 {
     VAR_1[VAR_6].line = VAR_2;
     VAR_1[VAR_6].where = VAR_3;
     VAR_1[VAR_6].btexture = VAR_4;
     VAR_1[VAR_6].btimer = VAR_5;
     VAR_1[VAR_6].soundorg = (mobj_t *)&VAR_2->frontsector->soundorg;
     return;
 }
    }

    FUNC_0("P_StartButton: no button slots left!");
}
