
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long uint64_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int const VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (unsigned long,int,char* const,int*) ;
 int FUNC_4 (char* const,char const* const,int) ;

int FUNC_5(const char *const VAR_3, const int VAR_4, char *const VAR_5) {
  int VAR_6 = VAR_4 * VAR_1 + 1;
  int VAR_7 = 1;

  uint64_t VAR_8 = 0;
  uint64_t VAR_9 = 0;
  uint8_t VAR_10 = 0;

  double *VAR_11 = (double *)VAR_3;


  for (int VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
    union {
      double real;
      uint64_t bits;
    } VAR_13;

    VAR_13.real = VAR_11[VAR_12];


    uint64_t VAR_14 = VAR_8;
    uint64_t VAR_15 = VAR_13.bits ^ VAR_14;

    int VAR_16 = VAR_2 * VAR_0;
    int VAR_17 = VAR_16;

    if (VAR_15) {
      VAR_17 = FUNC_1(VAR_15);
      VAR_16 = FUNC_0(VAR_15);
    }

    uint8_t VAR_18 = 0;
    uint8_t VAR_19;

    if (VAR_17 > VAR_16) {
      VAR_18 = VAR_2 - VAR_17 / VAR_0;

      if (VAR_18 > 0) VAR_18--;
      VAR_19 = ((uint8_t)1 << 3) | VAR_18;
    } else {
      VAR_18 = VAR_2 - VAR_16 / VAR_0;
      if (VAR_18 > 0) VAR_18--;
      VAR_19 = VAR_18;
    }

    if (VAR_12 % 2 == 0) {
      VAR_9 = VAR_15;
      VAR_10 = VAR_19;
    } else {
      int VAR_20 = (VAR_10 & FUNC_2(3)) + 1;
      int VAR_21 = (VAR_19 & FUNC_2(3)) + 1;
      if (VAR_7 + 1 + VAR_20 + VAR_21 <= VAR_6) {
        uint8_t VAR_22 = VAR_10 | (VAR_19 << 4);
        VAR_5[VAR_7++] = VAR_22;
        FUNC_3(VAR_9, VAR_10, VAR_5, &VAR_7);
        FUNC_3(VAR_15, VAR_19, VAR_5, &VAR_7);
      } else {
        VAR_5[0] = 1;
        FUNC_4(VAR_5 + 1, VAR_3, VAR_6 - 1);
        return VAR_6;
      }
    }
    VAR_8 = VAR_13.bits;
  }

  if (VAR_4 % 2) {
    int VAR_23 = (VAR_10 & FUNC_2(3)) + 1;
    int VAR_24 = 1;
    if (VAR_7 + 1 + VAR_23 + VAR_24 <= VAR_6) {
      uint8_t VAR_25 = VAR_10;
      VAR_5[VAR_7++] = VAR_25;
      FUNC_3(VAR_9, VAR_10, VAR_5, &VAR_7);
      FUNC_3(0ul, 0, VAR_5, &VAR_7);
    } else {
      VAR_5[0] = 1;
      FUNC_4(VAR_5 + 1, VAR_3, VAR_6 - 1);
      return VAR_6;
    }
  }

  VAR_5[0] = 0;
  return VAR_7;
}
