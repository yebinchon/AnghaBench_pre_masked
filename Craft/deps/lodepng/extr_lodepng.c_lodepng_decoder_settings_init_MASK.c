
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int color_convert; int read_text_chunks; int zlibsettings; scalar_t__ fix_png; scalar_t__ ignore_crc; scalar_t__ remember_unknown_chunks; } ;
typedef TYPE_1__ LodePNGDecoderSettings ;


 int FUNC_0 (int *) ;

void FUNC_1(LodePNGDecoderSettings* VAR_0)
{
  VAR_0->color_convert = 1;




  VAR_0->ignore_crc = 0;
  VAR_0->fix_png = 0;
  FUNC_0(&VAR_0->zlibsettings);
}
