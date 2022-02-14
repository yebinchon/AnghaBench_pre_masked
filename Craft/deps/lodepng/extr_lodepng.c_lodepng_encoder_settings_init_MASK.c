
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filter_palette_zero; int text_compression; scalar_t__ add_id; scalar_t__ predefined_filters; scalar_t__ force_palette; int auto_convert; int filter_strategy; int zlibsettings; } ;
typedef TYPE_1__ LodePNGEncoderSettings ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(LodePNGEncoderSettings* VAR_2)
{
  FUNC_0(&VAR_2->zlibsettings);
  VAR_2->filter_palette_zero = 1;
  VAR_2->filter_strategy = VAR_1;
  VAR_2->auto_convert = VAR_0;
  VAR_2->force_palette = 0;
  VAR_2->predefined_filters = 0;




}
