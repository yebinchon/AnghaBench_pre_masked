
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int traceWork_t ;
struct TYPE_7__ {int forceSunLight; int noVertexShadows; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_8__ {size_t shaderNum; scalar_t__ surfaceType; } ;
typedef TYPE_2__ dsurface_t ;
struct TYPE_9__ {int shader; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,double,int *) ;
 TYPE_2__* VAR_1 ;
 TYPE_3__* VAR_2 ;

void FUNC_2(int VAR_3) {
 dsurface_t *VAR_4;
 traceWork_t VAR_5;
 shaderInfo_t *VAR_6;

 VAR_4 = &VAR_1[VAR_3];
 VAR_6 = FUNC_0( VAR_2[ VAR_4->shaderNum].shader );


 if ( VAR_4->surfaceType == VAR_0 ) {
  FUNC_1( VAR_4, !VAR_6->noVertexShadows, VAR_6->forceSunLight, 1.0, &VAR_5 );
 }
}
