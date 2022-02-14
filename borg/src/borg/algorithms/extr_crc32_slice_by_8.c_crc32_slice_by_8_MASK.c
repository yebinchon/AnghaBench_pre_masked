
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int** VAR_0 ;
 int FUNC_0 (int) ;

uint32_t FUNC_1(const void* VAR_1, size_t VAR_2, uint32_t VAR_3)
{
  uint32_t VAR_4 = ~VAR_3;

  const uint32_t* VAR_5;
  const uint8_t* VAR_6 = (const uint8_t*) VAR_1;


  const size_t VAR_7 = 4;
  const size_t VAR_8 = 8 * VAR_7;


  uintptr_t VAR_9 = (4 - (((uintptr_t) VAR_6) & 3)) & 3;

  while ((VAR_2 != 0) && (VAR_9 != 0))
  {
    VAR_4 = (VAR_4 >> 8) ^ VAR_0[0][(VAR_4 & 0xFF) ^ *VAR_6++];
    VAR_2--;
    VAR_9--;
  }


  VAR_5 = (const uint32_t*) VAR_6;


  while (VAR_2 >= VAR_8)
  {
    size_t VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
    {
      uint32_t VAR_11 = *VAR_5++ ^ VAR_4;
      uint32_t VAR_12 = *VAR_5++;
      VAR_4 = VAR_0[0][(VAR_12>>24) & 0xFF] ^
            VAR_0[1][(VAR_12>>16) & 0xFF] ^
            VAR_0[2][(VAR_12>> 8) & 0xFF] ^
            VAR_0[3][ VAR_12 & 0xFF] ^
            VAR_0[4][(VAR_11>>24) & 0xFF] ^
            VAR_0[5][(VAR_11>>16) & 0xFF] ^
            VAR_0[6][(VAR_11>> 8) & 0xFF] ^
            VAR_0[7][ VAR_11 & 0xFF];


    }

    VAR_2 -= VAR_8;
  }

  VAR_6 = (const uint8_t*) VAR_5;

  while (VAR_2-- != 0)
    VAR_4 = (VAR_4 >> 8) ^ VAR_0[0][(VAR_4 & 0xFF) ^ *VAR_6++];

  return ~VAR_4;
}
