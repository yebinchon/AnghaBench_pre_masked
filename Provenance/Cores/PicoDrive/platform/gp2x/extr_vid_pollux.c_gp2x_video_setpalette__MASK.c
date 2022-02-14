
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(int *VAR_1, int VAR_2)
{

 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  int VAR_4 = VAR_1[VAR_3];
  VAR_4 = ((VAR_4 >> 8) & 0xf800) | ((VAR_4 >> 5) & 0x07c0) | ((VAR_4 >> 3) & 0x001f);
  VAR_0[0x4070>>2] = (VAR_3 << 24) | VAR_4;
 }
}
