
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key_defined; unsigned int key_r; unsigned int key_g; unsigned int key_b; } ;
typedef TYPE_1__ LodePNGColorMode ;



__attribute__((used)) static void FUNC_0(LodePNGColorMode* VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
  unsigned VAR_5 = (1 << VAR_4) - 1;
  VAR_0->key_defined = 1;
  VAR_0->key_r = VAR_1 & VAR_5;
  VAR_0->key_g = VAR_2 & VAR_5;
  VAR_0->key_b = VAR_3 & VAR_5;
}
