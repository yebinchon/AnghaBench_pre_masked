
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(void *VAR_0, const void *VAR_1, int VAR_2)
{
  const unsigned int *VAR_3 = VAR_1;
  unsigned int *VAR_4 = VAR_0;
  int VAR_5, VAR_6;

  if (VAR_2 < 2)
    return;

  VAR_6 = 0x00ff00ff;
  for (VAR_5 = 0; VAR_5 < VAR_2 / 4; VAR_5++) {
    unsigned int VAR_7 = VAR_3[VAR_5];
    VAR_4[VAR_5] = ((VAR_7 & VAR_6) << 8) | ((VAR_7 & ~VAR_6) >> 8);
  }
}
