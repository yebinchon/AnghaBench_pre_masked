
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitdepth; scalar_t__ palettesize; scalar_t__ palette; int colortype; scalar_t__ key_b; scalar_t__ key_g; scalar_t__ key_r; scalar_t__ key_defined; } ;
typedef TYPE_1__ LodePNGColorMode ;


 int VAR_0 ;

void FUNC_0(LodePNGColorMode* VAR_1)
{
  VAR_1->key_defined = 0;
  VAR_1->key_r = VAR_1->key_g = VAR_1->key_b = 0;
  VAR_1->colortype = VAR_0;
  VAR_1->bitdepth = 8;
  VAR_1->palette = 0;
  VAR_1->palettesize = 0;
}
