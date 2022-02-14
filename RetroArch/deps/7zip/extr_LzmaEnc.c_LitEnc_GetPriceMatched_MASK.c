
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int CLzmaProb ;


 scalar_t__ FUNC_0 (int const,int) ;

__attribute__((used)) static uint32_t FUNC_1(const CLzmaProb *VAR_0, uint32_t VAR_1, uint32_t VAR_2, const uint32_t *VAR_3)
{
  uint32_t VAR_4 = 0;
  uint32_t VAR_5 = 0x100;
  VAR_1 |= 0x100;
  do
  {
    VAR_2 <<= 1;
    VAR_4 += FUNC_0(VAR_0[VAR_5 + (VAR_2 & VAR_5) + (VAR_1 >> 8)], (VAR_1 >> 7) & 1);
    VAR_1 <<= 1;
    VAR_5 &= ~(VAR_2 ^ VAR_1);
  }
  while (VAR_1 < 0x10000);
  return VAR_4;
}
