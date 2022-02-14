
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int forceTraceLight; scalar_t__ forceVLight; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_7__ {scalar_t__ surfaceType; scalar_t__ lightmapNum; size_t shaderNum; } ;
typedef TYPE_2__ dsurface_t ;
struct TYPE_8__ {int shader; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int * VAR_4 ;

void FUNC_2(int VAR_5)
{
 dsurface_t *VAR_6;
 shaderInfo_t *VAR_7;

 VAR_6 = &VAR_2[VAR_5];

 if ( VAR_6->surfaceType == VAR_0 )
  return;

 if ( VAR_6->lightmapNum < 0 )
  return;


 if ( !VAR_4[VAR_5] )
 {
  VAR_7 = FUNC_0( VAR_3[ VAR_6->shaderNum].shader );

  if (VAR_1)
  {
   if (VAR_7->forceVLight)
    return;
  }
  else
  {
   if (!VAR_7->forceTraceLight)
    return;
  }
 }

 FUNC_1(VAR_5);
}
