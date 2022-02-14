
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;
typedef int * vec3_t ;
typedef scalar_t__ qboolean ;


 int FUNC_0 (int *,int *,int *) ;
 float FUNC_1 (int * const,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 double FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int * const,int *) ;
 int FUNC_5 (char*,float,int ,int ,int ,int ,int ,int ) ;
 float FUNC_6 (float) ;
 scalar_t__ VAR_1 ;

float FUNC_7( const vec3_t VAR_2, const vec3_t VAR_3, const winding_t *VAR_4 ) {
 vec3_t VAR_5, VAR_6;
 int VAR_7, VAR_8;
 vec3_t VAR_9[VAR_0];
 float VAR_10;
 float VAR_11, VAR_12, VAR_13;

 for ( VAR_7 = 0 ; VAR_7 < VAR_4->numpoints ; VAR_7++ ) {
  FUNC_4( VAR_4->p[VAR_7], VAR_2, VAR_9[VAR_7] );
  FUNC_3( VAR_9[VAR_7], VAR_9[VAR_7] );
 }


 FUNC_2( VAR_9[0], VAR_9[VAR_7] );

 VAR_10 = 0;
 for ( VAR_7 = 0 ; VAR_7 < VAR_4->numpoints ; VAR_7++ ) {
  VAR_8 = VAR_7+1;
  VAR_11 = FUNC_1( VAR_9[VAR_7], VAR_9[VAR_8] );


  if ( VAR_11 > 1.0 ) {
   VAR_11 = 1.0;
  } else if ( VAR_11 < -1.0 ) {
   VAR_11 = -1.0;
  }

  VAR_12 = FUNC_6( VAR_11 );
  FUNC_0( VAR_9[VAR_7], VAR_9[VAR_8], VAR_5 );
  if ( FUNC_3( VAR_5, VAR_6 ) < 0.0001 ) {
   continue;
  }
  VAR_13 = FUNC_1( VAR_3, VAR_6 );
  VAR_10 += VAR_13 * VAR_12;

  if ( VAR_10 > 6.3 || VAR_10 < -6.3 ) {
   static qboolean VAR_14;

   if ( !VAR_14 ) {
    VAR_14 = VAR_1;
    FUNC_5( "WARNING: bad PointToPolygonFormFactor: %f at %1.1f %1.1f %1.1f from %1.1f %1.1f %1.1f\n", VAR_10,
     VAR_4->p[VAR_7][0], VAR_4->p[VAR_7][1], VAR_4->p[VAR_7][2], VAR_2[0], VAR_2[1], VAR_2[2]);
   }
   return 0;
  }

 }

 VAR_10 /= 2*3.141592657;

 return VAR_10;
}
