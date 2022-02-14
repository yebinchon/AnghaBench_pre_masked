
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ colortype; scalar_t__ bitdepth; scalar_t__ key_defined; scalar_t__ key_r; scalar_t__ key_g; scalar_t__ key_b; int palettesize; scalar_t__* palette; } ;
typedef TYPE_1__ LodePNGColorMode ;



__attribute__((used)) static int FUNC_0(const LodePNGColorMode* VAR_0, const LodePNGColorMode* VAR_1)
{
  size_t VAR_2;
  if(VAR_0->colortype != VAR_1->colortype) return 0;
  if(VAR_0->bitdepth != VAR_1->bitdepth) return 0;
  if(VAR_0->key_defined != VAR_1->key_defined) return 0;
  if(VAR_0->key_defined)
  {
    if(VAR_0->key_r != VAR_1->key_r) return 0;
    if(VAR_0->key_g != VAR_1->key_g) return 0;
    if(VAR_0->key_b != VAR_1->key_b) return 0;
  }
  if(VAR_0->palettesize != VAR_1->palettesize) return 0;
  for(VAR_2 = 0; VAR_2 < VAR_0->palettesize * 4; VAR_2++)
  {
    if(VAR_0->palette[VAR_2] != VAR_1->palette[VAR_2]) return 0;
  }
  return 1;
}
