
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ palettesize; scalar_t__ palette; } ;
typedef TYPE_1__ LodePNGColorMode ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(LodePNGColorMode* VAR_0)
{
  if(VAR_0->palette) FUNC_0(VAR_0->palette);
  VAR_0->palette = 0;
  VAR_0->palettesize = 0;
}
