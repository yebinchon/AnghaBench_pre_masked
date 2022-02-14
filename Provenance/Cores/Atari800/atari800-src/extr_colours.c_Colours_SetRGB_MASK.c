
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int *VAR_4)
{
 if (VAR_1 < 0)
  VAR_1 = 0;
 else if (VAR_1 > 255)
  VAR_1 = 255;
 if (VAR_2 < 0)
  VAR_2 = 0;
 else if (VAR_2 > 255)
  VAR_2 = 255;
 if (VAR_3 < 0)
  VAR_3 = 0;
 else if (VAR_3 > 255)
  VAR_3 = 255;
 VAR_4[VAR_0] = (VAR_1 << 16) + (VAR_2 << 8) + VAR_3;
}
