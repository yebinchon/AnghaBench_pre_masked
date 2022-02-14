
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ acp1; } ;
struct TYPE_18__ {TYPE_2__ function; struct TYPE_18__* next; } ;
typedef TYPE_3__ thinker_t ;
struct TYPE_19__ {int patchcount; TYPE_1__* patches; } ;
typedef TYPE_4__ texture_t ;
struct TYPE_20__ {int* lump; } ;
typedef TYPE_5__ spriteframe_t ;
struct TYPE_21__ {size_t sprite; } ;
typedef TYPE_6__ mobj_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_22__ {int numframes; TYPE_5__* spriteframes; } ;
struct TYPE_16__ {int patch; } ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_14__ {size_t floorpic; size_t ceilingpic; } ;
struct TYPE_13__ {size_t toptexture; size_t midtexture; size_t bottomtexture; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 char* FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_12__* VAR_6 ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_11__* VAR_12 ;
 TYPE_10__* VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_9__* VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_4__** VAR_18 ;
 TYPE_3__ VAR_19 ;

void FUNC_3 (void)
{
    char* VAR_20;
    char* VAR_21;
    char* VAR_22;

    int VAR_23;
    int VAR_24;
    int VAR_25;
    int VAR_26;

    texture_t* VAR_27;
    thinker_t* VAR_28;
    spriteframe_t* VAR_29;

    if (VAR_2)
 return;


    VAR_20 = FUNC_1(VAR_7);
    FUNC_2 (VAR_20,0,VAR_7);

    for (VAR_23=0 ; VAR_23<VAR_8 ; VAR_23++)
    {
 VAR_20[VAR_12[VAR_23].floorpic] = 1;
 VAR_20[VAR_12[VAR_23].ceilingpic] = 1;
    }

    VAR_5 = 0;

    for (VAR_23=0 ; VAR_23<VAR_7 ; VAR_23++)
    {
 if (VAR_20[VAR_23])
 {
     VAR_26 = VAR_3 + VAR_23;
     VAR_5 += VAR_6[VAR_26].size;
     FUNC_0(VAR_26, VAR_0);
 }
    }


    VAR_21 = FUNC_1(VAR_11);
    FUNC_2 (VAR_21,0, VAR_11);

    for (VAR_23=0 ; VAR_23<VAR_9 ; VAR_23++)
    {
 VAR_21[VAR_13[VAR_23].toptexture] = 1;
 VAR_21[VAR_13[VAR_23].midtexture] = 1;
 VAR_21[VAR_13[VAR_23].bottomtexture] = 1;
    }







    VAR_21[VAR_14] = 1;

    VAR_17 = 0;
    for (VAR_23=0 ; VAR_23<VAR_11 ; VAR_23++)
    {
 if (!VAR_21[VAR_23])
     continue;

 VAR_27 = VAR_18[VAR_23];

 for (VAR_24=0 ; VAR_24<VAR_27->patchcount ; VAR_24++)
 {
     VAR_26 = VAR_27->patches[VAR_24].patch;
     VAR_17 += VAR_6[VAR_26].size;
     FUNC_0(VAR_26 , VAR_0);
 }
    }


    VAR_22 = FUNC_1(VAR_10);
    FUNC_2 (VAR_22,0, VAR_10);

    for (VAR_28 = VAR_19.next ; VAR_28 != &VAR_19 ; VAR_28=VAR_28->next)
    {
 if (VAR_28->function.acp1 == (actionf_p1)VAR_1)
     VAR_22[((mobj_t *)VAR_28)->sprite] = 1;
    }

    VAR_15 = 0;
    for (VAR_23=0 ; VAR_23<VAR_10 ; VAR_23++)
    {
 if (!VAR_22[VAR_23])
     continue;

 for (VAR_24=0 ; VAR_24<VAR_16[VAR_23].numframes ; VAR_24++)
 {
     VAR_29 = &VAR_16[VAR_23].spriteframes[VAR_24];
     for (VAR_25=0 ; VAR_25<8 ; VAR_25++)
     {
  VAR_26 = VAR_4 + VAR_29->lump[VAR_25];
  VAR_15 += VAR_6[VAR_26].size;
  FUNC_0(VAR_26 , VAR_0);
     }
 }
    }
}
