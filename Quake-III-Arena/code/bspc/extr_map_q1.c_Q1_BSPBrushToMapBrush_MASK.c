
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int texinfo; int flags; int planenum; scalar_t__ surf; int contents; } ;
typedef TYPE_2__ side_t ;
struct TYPE_17__ {int leafnum; int numsides; int contents; TYPE_2__* original_sides; scalar_t__ brushnum; TYPE_4__* entitynum; } ;
typedef TYPE_3__ mapbrush_t ;
struct TYPE_18__ {int numbrushes; scalar_t__ firstbrush; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_19__ {int numsides; int side; TYPE_1__* sides; } ;
typedef TYPE_5__ bspbrush_t ;
struct TYPE_15__ {int texinfo; int planenum; int winding; } ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;

void FUNC_5(bspbrush_t *VAR_11, entity_t *VAR_12)
{
 mapbrush_t *VAR_13;
 side_t *VAR_14;
 int VAR_15, VAR_16;

 FUNC_2(VAR_11);

 if (VAR_8 >= VAR_0)
 FUNC_3 ("nummapbrushes == MAX_MAPFILE_BRUSHES");

 VAR_13 = &VAR_7[VAR_8];
 VAR_13->original_sides = &VAR_4[VAR_9];
 VAR_13->entitynum = VAR_12 - VAR_6;
 VAR_13->brushnum = VAR_8 - VAR_12->firstbrush;
 VAR_13->leafnum = -1;
 VAR_13->numsides = 0;

 VAR_16 = VAR_3;
 for (VAR_15 = 0; VAR_15 < VAR_11->numsides; VAR_15++)
 {
  if (!VAR_11->sides[VAR_15].winding) continue;

  if (VAR_9 >= VAR_1)
   FUNC_3 ("MAX_MAPFILE_BRUSHSIDES");
  VAR_14 = &VAR_4[VAR_9];

  VAR_14->contents = VAR_11->side;
  VAR_14->surf = 0;
  VAR_14->planenum = VAR_11->sides[VAR_15].planenum;
  VAR_14->texinfo = VAR_11->sides[VAR_15].texinfo;
  if (VAR_14->texinfo != VAR_3)
  {

   VAR_14->flags |= VAR_2;
   VAR_16 = VAR_14->texinfo;
  }

  VAR_9++;
  VAR_13->numsides++;
 }

 if (VAR_16 == VAR_3)
 {
  VAR_13->numsides = 0;
  VAR_10++;
  return;
 }

 for (VAR_15 = 0; VAR_15 < VAR_13->numsides; VAR_15++)
 {
  if (VAR_13->original_sides[VAR_15].texinfo == VAR_3)
  {
   VAR_13->original_sides[VAR_15].texinfo = VAR_16;
  }
 }

 VAR_13->contents = VAR_11->side;

 if (VAR_5)
 {

  FUNC_0(VAR_13, VAR_12, 1);
  return;
 }

 FUNC_4(VAR_13);

 FUNC_1(VAR_13);

 VAR_8++;
 VAR_12->numbrushes++;
}
