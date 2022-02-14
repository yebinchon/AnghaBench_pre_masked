
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {int type; int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_8__ {int* mins; float* maxs; } ;
typedef TYPE_2__ node_t ;
struct TYPE_9__ {size_t planenum; scalar_t__ hint; scalar_t__ priority; int w; void* checked; struct TYPE_9__* next; } ;
typedef TYPE_3__ bspface_t ;


 int VAR_0 ;
 int FUNC_0 (int*,float) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 void* VAR_4 ;
 TYPE_1__* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

int FUNC_4( node_t *VAR_8, bspface_t *VAR_9 ) {
 bspface_t *VAR_10;
 bspface_t *VAR_11;
 bspface_t *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;
 plane_t *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 vec3_t VAR_22;
 float VAR_23;
 int VAR_24;

 VAR_4 = VAR_6;

 for ( VAR_21 = 0 ; VAR_21 < 2 ; VAR_21++ ) {
  VAR_23 = VAR_0 * ( FUNC_3( VAR_8->mins[VAR_21] / VAR_0 ) + 1 );
  if ( VAR_8->maxs[VAR_21] > VAR_23 ) {
   FUNC_1( VAR_22 );
   VAR_22[VAR_21] = 1;
   VAR_24 = FUNC_0( VAR_22, VAR_23 );
   return VAR_24;
  }
 }


 VAR_20 = -99999;
 VAR_12 = VAR_9;

 for ( VAR_10 = VAR_9 ; VAR_10 ; VAR_10 = VAR_10->next ) {
  VAR_10->checked = VAR_6;
 }

 for ( VAR_10 = VAR_9 ; VAR_10 ; VAR_10 = VAR_10->next ) {
  if ( VAR_10->checked ) {
   continue;
  }
  VAR_18 = &VAR_5[ VAR_10->planenum ];
  VAR_13 = 0;
  VAR_14 = 0;
  VAR_15 = 0;
  VAR_16 = 0;
  for ( VAR_11 = VAR_9 ; VAR_11 ; VAR_11 = VAR_11->next ) {
   if ( VAR_11->planenum == VAR_10->planenum ) {
    VAR_14++;
    VAR_11->checked = VAR_7;
    continue;
   }
   VAR_17 = FUNC_2( VAR_11->w, VAR_18->normal, VAR_18->dist );
   if ( VAR_17 == VAR_2 ) {
    VAR_13++;
   } else if ( VAR_17 == VAR_3 ) {
    VAR_15++;
   } else if ( VAR_17 == VAR_1 ) {
    VAR_16++;
   }
  }
  VAR_19 = 5*VAR_14 - 5*VAR_13;
  if ( VAR_18->type < 3 ) {
   VAR_19+=5;
  }
  VAR_19 += VAR_10->priority;

  if ( VAR_19 > VAR_20 ) {
   VAR_20 = VAR_19;
   VAR_12 = VAR_10;
  }
 }

 if ( VAR_20 == -99999 ) {
  return -1;
 }

 if (VAR_12->hint)
  VAR_4 = VAR_7;

 return VAR_12->planenum;
}
