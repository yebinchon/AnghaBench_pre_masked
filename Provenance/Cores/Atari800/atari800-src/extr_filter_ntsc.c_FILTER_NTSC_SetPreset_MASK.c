
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gamma; int brightness; int contrast; int saturation; int hue; } ;
struct TYPE_4__ {int gamma; int brightness; int contrast; int saturation; int hue; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__** VAR_3 ;

void FUNC_0(int VAR_4)
{
 if (VAR_4 < VAR_1) {
  VAR_2 = *VAR_3[VAR_4];


  VAR_0.hue = VAR_2.hue;
  VAR_0.saturation = VAR_2.saturation;
  VAR_0.contrast = VAR_2.contrast;
  VAR_0.brightness = VAR_2.brightness;
  VAR_0.gamma = VAR_2.gamma;
 }
}
