
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lightmapNum; } ;
typedef TYPE_1__ dsurface_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;

void FUNC_2( void ) {
 int VAR_6;
 int VAR_7;
 dsurface_t *VAR_8;

 FUNC_1 ("--- CountLightmaps ---\n");
 VAR_6 = 0;
 for ( VAR_7 = 0 ; VAR_7 < VAR_4 ; VAR_7++ ) {

  VAR_8 = &VAR_3[VAR_7];
  if ( VAR_8->lightmapNum > VAR_6 ) {
   VAR_6 = VAR_8->lightmapNum;
  }
 }

 VAR_6++;
 VAR_5 = VAR_6 * VAR_1 * VAR_0 * 3;
 if ( VAR_5 > VAR_2 ) {
  FUNC_0("MAX_MAP_LIGHTING exceeded");
 }

 FUNC_1( "%5i drawSurfaces\n", VAR_4 );
 FUNC_1( "%5i lightmaps\n", VAR_6 );
}
