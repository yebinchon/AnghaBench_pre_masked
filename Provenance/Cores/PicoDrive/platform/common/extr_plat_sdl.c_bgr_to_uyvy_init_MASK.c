
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

void FUNC_0(void)
{
  int VAR_5, VAR_6;







  for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
    VAR_2[VAR_5] = (int)(0.299f * VAR_5 * 65536.0f + 0.5f);
    VAR_1[VAR_5] = (int)(0.587f * VAR_5 * 65536.0f + 0.5f);
    VAR_0[VAR_5] = (int)(0.114f * VAR_5 * 65536.0f + 0.5f);
  }
  for (VAR_5 = -32; VAR_5 < 32; VAR_5++) {
    VAR_6 = (int)(8 * 0.565f * VAR_5) + 128;
    if (VAR_6 < 0)
      VAR_6 = 0;
    if (VAR_6 > 255)
      VAR_6 = 255;
    VAR_3[VAR_5 + 32] = VAR_6;
    VAR_6 = (int)(8 * 0.713f * VAR_5) + 128;
    if (VAR_6 < 0)
      VAR_6 = 0;
    if (VAR_6 > 255)
      VAR_6 = 255;
    VAR_4[VAR_5 + 32] = VAR_6;
  }
}
