
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int numpoints; int points; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_17__ {int numpoints; int points; } ;
struct TYPE_19__ {float photons; float* emitColor; TYPE_4__* si; int * color; int origin; int type; int twosided; int * normal; int * plane; TYPE_1__ w; } ;
typedef TYPE_3__ vlight_t ;
typedef float* vec3_t ;
struct TYPE_20__ {float value; float* color; int contents; int backsplashFraction; int backsplashDistance; } ;
typedef TYPE_4__ shaderInfo_t ;
typedef scalar_t__ qboolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,float*,float,int ,TYPE_2__**,TYPE_2__**) ;
 int FUNC_1 (int ,float*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*,int *) ;
 int FUNC_6 (int ,int ,float*,int ) ;
 int FUNC_7 (float*,float,float*) ;
 float FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,float*,float*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 float VAR_4 ;
 float VAR_5 ;
 TYPE_3__* FUNC_11 (int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (TYPE_3__*,int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_3__** VAR_9 ;

void FUNC_14( shaderInfo_t *VAR_10, winding_t *VAR_11, vec3_t VAR_12,
      float VAR_13, qboolean VAR_14 ) {
 float VAR_15, VAR_16, VAR_17;
 vlight_t *VAR_18, *VAR_19;
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
   FUNC_0 ( VAR_11, VAR_25, VAR_26, VAR_3, &VAR_23, &VAR_24 );
   FUNC_14( VAR_10, VAR_23, VAR_12, VAR_13, VAR_7 );
   FUNC_14( VAR_10, VAR_24, VAR_12, VAR_13, VAR_7 );
   FUNC_2( VAR_11 );
   return;
  }
 }


 VAR_15 = FUNC_8 (VAR_11);
 if ( VAR_15 <= 0 || VAR_15 > 20000000 ) {
  return;
 }

 VAR_18 = FUNC_11(sizeof(*VAR_18));
 FUNC_13 (VAR_18, 0, sizeof(*VAR_18));
 VAR_18->type = VAR_1;

 FUNC_10( VAR_11, VAR_18->origin );
 FUNC_12(VAR_18->w.points, VAR_11->points, sizeof(vec3_t) * VAR_11->numpoints);
 VAR_18->w.numpoints = VAR_11->numpoints;
 FUNC_5 ( VAR_12, VAR_18->normal);
 FUNC_5 ( VAR_12, VAR_18->plane);
 VAR_18->plane[3] = FUNC_1( VAR_18->origin, VAR_12 );

 VAR_16 = VAR_10->value;
 VAR_17 = VAR_16 * VAR_15 * VAR_4;
 FUNC_3( VAR_18->origin, VAR_18->normal, VAR_18->origin );

 FUNC_5( VAR_10->color, VAR_18->color );

 VAR_18->photons = VAR_17;


 FUNC_7( VAR_10->color, VAR_16*VAR_5*VAR_4, VAR_18->emitColor );

 FUNC_5(VAR_18->emitColor, VAR_18->color);

 VAR_18->si = VAR_10;

 if ( VAR_10->contents & VAR_0 ) {
  VAR_18->twosided = VAR_8;
 }

 VAR_9[VAR_6++] = VAR_18;


 if ( VAR_14 && VAR_10->backsplashFraction > 0 ) {

  VAR_19 = FUNC_11(sizeof(*VAR_18));
  FUNC_13 (VAR_19, 0, sizeof(*VAR_19));
  VAR_19->type = VAR_2;

  FUNC_6( VAR_18->origin, VAR_10->backsplashDistance, VAR_12, VAR_19->origin );

  FUNC_5( VAR_10->color, VAR_19->color );

  VAR_19->photons = VAR_18->photons * VAR_10->backsplashFraction;
  VAR_19->si = VAR_10;

  VAR_9[VAR_6++] = VAR_19;
 }
}
