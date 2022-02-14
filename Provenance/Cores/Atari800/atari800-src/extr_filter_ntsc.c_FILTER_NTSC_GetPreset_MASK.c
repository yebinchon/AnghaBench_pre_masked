
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int gamma; int brightness; int contrast; int saturation; int hue; } ;
struct TYPE_5__ {int burst_phase; int bleed; int fringing; int artifacts; int resolution; int sharpness; } ;
struct TYPE_4__ {int gamma; int brightness; int contrast; int saturation; int hue; int burst_phase; int bleed; int fringing; int artifacts; int resolution; int sharpness; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,double) ;
 TYPE_1__** VAR_4 ;

int FUNC_1(void)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 ++) {
  if (FUNC_0(VAR_3.sharpness, VAR_4[VAR_5]->sharpness, 0.001) &&
      FUNC_0(VAR_3.resolution, VAR_4[VAR_5]->resolution, 0.001) &&
      FUNC_0(VAR_3.artifacts, VAR_4[VAR_5]->artifacts, 0.001) &&
      FUNC_0(VAR_3.fringing, VAR_4[VAR_5]->fringing, 0.001) &&
      FUNC_0(VAR_3.bleed, VAR_4[VAR_5]->bleed, 0.001) &&
      FUNC_0(VAR_3.burst_phase, VAR_4[VAR_5]->burst_phase, 0.001) &&
      FUNC_0(VAR_0.hue, VAR_4[VAR_5]->hue, 0.001) &&
      FUNC_0(VAR_0.saturation, VAR_4[VAR_5]->saturation, 0.001) &&
      FUNC_0(VAR_0.contrast, VAR_4[VAR_5]->contrast, 0.001) &&
      FUNC_0(VAR_0.brightness, VAR_4[VAR_5]->brightness, 0.001) &&
      FUNC_0(VAR_0.gamma, VAR_4[VAR_5]->gamma, 0.001))
   return VAR_5;
 }
 return VAR_1;
}
