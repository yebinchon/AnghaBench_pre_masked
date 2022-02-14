
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t palettesize; int* palette; } ;
typedef TYPE_1__ LodePNGColorMode ;



unsigned FUNC_0(const LodePNGColorMode* VAR_0)
{
  size_t VAR_1;
  for(VAR_1 = 0; VAR_1 < VAR_0->palettesize; VAR_1++)
  {
    if(VAR_0->palette[VAR_1 * 4 + 3] < 255) return 1;
  }
  return 0;
}
