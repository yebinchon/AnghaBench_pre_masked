
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int CRangeEnc ;
typedef int CLzmaProb ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(CRangeEnc *VAR_0, CLzmaProb *VAR_1, int VAR_2, uint32_t VAR_3)
{
  uint32_t VAR_4 = 1;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {
    uint32_t VAR_6 = VAR_3 & 1;
    FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_6);
    VAR_4 = (VAR_4 << 1) | VAR_6;
    VAR_3 >>= 1;
  }
}
