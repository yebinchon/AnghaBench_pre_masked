
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* palette; int palettesize; } ;
typedef TYPE_1__ LodePNGColorMode ;


 scalar_t__ FUNC_0 (unsigned char*,int) ;

unsigned FUNC_1(LodePNGColorMode* VAR_0,
                             unsigned char VAR_1, unsigned char VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
  unsigned char* VAR_5;


  if(!VAR_0->palette)
  {

    VAR_5 = (unsigned char*)FUNC_0(VAR_0->palette, 1024);
    if(!VAR_5) return 83;
    else VAR_0->palette = VAR_5;
  }
  VAR_0->palette[4 * VAR_0->palettesize + 0] = VAR_1;
  VAR_0->palette[4 * VAR_0->palettesize + 1] = VAR_2;
  VAR_0->palette[4 * VAR_0->palettesize + 2] = VAR_3;
  VAR_0->palette[4 * VAR_0->palettesize + 3] = VAR_4;
  VAR_0->palettesize++;
  return 0;
}
