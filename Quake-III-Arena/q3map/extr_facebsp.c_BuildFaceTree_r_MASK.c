
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_13__ {int* normal; int dist; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_14__ {int planenum; struct TYPE_14__** children; int * maxs; int * mins; struct TYPE_14__* parent; int hint; } ;
typedef TYPE_2__ node_t ;
struct TYPE_15__ {int planenum; struct TYPE_15__* next; int hint; int priority; int * w; } ;
typedef TYPE_3__ bspface_t ;


 TYPE_3__* FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int*,int ,int,int **,int **) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_8( node_t *VAR_8, bspface_t *VAR_9 ) {
 bspface_t *VAR_10;
 bspface_t *VAR_11;
 int VAR_12;
 plane_t *VAR_13;
 bspface_t *VAR_14;
 bspface_t *VAR_15[2];
 winding_t *VAR_16, *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = FUNC_3( VAR_9 );

 VAR_19 = FUNC_5( VAR_8, VAR_9 );

 if ( VAR_19 == -1 ) {
  VAR_8->planenum = VAR_1;
  VAR_5++;
  return;
 }


 VAR_8->planenum = VAR_19;
 VAR_8->hint = VAR_6;
 VAR_13 = &VAR_7[ VAR_19 ];
 VAR_15[0] = ((void*)0);
 VAR_15[1] = ((void*)0);
 for ( VAR_10 = VAR_9 ; VAR_10 ; VAR_10 = VAR_11 ) {
  VAR_11 = VAR_10->next;

  if ( VAR_10->planenum == VAR_8->planenum ) {
   FUNC_4( VAR_10 );
   continue;
  }

  VAR_12 = FUNC_7( VAR_10->w, VAR_13->normal, VAR_13->dist );

  if ( VAR_12 == VAR_3 ) {
   FUNC_2( VAR_10->w, VAR_13->normal, VAR_13->dist, VAR_0 * 2,
    &VAR_16, &VAR_17 );
   if ( VAR_16 ) {
    VAR_14 = FUNC_0();
    VAR_14->w = VAR_16;
    VAR_14->next = VAR_15[0];
    VAR_14->planenum = VAR_10->planenum;
    VAR_14->priority = VAR_10->priority;
    VAR_14->hint = VAR_10->hint;
    VAR_15[0] = VAR_14;
   }
   if ( VAR_17 ) {
    VAR_14 = FUNC_0();
    VAR_14->w = VAR_17;
    VAR_14->next = VAR_15[1];
    VAR_14->planenum = VAR_10->planenum;
    VAR_14->priority = VAR_10->priority;
    VAR_14->hint = VAR_10->hint;
    VAR_15[1] = VAR_14;
   }
   FUNC_4( VAR_10 );
  } else if ( VAR_12 == VAR_4 ) {
   VAR_10->next = VAR_15[0];
   VAR_15[0] = VAR_10;
  } else if ( VAR_12 == VAR_2 ) {
   VAR_10->next = VAR_15[1];
   VAR_15[1] = VAR_10;
  }
 }



 for ( VAR_18 = 0 ; VAR_18 < 2 ; VAR_18++ ) {
  VAR_8->children[VAR_18] = FUNC_1();
  VAR_8->children[VAR_18]->parent = VAR_8;
  FUNC_6( VAR_8->mins, VAR_8->children[VAR_18]->mins );
  FUNC_6( VAR_8->maxs, VAR_8->children[VAR_18]->maxs );
 }

 for ( VAR_18 = 0 ; VAR_18 < 3 ; VAR_18++ ) {
  if ( VAR_13->normal[VAR_18] == 1 ) {
   VAR_8->children[0]->mins[VAR_18] = VAR_13->dist;
   VAR_8->children[1]->maxs[VAR_18] = VAR_13->dist;
   break;
  }
 }

 for ( VAR_18 = 0 ; VAR_18 < 2 ; VAR_18++ ) {
  FUNC_8 ( VAR_8->children[VAR_18], VAR_15[VAR_18]);
 }
}
