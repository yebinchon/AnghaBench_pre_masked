
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ black_level; scalar_t__ white_level; int gamma; int brightness; int contrast; int saturation; int hue; } ;
struct TYPE_3__ {scalar_t__ black_level; scalar_t__ white_level; int gamma; int brightness; int contrast; int saturation; int hue; } ;
typedef int Colours_preset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,double) ;
 TYPE_1__* VAR_7 ;

Colours_preset_t FUNC_3(void)
{
 int VAR_8;

 if ((VAR_2 == VAR_0 &&
      FUNC_0() != VAR_5) ||
     (VAR_2 == VAR_1 &&
      FUNC_1() != VAR_5))
  return VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8 ++) {
  if (FUNC_2(VAR_6->hue, VAR_7[VAR_8].hue, 0.001) &&
      FUNC_2(VAR_6->saturation, VAR_7[VAR_8].saturation, 0.001) &&
      FUNC_2(VAR_6->contrast, VAR_7[VAR_8].contrast, 0.001) &&
      FUNC_2(VAR_6->brightness, VAR_7[VAR_8].brightness, 0.001) &&
      FUNC_2(VAR_6->gamma, VAR_7[VAR_8].gamma, 0.001) &&
      VAR_6->black_level == VAR_7[VAR_8].black_level &&
      VAR_6->white_level == VAR_7[VAR_8].white_level)
   return VAR_8;
 }
 return VAR_3;
}
