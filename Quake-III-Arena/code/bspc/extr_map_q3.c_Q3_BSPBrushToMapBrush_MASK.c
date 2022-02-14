
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int flags; int contents; int surf; int planenum; int texinfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_22__ {int dist; int normal; } ;
typedef TYPE_2__ q3_dplane_t ;
struct TYPE_23__ {size_t shaderNum; size_t planeNum; } ;
typedef TYPE_3__ q3_dbrushside_t ;
struct TYPE_24__ {int numSides; int firstSide; size_t shaderNum; } ;
typedef TYPE_4__ q3_dbrush_t ;
struct TYPE_25__ {int numsides; int contents; TYPE_1__* original_sides; scalar_t__ brushnum; TYPE_6__* entitynum; int leafnum; } ;
typedef TYPE_5__ mapbrush_t ;
struct TYPE_26__ {int numbrushes; scalar_t__ firstbrush; } ;
typedef TYPE_6__ entity_t ;
struct TYPE_27__ {int contentFlags; int surfaceFlags; int shader; } ;


 int FUNC_0 (TYPE_5__*,TYPE_6__*,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,TYPE_6__*,scalar_t__) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 TYPE_5__* VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 TYPE_4__* VAR_28 ;
 TYPE_3__* VAR_29 ;
 scalar_t__* VAR_30 ;
 TYPE_2__* VAR_31 ;
 TYPE_7__* VAR_32 ;
 scalar_t__ FUNC_7 (int ,char*) ;

void FUNC_8(q3_dbrush_t *VAR_33, entity_t *VAR_34)
{
 mapbrush_t *VAR_35;
 int VAR_36, VAR_37, VAR_38;
 side_t *VAR_39, *VAR_40;
 int VAR_41;
 q3_dbrushside_t *VAR_42;
 q3_dplane_t *VAR_43;

 if (VAR_26 >= VAR_9)
  FUNC_2 ("nummapbrushes >= MAX_MAPFILE_BRUSHES");

 VAR_35 = &VAR_23[VAR_26];
 VAR_35->original_sides = &VAR_17[VAR_27];
 VAR_35->entitynum = VAR_34-VAR_22;
 VAR_35->brushnum = VAR_26 - VAR_34->firstbrush;
 VAR_35->leafnum = VAR_21[VAR_33 - VAR_28];

 for (VAR_38 = 0; VAR_38 < VAR_33->numSides; VAR_38++)
 {

  VAR_42 = &VAR_29[VAR_33->firstSide + VAR_38];

  if (VAR_27 >= VAR_10)
  {
   FUNC_2 ("MAX_MAPFILE_BRUSHSIDES");
  }

  VAR_39 = &VAR_17[VAR_27];

  if (VAR_30[VAR_33->firstSide + VAR_38]) VAR_39->flags |= VAR_11|VAR_12;
  else VAR_39->flags &= ~VAR_11;



  if (VAR_42->shaderNum < 0)
  {
   VAR_39->contents = 0;
   VAR_39->surf = 0;
  }
  else
  {
   VAR_39->contents = VAR_32[VAR_42->shaderNum].contentFlags;
   VAR_39->surf = VAR_32[VAR_42->shaderNum].surfaceFlags;
   if (FUNC_7(VAR_32[VAR_42->shaderNum].shader, "common/hint"))
   {

    VAR_39->surf |= VAR_13;
   }
  }

  if (VAR_39->surf & VAR_14)
  {
   VAR_39->flags |= VAR_11|VAR_12;
  }







  if (VAR_39->surf & (VAR_13|VAR_15) )
  {
   VAR_39->contents = 0;

  }
  VAR_43 = &VAR_31[VAR_42->planeNum];
  VAR_41 = FUNC_3(VAR_43->normal, VAR_43->dist);







  for (VAR_37 = 0; VAR_37 < VAR_35->numsides; VAR_37++)
  {
   VAR_40 = VAR_35->original_sides + VAR_37;



   if (VAR_40->planenum == VAR_41)
   {
    FUNC_4("Entity %i, Brush %i: duplicate plane\n"
     , VAR_35->entitynum, VAR_35->brushnum);
    break;
   }
   if ( VAR_40->planenum == (VAR_41^1) )
   {
    FUNC_4("Entity %i, Brush %i: mirrored plane\n"
     , VAR_35->entitynum, VAR_35->brushnum);
    break;
   }
  }
  if (VAR_37 != VAR_35->numsides)
   continue;





  VAR_39 = VAR_35->original_sides + VAR_35->numsides;

  VAR_39->planenum = VAR_41;
  VAR_27++;
  VAR_35->numsides++;
 }


 VAR_35->contents = VAR_32[VAR_33->shaderNum].contentFlags;
 VAR_35->contents &= ~(VAR_2|VAR_1|VAR_7);



 if (FUNC_1(VAR_35))
 {
  VAR_19++;
  VAR_35->numsides = 0;
  return;
 }


 if (VAR_20)
 {

  FUNC_0(VAR_35, VAR_34, 0);
  return;
 }


 if (VAR_24 && (VAR_35->contents & VAR_0) )
 {
  VAR_35->numsides = 0;
  return;
 }


 if (VAR_25 && (VAR_35->contents & (VAR_3 | VAR_6 | VAR_8)) )
 {
  VAR_35->numsides = 0;
  return;
 }


 FUNC_5(VAR_35);


 FUNC_6(VAR_35);



 if (VAR_35->contents & (VAR_5|VAR_4) )
 {
   VAR_18++;
  for (VAR_36 = 0; VAR_36 < VAR_35->numsides; VAR_36++)
   VAR_35->original_sides[VAR_36].texinfo = VAR_16;
 }
 VAR_26++;
 VAR_34->numbrushes++;
}
