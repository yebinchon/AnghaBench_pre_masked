
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_1__ vertex_t ;
struct TYPE_10__ {int * sidenum; int v2; int v1; int tag; int special; int flags; } ;
typedef TYPE_2__ maplinedef_t ;
struct TYPE_11__ {size_t flags; size_t special; size_t tag; scalar_t__ dx; scalar_t__ dy; scalar_t__* bbox; size_t* sidenum; scalar_t__ backsector; scalar_t__ frontsector; int slopetype; TYPE_1__* v2; TYPE_1__* v1; } ;
typedef TYPE_3__ line_t ;
typedef int byte ;
struct TYPE_12__ {scalar_t__ sector; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int,int ,int ) ;
 TYPE_3__* VAR_10 ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int VAR_11 ;
 TYPE_5__* VAR_12 ;
 TYPE_1__* VAR_13 ;

void FUNC_7 (int VAR_14)
{
    byte* VAR_15;
    int VAR_16;
    maplinedef_t* VAR_17;
    line_t* VAR_18;
    vertex_t* VAR_19;
    vertex_t* VAR_20;

    VAR_11 = FUNC_3 (VAR_14) / sizeof(maplinedef_t);
    VAR_10 = FUNC_5 (VAR_11*sizeof(line_t),VAR_4,0);
    FUNC_6 (VAR_10, 0, VAR_11*sizeof(line_t));
    VAR_15 = FUNC_2 (VAR_14,VAR_5);

    VAR_17 = (maplinedef_t *)VAR_15;
    VAR_18 = VAR_10;
    for (VAR_16=0 ; VAR_16<VAR_11 ; VAR_16++, VAR_17++, VAR_18++)
    {
 VAR_18->flags = FUNC_1(VAR_17->flags);
 VAR_18->special = FUNC_1(VAR_17->special);
 VAR_18->tag = FUNC_1(VAR_17->tag);
 VAR_19 = VAR_18->v1 = &VAR_13[FUNC_1(VAR_17->v1)];
 VAR_20 = VAR_18->v2 = &VAR_13[FUNC_1(VAR_17->v2)];
 VAR_18->dx = VAR_20->x - VAR_19->x;
 VAR_18->dy = VAR_20->y - VAR_19->y;

 if (!VAR_18->dx)
     VAR_18->slopetype = VAR_9;
 else if (!VAR_18->dy)
     VAR_18->slopetype = VAR_6;
 else
 {
     if (FUNC_0 (VAR_18->dy , VAR_18->dx) > 0)
  VAR_18->slopetype = VAR_8;
     else
  VAR_18->slopetype = VAR_7;
 }

 if (VAR_19->x < VAR_20->x)
 {
     VAR_18->bbox[VAR_1] = VAR_19->x;
     VAR_18->bbox[VAR_2] = VAR_20->x;
 }
 else
 {
     VAR_18->bbox[VAR_1] = VAR_20->x;
     VAR_18->bbox[VAR_2] = VAR_19->x;
 }

 if (VAR_19->y < VAR_20->y)
 {
     VAR_18->bbox[VAR_0] = VAR_19->y;
     VAR_18->bbox[VAR_3] = VAR_20->y;
 }
 else
 {
     VAR_18->bbox[VAR_0] = VAR_20->y;
     VAR_18->bbox[VAR_3] = VAR_19->y;
 }

 VAR_18->sidenum[0] = FUNC_1(VAR_17->sidenum[0]);
 VAR_18->sidenum[1] = FUNC_1(VAR_17->sidenum[1]);

 if (VAR_18->sidenum[0] != -1)
     VAR_18->frontsector = VAR_12[VAR_18->sidenum[0]].sector;
 else
     VAR_18->frontsector = 0;

 if (VAR_18->sidenum[1] != -1)
     VAR_18->backsector = VAR_12[VAR_18->sidenum[1]].sector;
 else
     VAR_18->backsector = 0;
    }

    FUNC_4 (VAR_15);
}
