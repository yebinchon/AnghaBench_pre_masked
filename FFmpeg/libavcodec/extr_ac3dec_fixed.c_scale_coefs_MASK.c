
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int int32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1 (
    int32_t *VAR_0,
    const int32_t *VAR_1,
    int VAR_2,
    int VAR_3)
{
    int VAR_4, VAR_5;
    unsigned VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

    VAR_6 = (VAR_2 & 0x1f) + 0x20;
    VAR_5 = 4 - (FUNC_0(VAR_2, 9) >> 5);
    if (VAR_5 > 0 ) {
      VAR_7 = 1 << (VAR_5-1);
      for (VAR_4=0; VAR_4<VAR_3; VAR_4+=8) {

          VAR_8 = VAR_1[VAR_4] * VAR_6;
          VAR_9 = VAR_1[VAR_4+1] * VAR_6;
          VAR_8 = VAR_8 + VAR_7;
          VAR_10 = VAR_1[VAR_4+2] * VAR_6;

          VAR_9 = VAR_9 + VAR_7;
          VAR_0[VAR_4] = VAR_8 >> VAR_5;
          VAR_11 = VAR_1[VAR_4+3] * VAR_6;
          VAR_10 = VAR_10 + VAR_7;

          VAR_0[VAR_4+1] = VAR_9 >> VAR_5;
          VAR_12 = VAR_1[VAR_4 + 4] * VAR_6;
          VAR_11 = VAR_11 + VAR_7;
          VAR_0[VAR_4+2] = VAR_10 >> VAR_5;

          VAR_13 = VAR_1[VAR_4+5] * VAR_6;
          VAR_12 = VAR_12 + VAR_7;
          VAR_0[VAR_4+3] = VAR_11 >> VAR_5;
          VAR_14 = VAR_1[VAR_4+6] * VAR_6;

          VAR_0[VAR_4+4] = VAR_12 >> VAR_5;
          VAR_13 = VAR_13 + VAR_7;
          VAR_15 = VAR_1[VAR_4+7] * VAR_6;
          VAR_14 = VAR_14 + VAR_7;

          VAR_0[VAR_4+5] = VAR_13 >> VAR_5;
          VAR_15 = VAR_15 + VAR_7;
          VAR_0[VAR_4+6] = VAR_14 >> VAR_5;
          VAR_0[VAR_4+7] = VAR_15 >> VAR_5;

      }
    } else {
      VAR_5 = -VAR_5;
      for (VAR_4=0; VAR_4<VAR_3; VAR_4+=8) {

          VAR_8 = VAR_1[VAR_4] * VAR_6;
          VAR_9 = VAR_1[VAR_4+1] * VAR_6;
          VAR_10 = VAR_1[VAR_4+2] * VAR_6;

          VAR_0[VAR_4] = VAR_8 << VAR_5;
          VAR_11 = VAR_1[VAR_4+3] * VAR_6;

          VAR_0[VAR_4+1] = VAR_9 << VAR_5;
          VAR_12 = VAR_1[VAR_4 + 4] * VAR_6;
          VAR_0[VAR_4+2] = VAR_10 << VAR_5;

          VAR_13 = VAR_1[VAR_4+5] * VAR_6;
          VAR_0[VAR_4+3] = VAR_11 << VAR_5;
          VAR_14 = VAR_1[VAR_4+6] * VAR_6;

          VAR_0[VAR_4+4] = VAR_12 << VAR_5;
          VAR_15 = VAR_1[VAR_4+7] * VAR_6;

          VAR_0[VAR_4+5] = VAR_13 << VAR_5;
          VAR_0[VAR_4+6] = VAR_14 << VAR_5;
          VAR_0[VAR_4+7] = VAR_15 << VAR_5;

      }
    }
}
