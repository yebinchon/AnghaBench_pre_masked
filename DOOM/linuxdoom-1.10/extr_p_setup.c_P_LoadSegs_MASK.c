
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int angle; int offset; scalar_t__ backsector; scalar_t__ frontsector; TYPE_4__* sidedef; TYPE_3__* linedef; int * v2; int * v1; } ;
typedef TYPE_1__ seg_t ;
struct TYPE_10__ {int side; int linedef; int offset; int angle; int v2; int v1; } ;
typedef TYPE_2__ mapseg_t ;
struct TYPE_11__ {size_t* sidenum; int flags; } ;
typedef TYPE_3__ line_t ;
typedef int byte ;
struct TYPE_12__ {scalar_t__ sector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int,int ,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 int * VAR_7 ;

void FUNC_6 (int VAR_8)
{
    byte* VAR_9;
    int VAR_10;
    mapseg_t* VAR_11;
    seg_t* VAR_12;
    line_t* VAR_13;
    int VAR_14;
    int VAR_15;

    VAR_4 = FUNC_2 (VAR_8) / sizeof(mapseg_t);
    VAR_5 = FUNC_4 (VAR_4*sizeof(seg_t),VAR_1,0);
    FUNC_5 (VAR_5, 0, VAR_4*sizeof(seg_t));
    VAR_9 = FUNC_1 (VAR_8,VAR_2);

    VAR_11 = (mapseg_t *)VAR_9;
    VAR_12 = VAR_5;
    for (VAR_10=0 ; VAR_10<VAR_4 ; VAR_10++, VAR_12++, VAR_11++)
    {
 VAR_12->v1 = &VAR_7[FUNC_0(VAR_11->v1)];
 VAR_12->v2 = &VAR_7[FUNC_0(VAR_11->v2)];

 VAR_12->angle = (FUNC_0(VAR_11->angle))<<16;
 VAR_12->offset = (FUNC_0(VAR_11->offset))<<16;
 VAR_14 = FUNC_0(VAR_11->linedef);
 VAR_13 = &VAR_3[VAR_14];
 VAR_12->linedef = VAR_13;
 VAR_15 = FUNC_0(VAR_11->side);
 VAR_12->sidedef = &VAR_6[VAR_13->sidenum[VAR_15]];
 VAR_12->frontsector = VAR_6[VAR_13->sidenum[VAR_15]].sector;
 if (VAR_13-> flags & VAR_0)
     VAR_12->backsector = VAR_6[VAR_13->sidenum[VAR_15^1]].sector;
 else
     VAR_12->backsector = 0;
    }

    FUNC_3 (VAR_9);
}
