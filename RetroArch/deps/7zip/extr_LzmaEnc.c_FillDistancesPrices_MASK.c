
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int posEncoders; int** posSlotPrices; int distTableSize; int** distancesPrices; scalar_t__ matchPriceCount; int ProbPrices; int ** posSlotEncoder; } ;
typedef int CLzmaProb ;
typedef TYPE_1__ CLzmaEnc ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int const*,int ,int,int ) ;
 int FUNC_2 (int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(CLzmaEnc *VAR_7)
{
  uint32_t VAR_8[VAR_3];
  uint32_t VAR_9, VAR_10;
  for (VAR_9 = VAR_6; VAR_9 < VAR_3; VAR_9++)
  {
    uint32_t VAR_11 = FUNC_0(VAR_9);
    uint32_t VAR_12 = ((VAR_11 >> 1) - 1);
    uint32_t VAR_13 = ((2 | (VAR_11 & 1)) << VAR_12);
    VAR_8[VAR_9] = FUNC_2(VAR_7->posEncoders + VAR_13 - VAR_11 - 1, VAR_12, VAR_9 - VAR_13, VAR_7->ProbPrices);
  }

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  {
    uint32_t VAR_14;
    const CLzmaProb *VAR_15 = VAR_7->posSlotEncoder[VAR_10];
    uint32_t *VAR_16 = VAR_7->posSlotPrices[VAR_10];
    for (VAR_14 = 0; VAR_14 < VAR_7->distTableSize; VAR_14++)
      VAR_16[VAR_14] = FUNC_1(VAR_15, VAR_5, VAR_14, VAR_7->ProbPrices);
    for (VAR_14 = VAR_0; VAR_14 < VAR_7->distTableSize; VAR_14++)
      VAR_16[VAR_14] += ((((VAR_14 >> 1) - 1) - VAR_1) << VAR_2);

    {
      uint32_t *VAR_17 = VAR_7->distancesPrices[VAR_10];
      for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
        VAR_17[VAR_9] = VAR_16[VAR_9];
      for (; VAR_9 < VAR_3; VAR_9++)
        VAR_17[VAR_9] = VAR_16[FUNC_0(VAR_9)] + VAR_8[VAR_9];
    }
  }
  VAR_7->matchPriceCount = 0;
}
