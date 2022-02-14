
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_12__ {double* filter; double hitFraction; int* hit; int passSolid; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_13__ {int numOpenLeafs; size_t* openLeafNumbers; int patchshadows; TYPE_1__* trace; int end; int start; } ;
typedef TYPE_2__ traceWork_t ;
struct TYPE_14__ {scalar_t__ patch; } ;
typedef TYPE_3__ surfaceTest_t ;
typedef int qboolean ;
struct TYPE_15__ {int numLeafSurfaces; int firstLeafSurface; } ;
typedef TYPE_4__ dleaf_t ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,int* const,int* const,TYPE_2__*) ;
 int FUNC_2 (int* const,int ) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_3 (int*,int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__** VAR_9 ;

void FUNC_4( const vec3_t VAR_10, const vec3_t VAR_11, trace_t *VAR_12, qboolean VAR_13, traceWork_t *VAR_14 ) {
 int VAR_15;
 int VAR_16, VAR_17;
 dleaf_t *VAR_18;
 float VAR_19;
 surfaceTest_t *VAR_20;
 int VAR_21;
 byte VAR_22[VAR_0/8];
 ;

 if ( VAR_6 == 1 ) {
  VAR_1++;
 }



 VAR_12->filter[0] = 1.0;
 VAR_12->filter[1] = 1.0;
 VAR_12->filter[2] = 1.0;

 FUNC_2( VAR_10, VAR_14->start );
 FUNC_2( VAR_11, VAR_14->end );
 VAR_14->trace = VAR_12;

 VAR_14->numOpenLeafs = 0;

 VAR_12->passSolid = VAR_7;
 VAR_12->hitFraction = 1.0;

 VAR_15 = FUNC_1( 0, VAR_10, VAR_11, VAR_14 );




 if ( VAR_15 && !VAR_13 ) {
  return;
 }

 if ( VAR_4 ) {
  return;
 }

 FUNC_3( VAR_22, 0, (VAR_5+7)/8 );
 VAR_19 = VAR_12->hitFraction;

 for ( VAR_16 = 0 ; VAR_16 < VAR_14->numOpenLeafs ; VAR_16++ ) {
  VAR_18 = &VAR_2[ VAR_14->openLeafNumbers[ VAR_16 ] ];
  for ( VAR_17 = 0 ; VAR_17 < VAR_18->numLeafSurfaces ; VAR_17++ ) {
   VAR_21 = VAR_3[ VAR_18->firstLeafSurface + VAR_17 ];


   if ( VAR_22[ VAR_21>>3 ] & ( 1 << ( VAR_21 & 7) ) ) {
    continue;
   }
   VAR_22[ VAR_21>>3 ] |= ( 1 << ( VAR_21 & 7 ) );

   VAR_20 = VAR_9[ VAR_21 ];
   if ( !VAR_20 ) {
    continue;
   }

   if ( !VAR_14->patchshadows && VAR_20->patch ) {
    continue;
   }
   FUNC_0( VAR_14, VAR_20 );
  }


  if ( VAR_12->hitFraction < VAR_19 ) {
   VAR_12->passSolid = VAR_8;
   break;
  }
 }

 for ( VAR_16 = 0 ; VAR_16 < 3 ; VAR_16++ ) {
  VAR_12->hit[VAR_16] = VAR_10[VAR_16] + ( VAR_11[VAR_16] - VAR_10[VAR_16] ) * VAR_12->hitFraction;
 }
}
