
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double vertexScale; void* notjunc; void* forceSunLight; void* noVertexShadows; void* vertexShadows; void* patchShadows; void* forceVLight; void* forceTraceLight; scalar_t__ lightmapSampleSize; int backsplashDistance; int backsplashFraction; int contents; } ;
typedef TYPE_1__ shaderInfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static shaderInfo_t *FUNC_1( void ) {
 shaderInfo_t *VAR_7;

 if ( VAR_4 == VAR_3 ) {
  FUNC_0( "MAX_SURFACE_INFO" );
 }
 VAR_7 = &VAR_6[ VAR_4 ];
 VAR_4++;



 VAR_7->contents = VAR_0;

 VAR_7->backsplashFraction = VAR_2;
 VAR_7->backsplashDistance = VAR_1;

 VAR_7->lightmapSampleSize = 0;
 VAR_7->forceTraceLight = VAR_5;
 VAR_7->forceVLight = VAR_5;
 VAR_7->patchShadows = VAR_5;
 VAR_7->vertexShadows = VAR_5;
 VAR_7->noVertexShadows = VAR_5;
 VAR_7->forceSunLight = VAR_5;
 VAR_7->vertexScale = 1.0;
 VAR_7->notjunc = VAR_5;

 return VAR_7;
}
