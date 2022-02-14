
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,int ,size_t) ;

void FUNC_1(size_t VAR_0, uint32_t* VAR_1,
                                       uint8_t* VAR_2) {
  size_t VAR_3 = 0;
  size_t VAR_4;
  size_t VAR_5;
  size_t VAR_6;
  const size_t VAR_7 = 1240;

  size_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    if (VAR_1[VAR_8]) {
      ++VAR_3;
    }
  }
  if (VAR_3 < 16) {
    return;
  }
  while (VAR_0 != 0 && VAR_1[VAR_0 - 1] == 0) {
    --VAR_0;
  }
  if (VAR_0 == 0) {
    return;
  }

  {
    size_t VAR_9 = 0;
    uint32_t VAR_10 = 1 << 30;
    for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
      if (VAR_1[VAR_8] != 0) {
        ++VAR_9;
        if (VAR_10 > VAR_1[VAR_8]) {
          VAR_10 = VAR_1[VAR_8];
        }
      }
    }
    if (VAR_9 < 5) {

      return;
    }
    if (VAR_10 < 4) {
      size_t VAR_11 = VAR_0 - VAR_9;
      if (VAR_11 < 6) {
        for (VAR_8 = 1; VAR_8 < VAR_0 - 1; ++VAR_8) {
          if (VAR_1[VAR_8 - 1] != 0 && VAR_1[VAR_8] == 0 && VAR_1[VAR_8 + 1] != 0) {
            VAR_1[VAR_8] = 1;
          }
        }
      }
    }
    if (VAR_9 < 28) {
      return;
    }
  }


  FUNC_0(VAR_2, 0, VAR_0);
  {



    uint32_t VAR_12 = VAR_1[0];
    size_t VAR_13 = 0;
    for (VAR_8 = 0; VAR_8 <= VAR_0; ++VAR_8) {
      if (VAR_8 == VAR_0 || VAR_1[VAR_8] != VAR_12) {
        if ((VAR_12 == 0 && VAR_13 >= 5) ||
            (VAR_12 != 0 && VAR_13 >= 7)) {
          size_t VAR_14;
          for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
            VAR_2[VAR_8 - VAR_14 - 1] = 1;
          }
        }
        VAR_13 = 1;
        if (VAR_8 != VAR_0) {
          VAR_12 = VAR_1[VAR_8];
        }
      } else {
        ++VAR_13;
      }
    }
  }


  VAR_4 = 0;
  VAR_5 = 256 * (VAR_1[0] + VAR_1[1] + VAR_1[2]) / 3 + 420;
  VAR_6 = 0;
  for (VAR_8 = 0; VAR_8 <= VAR_0; ++VAR_8) {
    if (VAR_8 == VAR_0 || VAR_2[VAR_8] ||
        (VAR_8 != 0 && VAR_2[VAR_8 - 1]) ||
        (256 * VAR_1[VAR_8] - VAR_5 + VAR_7) >= 2 * VAR_7) {
      if (VAR_4 >= 4 || (VAR_4 >= 3 && VAR_6 == 0)) {
        size_t VAR_15;

        size_t VAR_16 = (VAR_6 + VAR_4 / 2) / VAR_4;
        if (VAR_16 == 0) {
          VAR_16 = 1;
        }
        if (VAR_6 == 0) {

          VAR_16 = 0;
        }
        for (VAR_15 = 0; VAR_15 < VAR_4; ++VAR_15) {


          VAR_1[VAR_8 - VAR_15 - 1] = (uint32_t)VAR_16;
        }
      }
      VAR_4 = 0;
      VAR_6 = 0;
      if (VAR_8 < VAR_0 - 2) {


        VAR_5 = 256 * (VAR_1[VAR_8] + VAR_1[VAR_8 + 1] + VAR_1[VAR_8 + 2]) / 3 + 420;
      } else if (VAR_8 < VAR_0) {
        VAR_5 = 256 * VAR_1[VAR_8];
      } else {
        VAR_5 = 0;
      }
    }
    ++VAR_4;
    if (VAR_8 != VAR_0) {
      VAR_6 += VAR_1[VAR_8];
      if (VAR_4 >= 4) {
        VAR_5 = (256 * VAR_6 + VAR_4 / 2) / VAR_4;
      }
      if (VAR_4 == 4) {
        VAR_5 += 120;
      }
    }
  }
}
