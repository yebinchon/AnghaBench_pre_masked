
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float viewportWidth; float viewportHeight; } ;
typedef TYPE_1__ viewParms_t ;
typedef int* vec4_t ;



void FUNC_0( const vec4_t VAR_0, const viewParms_t *VAR_1, vec4_t VAR_2, vec4_t VAR_3 ) {
 VAR_2[0] = VAR_0[0] / VAR_0[3];
 VAR_2[1] = VAR_0[1] / VAR_0[3];
 VAR_2[2] = ( VAR_0[2] + VAR_0[3] ) / ( 2 * VAR_0[3] );

 VAR_3[0] = 0.5f * ( 1.0f + VAR_2[0] ) * VAR_1->viewportWidth;
 VAR_3[1] = 0.5f * ( 1.0f + VAR_2[1] ) * VAR_1->viewportHeight;
 VAR_3[2] = VAR_2[2];

 VAR_3[0] = (int) ( VAR_3[0] + 0.5 );
 VAR_3[1] = (int) ( VAR_3[1] + 0.5 );
}
