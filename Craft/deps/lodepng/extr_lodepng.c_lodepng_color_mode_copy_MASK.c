
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* palette; int palettesize; } ;
typedef TYPE_1__ LodePNGColorMode ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

unsigned FUNC_2(LodePNGColorMode* VAR_0, const LodePNGColorMode* VAR_1)
{
  size_t VAR_2;
  FUNC_0(VAR_0);
  *VAR_0 = *VAR_1;
  if(VAR_1->palette)
  {
    VAR_0->palette = (unsigned char*)FUNC_1(1024);
    if(!VAR_0->palette && VAR_1->palettesize) return 83;
    for(VAR_2 = 0; VAR_2 < VAR_1->palettesize * 4; VAR_2++) VAR_0->palette[VAR_2] = VAR_1->palette[VAR_2];
  }
  return 0;
}
