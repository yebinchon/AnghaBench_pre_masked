
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* palette; size_t palettesize; } ;
typedef TYPE_1__ LodePNGColorMode ;


 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned FUNC_2(LodePNGColorMode* VAR_0, const unsigned char* VAR_1, size_t VAR_2)
{
  unsigned VAR_3 = 0, VAR_4;
  if(VAR_0->palette) FUNC_0(VAR_0->palette);
  VAR_0->palettesize = VAR_2 / 3;
  VAR_0->palette = (unsigned char*)FUNC_1(4 * VAR_0->palettesize);
  if(!VAR_0->palette && VAR_0->palettesize)
  {
    VAR_0->palettesize = 0;
    return 83;
  }
  if(VAR_0->palettesize > 256) return 38;

  for(VAR_4 = 0; VAR_4 < VAR_0->palettesize; VAR_4++)
  {
    VAR_0->palette[4 * VAR_4 + 0] = VAR_1[VAR_3++];
    VAR_0->palette[4 * VAR_4 + 1] = VAR_1[VAR_3++];
    VAR_0->palette[4 * VAR_4 + 2] = VAR_1[VAR_3++];
    VAR_0->palette[4 * VAR_4 + 3] = 255;
  }

  return 0;
}
