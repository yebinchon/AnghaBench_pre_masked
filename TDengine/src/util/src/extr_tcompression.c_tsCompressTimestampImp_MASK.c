
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char* const,...) ;
 int FUNC_4 (int,int) ;

int FUNC_5(const char *const VAR_3, const int VAR_4, char *const VAR_5) {
  int VAR_6 = 1;
  FUNC_1(VAR_4 >= 0);

  if (VAR_4 == 0) return 0;

  int64_t *VAR_7 = (int64_t *)VAR_3;

  int64_t VAR_8 = VAR_7[0];
  int64_t VAR_9 = -VAR_8;
  uint8_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
  uint64_t VAR_13 = 0, VAR_14 = 0;

  for (int VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
    int64_t VAR_16 = VAR_7[VAR_15];
    if (!FUNC_4(VAR_16, -VAR_8)) goto _exit_over;
    int64_t VAR_17 = VAR_16 - VAR_8;
    if (!FUNC_4(VAR_17, -VAR_9)) goto _exit_over;
    int64_t VAR_18 = VAR_17 - VAR_9;

    uint64_t VAR_19 = (VAR_18 >> (VAR_2 * VAR_0 - 1)) ^ (VAR_18 << 1);
    if (VAR_15 % 2 == 0) {
      VAR_10 = 0;
      VAR_13 = VAR_19;
      if (VAR_13 == 0) {
        VAR_11 = 0;
      } else {
        VAR_11 = VAR_2 - FUNC_0(VAR_13) / VAR_0;
      }
    } else {
      VAR_14 = VAR_19;
      if (VAR_14 == 0) {
        VAR_12 = 0;
      } else {
        VAR_12 = VAR_2 - FUNC_0(VAR_14) / VAR_0;
      }
      VAR_10 = VAR_11 | (VAR_12 << 4);

      if ((VAR_6 + VAR_1 - 1) >= VAR_4 * VAR_2) goto _exit_over;
      FUNC_3(VAR_5 + VAR_6, &VAR_10, VAR_1);
      VAR_6 += VAR_1;


      if (FUNC_2()) {
        if ((VAR_6 + VAR_11 - 1) >= VAR_4 * VAR_2) goto _exit_over;
        FUNC_3(VAR_5 + VAR_6, (char *)(&VAR_13) + VAR_2 - VAR_11, VAR_11);
      } else {
        if ((VAR_6 + VAR_11 - 1) >= VAR_4 * VAR_2) goto _exit_over;
        FUNC_3(VAR_5 + VAR_6, (char *)(&VAR_13), VAR_11);
      }
      VAR_6 += VAR_11;

      if (FUNC_2()) {
        if ((VAR_6 + VAR_12 - 1) >= VAR_4 * VAR_2) goto _exit_over;
        FUNC_3(VAR_5 + VAR_6, (char *)(&VAR_14) + VAR_2 - VAR_12, VAR_12);
      } else {
        if ((VAR_6 + VAR_12 - 1) >= VAR_4 * VAR_2) goto _exit_over;
        FUNC_3(VAR_5 + VAR_6, (char *)(&VAR_14), VAR_12);
      }
      VAR_6 += VAR_12;
    }
    VAR_8 = VAR_16;
    VAR_9 = VAR_17;
  }

  if (VAR_4 % 2 == 1) {
    VAR_12 = 0;
    VAR_10 = VAR_11 | (VAR_12 << 4);

    if ((VAR_6 + VAR_1 - 1) >= VAR_4 * VAR_2) goto _exit_over;
    FUNC_3(VAR_5 + VAR_6, &VAR_10, VAR_1);
    VAR_6 += VAR_1;

    if (FUNC_2()) {
      if ((VAR_6 + VAR_11 - 1) >= VAR_4 * VAR_2) goto _exit_over;
      FUNC_3(VAR_5 + VAR_6, (char *)(&VAR_13) + VAR_2 - VAR_11, VAR_11);
    } else {
      if ((VAR_6 + VAR_11 - 1) >= VAR_4 * VAR_2) goto _exit_over;
      FUNC_3(VAR_5 + VAR_6, (char *)(&VAR_13), VAR_11);
    }
    VAR_6 += VAR_11;
  }

  VAR_5[0] = 1;
  return VAR_6;

_exit_over:
  VAR_5[0] = 0;
  FUNC_3(VAR_5 + 1, VAR_3, VAR_4 * VAR_2);
  return VAR_4 * VAR_2 + 1;
}
