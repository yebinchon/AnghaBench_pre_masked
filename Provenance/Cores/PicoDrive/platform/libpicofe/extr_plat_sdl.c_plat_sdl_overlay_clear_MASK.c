
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int h; scalar_t__* pixels; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(void)
{
  int VAR_1 = VAR_0->w * VAR_0->h;
  int *VAR_2 = (int *)VAR_0->pixels[0];
  int VAR_3 = 0x10801080;

  for (; VAR_1 > 0; VAR_2 += 4, VAR_1 -= 2 * 4)
    VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_2[3] = VAR_3;

  for (; VAR_1 > 0; VAR_2++, VAR_1 -= 2)
    *VAR_2 = VAR_3;
}
