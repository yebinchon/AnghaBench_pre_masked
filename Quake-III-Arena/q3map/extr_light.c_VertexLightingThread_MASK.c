
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int traceWork_t ;
struct TYPE_7__ {int vertexScale; int forceSunLight; int vertexShadows; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_8__ {scalar_t__ surfaceType; int lightmapNum; size_t shaderNum; } ;
typedef TYPE_2__ dsurface_t ;
struct TYPE_9__ {int shader; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int *) ;
 TYPE_2__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_2(int VAR_4) {
 dsurface_t *VAR_5;
 traceWork_t VAR_6;
 shaderInfo_t *VAR_7;

 VAR_5 = &VAR_1[VAR_4];


 if ( VAR_5->surfaceType == VAR_0 ) {
  return;
 }

 if (VAR_3)
  return;

 if ( VAR_5->lightmapNum == -1 ) {
  return;
 }

 VAR_7 = FUNC_0( VAR_2[ VAR_5->shaderNum].shader );


 FUNC_1( VAR_5, VAR_7->vertexShadows, VAR_7->forceSunLight, VAR_7->vertexScale, &VAR_6 );
}
