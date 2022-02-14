
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int winding_t ;
typedef float* vec3_t ;
struct TYPE_6__ {float value; float* color; int contents; int backsplashFraction; int backsplashDistance; } ;
typedef TYPE_1__ shaderInfo_t ;
typedef scalar_t__ qboolean ;
struct TYPE_7__ {float photons; TYPE_1__* si; int color; int origin; int type; void* next; int twosided; int emitColor; int normal; int dist; int * w; } ;
typedef TYPE_2__ light_t ;


 int VAR_0 ;
 int FUNC_0 (int *,float*,float,int ,int **,int **) ;
 int FUNC_1 (int ,float*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*,int ) ;
 int FUNC_6 (int ,int ,float*,int ) ;
 int FUNC_7 (float*,float,int ) ;
 float FUNC_8 (int *) ;
 int FUNC_9 (int *,float*,float*) ;
 int FUNC_10 (int *,int ) ;
 float VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 float VAR_5 ;
 void* VAR_6 ;
 TYPE_2__* FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

void FUNC_13( shaderInfo_t *VAR_10, winding_t *VAR_11, vec3_t VAR_12,
      float VAR_13, qboolean VAR_14 ) {
 float VAR_15, VAR_16, VAR_17;
 light_t *VAR_18, *VAR_19;
 vec3_t VAR_20, VAR_21;
 int VAR_22;
 winding_t *VAR_23, *VAR_24;
 vec3_t VAR_25;
 float VAR_26;

 if ( !VAR_11 ) {
  return;
 }

 FUNC_9( VAR_11, VAR_20, VAR_21 );


 for ( VAR_22 = 0 ; VAR_22 < 3 ; VAR_22++ ) {
  if ( VAR_21[VAR_22] - VAR_20[VAR_22] > VAR_13 ) {
   FUNC_4( VAR_25 );
   VAR_25[VAR_22] = 1;
   VAR_26 = ( VAR_21[VAR_22] + VAR_20[VAR_22] ) * 0.5;
   FUNC_0 ( VAR_11, VAR_25, VAR_26, VAR_1, &VAR_23, &VAR_24 );
   FUNC_13( VAR_10, VAR_23, VAR_12, VAR_13, VAR_8 );
   FUNC_13( VAR_10, VAR_24, VAR_12, VAR_13, VAR_8 );
   FUNC_2( VAR_11 );
   return;
  }
 }


 VAR_15 = FUNC_8 (VAR_11);
 if ( VAR_15 <= 0 || VAR_15 > 20000000 ) {
  return;
 }

 VAR_7++;
 VAR_18 = FUNC_11(sizeof(*VAR_18));
 FUNC_12 (VAR_18, 0, sizeof(*VAR_18));
 VAR_18->next = VAR_6;
 VAR_6 = VAR_18;
 VAR_18->type = VAR_3;

 FUNC_10( VAR_11, VAR_18->origin );
 VAR_18->w = VAR_11;
 FUNC_5 ( VAR_12, VAR_18->normal);
 VAR_18->dist = FUNC_1( VAR_18->origin, VAR_12 );

 VAR_16 = VAR_10->value;
 VAR_17 = VAR_16 * VAR_15 * VAR_2;
 FUNC_3( VAR_18->origin, VAR_18->normal, VAR_18->origin );

 FUNC_5( VAR_10->color, VAR_18->color );

 VAR_18->photons = VAR_17;


 FUNC_7( VAR_10->color, VAR_16*VAR_5*VAR_2, VAR_18->emitColor );

 VAR_18->si = VAR_10;

 if ( VAR_10->contents & VAR_0 ) {
  VAR_18->twosided = VAR_9;
 }


 if ( VAR_14 && VAR_10->backsplashFraction > 0 ) {
  VAR_19 = FUNC_11(sizeof(*VAR_18));
  FUNC_12 (VAR_19, 0, sizeof(*VAR_19));
  VAR_19->next = VAR_6;
  VAR_6 = VAR_19;
  VAR_19->type = VAR_4;

  FUNC_6( VAR_18->origin, VAR_10->backsplashDistance, VAR_12, VAR_19->origin );

  FUNC_5( VAR_10->color, VAR_19->color );

  VAR_19->photons = VAR_18->photons * VAR_10->backsplashFraction;
  VAR_19->si = VAR_10;
 }
}
