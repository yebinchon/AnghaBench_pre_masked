
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(uint8 * VAR_0)
{
  int VAR_1;
  uint8 VAR_2[0x4000];
  FUNC_0 (VAR_2, VAR_0, 0x4000);
  for (VAR_1 = 0; VAR_1 < 0x2000; VAR_1 += 1)
  {
    VAR_0[VAR_1 * 2 + 0] = VAR_2[0x2000 + (VAR_1)];
    VAR_0[VAR_1 * 2 + 1] = VAR_2[0x0000 + (VAR_1)];
  }
}
