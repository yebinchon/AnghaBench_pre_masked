
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int CLzRef ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, const unsigned char *VAR_4, CLzRef *VAR_5,
    uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
  CLzRef *VAR_9 = VAR_5 + (VAR_6 << 1) + 1;
  CLzRef *VAR_10 = VAR_5 + (VAR_6 << 1);
  uint32_t VAR_11 = 0, VAR_12 = 0;
  for (;;)
  {
    uint32_t VAR_13 = VAR_3 - VAR_2;
    if (VAR_8-- == 0 || VAR_13 >= VAR_7)
    {
      *VAR_9 = *VAR_10 = VAR_0;
      return;
    }
    {
      CLzRef *VAR_14 = VAR_5 + ((VAR_6 - VAR_13 + ((VAR_13 > VAR_6) ? VAR_7 : 0)) << 1);
      const unsigned char *VAR_15 = VAR_4 - VAR_13;
      uint32_t VAR_16 = (VAR_11 < VAR_12 ? VAR_11 : VAR_12);
      if (VAR_15[VAR_16] == VAR_4[VAR_16])
      {
        while (++VAR_16 != VAR_1)
          if (VAR_15[VAR_16] != VAR_4[VAR_16])
            break;
        {
          if (VAR_16 == VAR_1)
          {
            *VAR_10 = VAR_14[0];
            *VAR_9 = VAR_14[1];
            return;
          }
        }
      }
      if (VAR_15[VAR_16] < VAR_4[VAR_16])
      {
        *VAR_10 = VAR_2;
        VAR_10 = VAR_14 + 1;
        VAR_2 = *VAR_10;
        VAR_12 = VAR_16;
      }
      else
      {
        *VAR_9 = VAR_2;
        VAR_9 = VAR_14;
        VAR_2 = *VAR_9;
        VAR_11 = VAR_16;
      }
    }
  }
}
