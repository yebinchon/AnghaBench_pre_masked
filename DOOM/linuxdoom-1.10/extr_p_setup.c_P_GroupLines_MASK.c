
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {size_t firstline; int sector; } ;
typedef TYPE_5__ subsector_t ;
struct TYPE_19__ {TYPE_1__* sidedef; } ;
typedef TYPE_6__ seg_t ;
struct TYPE_17__ {int x; int y; } ;
struct TYPE_20__ {int linecount; int* blockbox; TYPE_4__ soundorg; TYPE_8__** lines; } ;
typedef TYPE_7__ sector_t ;
struct TYPE_21__ {TYPE_3__* v2; TYPE_2__* v1; TYPE_7__* backsector; TYPE_7__* frontsector; } ;
typedef TYPE_8__ line_t ;
typedef int fixed_t ;
struct TYPE_16__ {int y; int x; } ;
struct TYPE_15__ {int y; int x; } ;
struct TYPE_14__ {int sector; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (int*) ;
 int VAR_6 ;
 TYPE_8__** FUNC_3 (int,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_8__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_7__* VAR_15 ;
 TYPE_6__* VAR_16 ;
 TYPE_5__* VAR_17 ;

void FUNC_4 (void)
{
    line_t** VAR_18;
    int VAR_19;
    int VAR_20;
    int VAR_21;
    line_t* VAR_22;
    sector_t* VAR_23;
    subsector_t* VAR_24;
    seg_t* VAR_25;
    fixed_t VAR_26[4];
    int VAR_27;


    VAR_24 = VAR_17;
    for (VAR_19=0 ; VAR_19<VAR_14 ; VAR_19++, VAR_24++)
    {
 VAR_25 = &VAR_16[VAR_24->firstline];
 VAR_24->sector = VAR_25->sidedef->sector;
    }


    VAR_22 = VAR_11;
    VAR_21 = 0;
    for (VAR_19=0 ; VAR_19<VAR_12 ; VAR_19++, VAR_22++)
    {
 VAR_21++;
 VAR_22->frontsector->linecount++;

 if (VAR_22->backsector && VAR_22->backsector != VAR_22->frontsector)
 {
     VAR_22->backsector->linecount++;
     VAR_21++;
 }
    }


    VAR_18 = FUNC_3 (VAR_21*4, VAR_6, 0);
    VAR_23 = VAR_15;
    for (VAR_19=0 ; VAR_19<VAR_13 ; VAR_19++, VAR_23++)
    {
 FUNC_2 (VAR_26);
 VAR_23->lines = VAR_18;
 VAR_22 = VAR_11;
 for (VAR_20=0 ; VAR_20<VAR_12 ; VAR_20++, VAR_22++)
 {
     if (VAR_22->frontsector == VAR_23 || VAR_22->backsector == VAR_23)
     {
  *VAR_18++ = VAR_22;
  FUNC_1 (VAR_26, VAR_22->v1->x, VAR_22->v1->y);
  FUNC_1 (VAR_26, VAR_22->v2->x, VAR_22->v2->y);
     }
 }
 if (VAR_18 - VAR_23->lines != VAR_23->linecount)
     FUNC_0 ("P_GroupLines: miscounted");


 VAR_23->soundorg.x = (VAR_26[VAR_2]+VAR_26[VAR_1])/2;
 VAR_23->soundorg.y = (VAR_26[VAR_3]+VAR_26[VAR_0])/2;


 VAR_27 = (VAR_26[VAR_3]-VAR_9+VAR_5)>>VAR_4;
 VAR_27 = VAR_27 >= VAR_7 ? VAR_7-1 : VAR_27;
 VAR_23->blockbox[VAR_3]=VAR_27;

 VAR_27 = (VAR_26[VAR_0]-VAR_9-VAR_5)>>VAR_4;
 VAR_27 = VAR_27 < 0 ? 0 : VAR_27;
 VAR_23->blockbox[VAR_0]=VAR_27;

 VAR_27 = (VAR_26[VAR_2]-VAR_8+VAR_5)>>VAR_4;
 VAR_27 = VAR_27 >= VAR_10 ? VAR_10-1 : VAR_27;
 VAR_23->blockbox[VAR_2]=VAR_27;

 VAR_27 = (VAR_26[VAR_1]-VAR_8-VAR_5)>>VAR_4;
 VAR_27 = VAR_27 < 0 ? 0 : VAR_27;
 VAR_23->blockbox[VAR_1]=VAR_27;
    }

}
