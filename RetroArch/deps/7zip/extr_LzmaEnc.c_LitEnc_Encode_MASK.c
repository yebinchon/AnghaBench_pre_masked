
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int CRangeEnc ;
typedef int CLzmaProb ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(CRangeEnc *VAR_0, CLzmaProb *VAR_1, uint32_t VAR_2)
{
  VAR_2 |= 0x100;
  do
  {
    FUNC_0(VAR_0, VAR_1 + (VAR_2 >> 8), (VAR_2 >> 7) & 1);
    VAR_2 <<= 1;
  }
  while (VAR_2 < 0x10000);
}
