
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int atari_ntsc_t ;
struct TYPE_7__ {int adjust; scalar_t__ loaded; } ;
struct TYPE_6__ {double hue; double saturation; double contrast; double brightness; } ;
struct TYPE_5__ {int burst_phase; double hue; double saturation; double contrast; double brightness; double* yiq_palette; } ;


 int FUNC_0 (double*,int) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*) ;

void FUNC_2(atari_ntsc_t *VAR_4)
{
 double VAR_5[768];

 FUNC_0(VAR_5, VAR_2.burst_phase * VAR_3);



 if (VAR_0.loaded && !VAR_0.adjust) {



  VAR_2.hue = 0.0;
  VAR_2.saturation = 0.0;
  VAR_2.contrast = 0.0;
  VAR_2.brightness = 0.0;
 } else {



  VAR_2.hue = VAR_1.hue;
  VAR_2.saturation = VAR_1.saturation;
  VAR_2.contrast = VAR_1.contrast;
  VAR_2.brightness = VAR_1.brightness;
 }

 VAR_2.yiq_palette = VAR_5;
 FUNC_1(VAR_4, &VAR_2);
}
