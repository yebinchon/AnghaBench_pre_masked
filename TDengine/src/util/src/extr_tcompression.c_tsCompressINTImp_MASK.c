
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;




 int FUNC_2 (int) ;
 int FUNC_3 (char* const,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int) ;

int FUNC_6(const char *const VAR_6, const int VAR_7, char *const VAR_8, const char VAR_9) {


  char VAR_10[] = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 15, 20, 30, 60};
  int VAR_11[] = {240, 120, 60, 30, 20, 15, 12, 10, 8, 7, 6, 5, 4, 3, 2, 1};
  char VAR_12[] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 11, 11, 12, 12, 12, 13, 13, 13, 13, 13,
                            14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
                            15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};


  int VAR_13 = 0;
  switch (VAR_9) {
    case 131:
      VAR_13 = VAR_3;
      break;
    case 130:
      VAR_13 = VAR_2;
      break;
    case 129:
      VAR_13 = VAR_4;
      break;
    case 128:
      VAR_13 = VAR_1;
      break;
    default:
      FUNC_4("Wrong integer types.\n");
      FUNC_2(1);
  }

  int VAR_14 = VAR_7 * VAR_13 + 1;
  int VAR_15 = 1;
  int64_t VAR_16 = 0;

  for (int VAR_17 = 0; VAR_17 < VAR_7;) {
    char VAR_18 = 0;
    char VAR_19 = 0;
    int VAR_20 = 0;
    int64_t VAR_21 = VAR_16;

    for (int VAR_22 = VAR_17; VAR_22 < VAR_7; VAR_22++) {

      int64_t VAR_23 = 0;
      switch (VAR_9) {
        case 128:
          VAR_23 = (int64_t)(*((int8_t *)VAR_6 + VAR_22));
          break;
        case 129:
          VAR_23 = (int64_t)(*((int16_t *)VAR_6 + VAR_22));
          break;
        case 130:
          VAR_23 = (int64_t)(*((int32_t *)VAR_6 + VAR_22));
          break;
        case 131:
          VAR_23 = (int64_t)(*((int64_t *)VAR_6 + VAR_22));
          break;
      }

      if (!FUNC_5(VAR_23, -VAR_16)) goto _copy_and_exit;

      int64_t VAR_24 = VAR_23 - VAR_21;

      uint64_t VAR_25 = (VAR_24 >> (VAR_3 * VAR_0 - 1)) ^ (VAR_24 << 1);

      if (VAR_25 >= VAR_5) goto _copy_and_exit;

      char VAR_26;
      if (VAR_25 == 0) {

        VAR_26 = 0;
      } else {
        VAR_26 = (VAR_3 * VAR_0) - FUNC_0(VAR_25);
      }

      if (VAR_20 + 1 <= VAR_11[VAR_18] && VAR_20 + 1 <= VAR_11[VAR_12[VAR_26]]) {

        VAR_18 = VAR_18 > VAR_12[VAR_26] ? VAR_18 : VAR_12[VAR_26];
        VAR_20++;
        VAR_19 = VAR_10[VAR_18];
      } else {

        while (VAR_20 < VAR_11[VAR_18]) VAR_18++;
        VAR_20 = VAR_11[VAR_18];
        VAR_19 = VAR_10[VAR_18];
        break;
      }
      VAR_21 = VAR_23;
    }

    uint64_t VAR_27 = 0;
    VAR_27 |= (uint64_t)VAR_18;
    for (int VAR_28 = 0; VAR_28 < VAR_20; VAR_28++) {
      int64_t VAR_29 = 0;
      switch (VAR_9) {
        case 128:
          VAR_29 = (int64_t)(*((int8_t *)VAR_6 + VAR_17));
          break;
        case 129:
          VAR_29 = (int64_t)(*((int16_t *)VAR_6 + VAR_17));
          break;
        case 130:
          VAR_29 = (int64_t)(*((int32_t *)VAR_6 + VAR_17));
          break;
        case 131:
          VAR_29 = (int64_t)(*((int64_t *)VAR_6 + VAR_17));
          break;
      }
      int64_t VAR_30 = VAR_29 - VAR_16;
      uint64_t VAR_31 = (VAR_30 >> (VAR_3 * VAR_0 - 1)) ^ (VAR_30 << 1);
      VAR_27 |= ((VAR_31 & FUNC_1(VAR_19)) << (VAR_19 * VAR_28 + 4));
      VAR_17++;
      VAR_16 = VAR_29;
    }


    if (VAR_15 + sizeof(VAR_27) <= VAR_14) {
      FUNC_3(VAR_8 + VAR_15, &VAR_27, sizeof(VAR_27));
      VAR_15 += sizeof(VAR_27);
    } else {
    _copy_and_exit:
      VAR_8[0] = 1;
      FUNC_3(VAR_8 + 1, VAR_6, VAR_14 - 1);
      return VAR_14;
    }
  }


  VAR_8[0] = 0;
  return VAR_15;
}
