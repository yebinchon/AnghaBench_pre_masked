
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* drawSurfReferences; scalar_t__ opaque; TYPE_5__* brushlist; int maxs; int mins; int area; int cluster; } ;
typedef TYPE_2__ node_t ;
struct TYPE_10__ {int outputNumber; struct TYPE_10__* nextRef; } ;
typedef TYPE_3__ drawSurfRef_t ;
struct TYPE_11__ {size_t firstLeafBrush; size_t numLeafBrushes; size_t firstLeafSurface; size_t numLeafSurfaces; int maxs; int mins; int area; int cluster; } ;
typedef TYPE_4__ dleaf_t ;
struct TYPE_12__ {TYPE_1__* original; struct TYPE_12__* next; } ;
typedef TYPE_5__ bspbrush_t ;
struct TYPE_8__ {int outputNumber; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int * VAR_3 ;
 TYPE_4__* VAR_4 ;
 int * VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

void FUNC_2 (node_t *VAR_9)
{
 dleaf_t *VAR_10;
 bspbrush_t *VAR_11;
 drawSurfRef_t *VAR_12;


 if (VAR_7 >= VAR_2)
  FUNC_0 ("MAX_MAP_LEAFS");

 VAR_10 = &VAR_4[VAR_7];
 VAR_7++;

 VAR_10->cluster = VAR_9->cluster;
 VAR_10->area = VAR_9->area;




 FUNC_1 (VAR_9->mins, VAR_10->mins);
 FUNC_1 (VAR_9->maxs, VAR_10->maxs);




 VAR_10->firstLeafBrush = VAR_6;
 for ( VAR_11 = VAR_9->brushlist ; VAR_11 ; VAR_11 = VAR_11->next ) {
  if ( VAR_6 >= VAR_0 ) {
   FUNC_0( "MAX_MAP_LEAFBRUSHES" );
  }
  VAR_3[VAR_6] = VAR_11->original->outputNumber;
  VAR_6++;
 }
 VAR_10->numLeafBrushes = VAR_6 - VAR_10->firstLeafBrush;




 if ( VAR_9->opaque ) {
  return;
 }


 VAR_10->firstLeafSurface = VAR_8;
 for ( VAR_12 = VAR_9->drawSurfReferences ; VAR_12 ; VAR_12 = VAR_12->nextRef ) {
  if ( VAR_8 >= VAR_1)
   FUNC_0 ("MAX_MAP_LEAFFACES");
  VAR_5[VAR_8] = VAR_12->outputNumber;
  VAR_8++;
 }


 VAR_10->numLeafSurfaces = VAR_8 - VAR_10->firstLeafSurface;
}
