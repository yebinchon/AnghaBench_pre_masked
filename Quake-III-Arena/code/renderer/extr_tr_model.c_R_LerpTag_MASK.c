
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qhandle_t ;
struct TYPE_7__ {float** axis; float* origin; } ;
typedef TYPE_1__ orientation_t ;
struct TYPE_8__ {int * md3; } ;
typedef TYPE_2__ model_t ;
struct TYPE_9__ {float* origin; float** axis; } ;
typedef TYPE_3__ md3Tag_t ;


 int FUNC_0 (float**) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,int,char const*) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (float*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5( orientation_t *VAR_2, qhandle_t VAR_3, int VAR_4, int VAR_5,
      float VAR_6, const char *VAR_7 ) {
 md3Tag_t *VAR_8, *VAR_9;
 int VAR_10;
 float VAR_11, VAR_12;
 model_t *VAR_13;

 VAR_13 = FUNC_1( VAR_3 );
 if ( !VAR_13->md3[0] ) {
  FUNC_0( VAR_2->axis );
  FUNC_3( VAR_2->origin );
  return VAR_0;
 }

 VAR_8 = FUNC_2( VAR_13->md3[0], VAR_4, VAR_7 );
 VAR_9 = FUNC_2( VAR_13->md3[0], VAR_5, VAR_7 );
 if ( !VAR_8 || !VAR_9 ) {
  FUNC_0( VAR_2->axis );
  FUNC_3( VAR_2->origin );
  return VAR_0;
 }

 VAR_11 = VAR_6;
 VAR_12 = 1.0f - VAR_6;

 for ( VAR_10 = 0 ; VAR_10 < 3 ; VAR_10++ ) {
  VAR_2->origin[VAR_10] = VAR_8->origin[VAR_10] * VAR_12 + VAR_9->origin[VAR_10] * VAR_11;
  VAR_2->axis[0][VAR_10] = VAR_8->axis[0][VAR_10] * VAR_12 + VAR_9->axis[0][VAR_10] * VAR_11;
  VAR_2->axis[1][VAR_10] = VAR_8->axis[1][VAR_10] * VAR_12 + VAR_9->axis[1][VAR_10] * VAR_11;
  VAR_2->axis[2][VAR_10] = VAR_8->axis[2][VAR_10] * VAR_12 + VAR_9->axis[2][VAR_10] * VAR_11;
 }
 FUNC_4( VAR_2->axis[0] );
 FUNC_4( VAR_2->axis[1] );
 FUNC_4( VAR_2->axis[2] );
 return VAR_1;
}
