
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ colortype; size_t palettesize; unsigned char* palette; int key_defined; int key_r; int key_g; int key_b; } ;
typedef TYPE_1__ LodePNGColorMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned FUNC_0(LodePNGColorMode* VAR_3, const unsigned char* VAR_4, size_t VAR_5)
{
  unsigned VAR_6;
  if(VAR_3->colortype == VAR_1)
  {

    if(VAR_5 > VAR_3->palettesize) return 38;

    for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) VAR_3->palette[4 * VAR_6 + 3] = VAR_4[VAR_6];
  }
  else if(VAR_3->colortype == VAR_0)
  {

    if(VAR_5 != 2) return 30;

    VAR_3->key_defined = 1;
    VAR_3->key_r = VAR_3->key_g = VAR_3->key_b = 256 * VAR_4[0] + VAR_4[1];
  }
  else if(VAR_3->colortype == VAR_2)
  {

    if(VAR_5 != 6) return 41;

    VAR_3->key_defined = 1;
    VAR_3->key_r = 256 * VAR_4[0] + VAR_4[1];
    VAR_3->key_g = 256 * VAR_4[2] + VAR_4[3];
    VAR_3->key_b = 256 * VAR_4[4] + VAR_4[5];
  }
  else return 42;

  return 0;
}
