
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int const VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int const VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,char* const,int*) ;
 int FUNC_4 (char* const,char const* const,int) ;

int FUNC_5(const char *const VAR_2, const int VAR_3, char *const VAR_4) {
  float *VAR_5 = (float *)VAR_2;
  int VAR_6 = VAR_3 * VAR_1 + 1;
  int VAR_7 = 1;

  uint32_t VAR_8 = 0;
  uint32_t VAR_9 = 0;
  uint8_t VAR_10 = 0;


  for (int VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
    union {
      float real;
      uint32_t bits;
    } VAR_12;

    VAR_12.real = VAR_5[VAR_11];


    uint32_t VAR_13 = VAR_8;
    uint32_t VAR_14 = VAR_12.bits ^ VAR_13;

    int VAR_15 = VAR_1 * VAR_0;
    int VAR_16 = VAR_15;

    if (VAR_14) {
      VAR_16 = FUNC_1(VAR_14);
      VAR_15 = FUNC_0(VAR_14);
    }

    uint8_t VAR_17 = 0;
    uint8_t VAR_18;

    if (VAR_16 > VAR_15) {
      VAR_17 = VAR_1 - VAR_16 / VAR_0;

      if (VAR_17 > 0) VAR_17--;
      VAR_18 = ((uint8_t)1 << 3) | VAR_17;
    } else {
      VAR_17 = VAR_1 - VAR_15 / VAR_0;
      if (VAR_17 > 0) VAR_17--;
      VAR_18 = VAR_17;
    }

    if (VAR_11 % 2 == 0) {
      VAR_9 = VAR_14;
      VAR_10 = VAR_18;
    } else {
      int VAR_19 = (VAR_10 & FUNC_2(3)) + 1;
      int VAR_20 = (VAR_18 & FUNC_2(3)) + 1;
      if (VAR_7 + 1 + VAR_19 + VAR_20 <= VAR_6) {
        uint8_t VAR_21 = VAR_10 | (VAR_18 << 4);
        VAR_4[VAR_7++] = VAR_21;
        FUNC_3(VAR_9, VAR_10, VAR_4, &VAR_7);
        FUNC_3(VAR_14, VAR_18, VAR_4, &VAR_7);
      } else {
        VAR_4[0] = 1;
        FUNC_4(VAR_4 + 1, VAR_2, VAR_6 - 1);
        return VAR_6;
      }
    }
    VAR_8 = VAR_12.bits;
  }

  if (VAR_3 % 2) {
    int VAR_22 = (VAR_10 & FUNC_2(3)) + 1;
    int VAR_23 = 1;
    if (VAR_7 + 1 + VAR_22 + VAR_23 <= VAR_6) {
      uint8_t VAR_24 = VAR_10;
      VAR_4[VAR_7++] = VAR_24;
      FUNC_3(VAR_9, VAR_10, VAR_4, &VAR_7);
      FUNC_3(0, 0, VAR_4, &VAR_7);
    } else {
      VAR_4[0] = 1;
      FUNC_4(VAR_4 + 1, VAR_2, VAR_6 - 1);
      return VAR_6;
    }
  }

  VAR_4[0] = 0;
  return VAR_7;
}
