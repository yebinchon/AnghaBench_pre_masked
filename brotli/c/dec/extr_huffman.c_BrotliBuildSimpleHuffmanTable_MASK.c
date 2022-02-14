
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int table ;
typedef int HuffmanCode ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,size_t) ;

uint32_t FUNC_2(HuffmanCode* VAR_0,
                                       int VAR_1,
                                       uint16_t* VAR_2,
                                       uint32_t VAR_3) {
  uint32_t VAR_4 = 1;
  const uint32_t VAR_5 = 1U << VAR_1;
  switch (VAR_3) {
    case 0:
      VAR_0[0] = FUNC_0(0, VAR_2[0]);
      break;
    case 1:
      if (VAR_2[1] > VAR_2[0]) {
        VAR_0[0] = FUNC_0(1, VAR_2[0]);
        VAR_0[1] = FUNC_0(1, VAR_2[1]);
      } else {
        VAR_0[0] = FUNC_0(1, VAR_2[1]);
        VAR_0[1] = FUNC_0(1, VAR_2[0]);
      }
      VAR_4 = 2;
      break;
    case 2:
      VAR_0[0] = FUNC_0(1, VAR_2[0]);
      VAR_0[2] = FUNC_0(1, VAR_2[0]);
      if (VAR_2[2] > VAR_2[1]) {
        VAR_0[1] = FUNC_0(2, VAR_2[1]);
        VAR_0[3] = FUNC_0(2, VAR_2[2]);
      } else {
        VAR_0[1] = FUNC_0(2, VAR_2[2]);
        VAR_0[3] = FUNC_0(2, VAR_2[1]);
      }
      VAR_4 = 4;
      break;
    case 3: {
      int VAR_6, VAR_7;
      for (VAR_6 = 0; VAR_6 < 3; ++VAR_6) {
        for (VAR_7 = VAR_6 + 1; VAR_7 < 4; ++VAR_7) {
          if (VAR_2[VAR_7] < VAR_2[VAR_6]) {
            uint16_t VAR_8 = VAR_2[VAR_7];
            VAR_2[VAR_7] = VAR_2[VAR_6];
            VAR_2[VAR_6] = VAR_8;
          }
        }
      }
      VAR_0[0] = FUNC_0(2, VAR_2[0]);
      VAR_0[2] = FUNC_0(2, VAR_2[1]);
      VAR_0[1] = FUNC_0(2, VAR_2[2]);
      VAR_0[3] = FUNC_0(2, VAR_2[3]);
      VAR_4 = 4;
      break;
    }
    case 4: {
      if (VAR_2[3] < VAR_2[2]) {
        uint16_t VAR_9 = VAR_2[3];
        VAR_2[3] = VAR_2[2];
        VAR_2[2] = VAR_9;
      }
      VAR_0[0] = FUNC_0(1, VAR_2[0]);
      VAR_0[1] = FUNC_0(2, VAR_2[1]);
      VAR_0[2] = FUNC_0(1, VAR_2[0]);
      VAR_0[3] = FUNC_0(3, VAR_2[2]);
      VAR_0[4] = FUNC_0(1, VAR_2[0]);
      VAR_0[5] = FUNC_0(2, VAR_2[1]);
      VAR_0[6] = FUNC_0(1, VAR_2[0]);
      VAR_0[7] = FUNC_0(3, VAR_2[3]);
      VAR_4 = 8;
      break;
    }
  }
  while (VAR_4 != VAR_5) {
    FUNC_1(&VAR_0[VAR_4], &VAR_0[0],
           (size_t)VAR_4 * sizeof(VAR_0[0]));
    VAR_4 <<= 1;
  }
  return VAR_5;
}
