
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int CLzRef ;


 int VAR_0 ;

uint32_t * FUNC_0(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, const unsigned char *VAR_4, CLzRef *VAR_5,
    uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8,
    uint32_t *VAR_9, uint32_t VAR_10)
{
  CLzRef *VAR_11 = VAR_5 + (VAR_6 << 1) + 1;
  CLzRef *VAR_12 = VAR_5 + (VAR_6 << 1);
  uint32_t VAR_13 = 0, VAR_14 = 0;
  for (;;)
  {
    uint32_t VAR_15 = VAR_3 - VAR_2;
    if (VAR_8-- == 0 || VAR_15 >= VAR_7)
    {
      *VAR_11 = *VAR_12 = VAR_0;
      return VAR_9;
    }
    {
      CLzRef *VAR_16 = VAR_5 + ((VAR_6 - VAR_15 + ((VAR_15 > VAR_6) ? VAR_7 : 0)) << 1);
      const unsigned char *VAR_17 = VAR_4 - VAR_15;
      uint32_t VAR_18 = (VAR_13 < VAR_14 ? VAR_13 : VAR_14);
      if (VAR_17[VAR_18] == VAR_4[VAR_18])
      {
        if (++VAR_18 != VAR_1 && VAR_17[VAR_18] == VAR_4[VAR_18])
          while (++VAR_18 != VAR_1)
            if (VAR_17[VAR_18] != VAR_4[VAR_18])
              break;
        if (VAR_10 < VAR_18)
        {
          *VAR_9++ = VAR_10 = VAR_18;
          *VAR_9++ = VAR_15 - 1;
          if (VAR_18 == VAR_1)
          {
            *VAR_12 = VAR_16[0];
            *VAR_11 = VAR_16[1];
            return VAR_9;
          }
        }
      }
      if (VAR_17[VAR_18] < VAR_4[VAR_18])
      {
        *VAR_12 = VAR_2;
        VAR_12 = VAR_16 + 1;
        VAR_2 = *VAR_12;
        VAR_14 = VAR_18;
      }
      else
      {
        *VAR_11 = VAR_2;
        VAR_11 = VAR_16;
        VAR_2 = *VAR_11;
        VAR_13 = VAR_18;
      }
    }
  }
}
