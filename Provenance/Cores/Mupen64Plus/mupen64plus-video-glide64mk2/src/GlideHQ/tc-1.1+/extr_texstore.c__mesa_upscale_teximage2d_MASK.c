
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (int) ;

void
FUNC_1 (unsigned int VAR_0, unsigned int VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     unsigned int VAR_4,
     const byte *VAR_5, int VAR_6,
     byte *VAR_7)
{
    unsigned int VAR_8, VAR_9, VAR_10;

    FUNC_0(VAR_2 >= VAR_0);
    FUNC_0(VAR_3 >= VAR_1);


  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
      const int VAR_11 = (VAR_8 * VAR_2 + VAR_9) * VAR_4;
      const int VAR_12 = VAR_8 * VAR_6 + VAR_9 * VAR_4;
      for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        VAR_7[VAR_11 + VAR_10] = VAR_5[VAR_12 + VAR_10];
      }
    }
    for (; VAR_9 < VAR_2; VAR_9++) {
      const int VAR_13 = (VAR_8 * VAR_2 + VAR_9) * VAR_4;
      const int VAR_14 = VAR_8 * VAR_6 + (VAR_9 - VAR_0) * VAR_4;
      for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        VAR_7[VAR_13 + VAR_10] = VAR_5[VAR_14 + VAR_10];
      }
    }
  }
  for (; VAR_8 < VAR_3; VAR_8++) {
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
      const int VAR_15 = (VAR_8 * VAR_2 + VAR_9) * VAR_4;
      const int VAR_16 = (VAR_8 - VAR_1) * VAR_6 + VAR_9 * VAR_4;
      for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        VAR_7[VAR_15 + VAR_10] = VAR_5[VAR_16 + VAR_10];
      }
    }
    for (; VAR_9 < VAR_2; VAR_9++) {
      const int VAR_17 = (VAR_8 * VAR_2 + VAR_9) * VAR_4;
      const int VAR_18 = (VAR_8 - VAR_1) * VAR_6 + (VAR_9 - VAR_0) * VAR_4;
      for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        VAR_7[VAR_17 + VAR_10] = VAR_5[VAR_18 + VAR_10];
      }
    }
  }
}
