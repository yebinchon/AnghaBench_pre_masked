
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) inline static void FUNC_0(const float* const VAR_0, const int VAR_1, float* VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  float VAR_4[18];
  VAR_4[0] = VAR_0[VAR_3] / 4;
  VAR_4[1] = VAR_0[VAR_1 + VAR_3] / 4;
  VAR_4[2] = VAR_0[2 * VAR_1 + VAR_3] / 4;

  VAR_4[3] = -(VAR_0[VAR_3] + VAR_0[3 * VAR_1 + VAR_3] + VAR_0[6 * VAR_1 + VAR_3]) / 6;
  VAR_4[4] = -(VAR_0[VAR_1 + VAR_3] + VAR_0[4 * VAR_1 + VAR_3] + VAR_0[7 * VAR_1 + VAR_3]) / 6;
  VAR_4[5] = -(VAR_0[2 * VAR_1 + VAR_3] + VAR_0[5 * VAR_1 + VAR_3] + VAR_0[8 * VAR_1 + VAR_3]) / 6;

  VAR_4[6] = (-VAR_0[VAR_3] + VAR_0[3 * VAR_1 + VAR_3] - VAR_0[6 * VAR_1 + VAR_3]) / 6;
  VAR_4[7] = (-VAR_0[VAR_1 + VAR_3] + VAR_0[4 * VAR_1 + VAR_3] - VAR_0[7 * VAR_1 + VAR_3]) / 6;
  VAR_4[8] = (-VAR_0[2 * VAR_1 + VAR_3] + VAR_0[5 * VAR_1 + VAR_3] - VAR_0[8 * VAR_1 + VAR_3]) / 6;

  VAR_4[9] = (VAR_0[VAR_3] + 2 * VAR_0[3 * VAR_1 + VAR_3] + 4 * VAR_0[6 * VAR_1 + VAR_3]) / 24;
  VAR_4[10] = (VAR_0[VAR_1 + VAR_3] + 2 * VAR_0[4 * VAR_1 + VAR_3] + 4 * VAR_0[7 * VAR_1 + VAR_3]) / 24;
  VAR_4[11] = (VAR_0[2 * VAR_1 + VAR_3] + 2 * VAR_0[5 * VAR_1 + VAR_3] + 4 * VAR_0[8 * VAR_1 + VAR_3]) / 24;

  VAR_4[12] = (VAR_0[VAR_3] - 2 * VAR_0[3 * VAR_1 + VAR_3] + 4 * VAR_0[6 * VAR_1 + VAR_3]) / 24;
  VAR_4[13] = (VAR_0[VAR_1 + VAR_3] - 2 * VAR_0[4 * VAR_1 + VAR_3] + 4 * VAR_0[7 * VAR_1 + VAR_3]) / 24;
  VAR_4[14] = (VAR_0[2 * VAR_1 + VAR_3] - 2 * VAR_0[5 * VAR_1 + VAR_3] + 4 * VAR_0[8 * VAR_1 + VAR_3]) / 24;

  VAR_4[15] = VAR_0[6 * VAR_1 + VAR_3];
  VAR_4[16] = VAR_0[7 * VAR_1 + VAR_3];
  VAR_4[17] = VAR_0[8 * VAR_1 + VAR_3];
  VAR_2[0] = VAR_4[0] / 4;
  VAR_2[VAR_1] = -(VAR_4[0] + VAR_4[1] + VAR_4[2]) / 6;
  VAR_2[2 * VAR_1] = (-VAR_4[0] + VAR_4[1] - VAR_4[2]) / 6;
  VAR_2[3 * VAR_1] = (VAR_4[0] + 2 * VAR_4[1] + 4 * VAR_4[2]) / 24;
  VAR_2[4 * VAR_1] = (VAR_4[0] - 2 * VAR_4[1] + 4 * VAR_4[2]) / 24;
  VAR_2[5 * VAR_1] = VAR_4[2];

  VAR_2[6 * VAR_1] = VAR_4[3] / 4;
  VAR_2[7 * VAR_1] = -(VAR_4[3] + VAR_4[4] + VAR_4[5]) / 6;
  VAR_2[8 * VAR_1] = (-VAR_4[3] + VAR_4[4] - VAR_4[5]) / 6;
  VAR_2[9 * VAR_1] = (VAR_4[3] + 2 * VAR_4[4] + 4 * VAR_4[5]) / 24;
  VAR_2[10 * VAR_1] = (VAR_4[3] - 2 * VAR_4[4] + 4 * VAR_4[5]) / 24;
  VAR_2[11 * VAR_1] = VAR_4[5];

  VAR_2[12 * VAR_1] = VAR_4[6] / 4;
  VAR_2[13 * VAR_1] = -(VAR_4[6] + VAR_4[7] + VAR_4[8]) / 6;
  VAR_2[14 * VAR_1] = (-VAR_4[6] + VAR_4[7] - VAR_4[8]) / 6;
  VAR_2[15 * VAR_1] = (VAR_4[6] + 2 * VAR_4[7] + 4 * VAR_4[8]) / 24;
  VAR_2[16 * VAR_1] = (VAR_4[6] - 2 * VAR_4[7] + 4 * VAR_4[8]) / 24;
  VAR_2[17 * VAR_1] = VAR_4[8];

  VAR_2[18 * VAR_1] = VAR_4[9] / 4;
  VAR_2[19 * VAR_1] = -(VAR_4[9] + VAR_4[10] + VAR_4[11]) / 6;
  VAR_2[20 * VAR_1] = (-VAR_4[9] + VAR_4[10] - VAR_4[11]) / 6;
  VAR_2[21 * VAR_1] = (VAR_4[9] + 2 * VAR_4[10] + 4 * VAR_4[11]) / 24;
  VAR_2[22 * VAR_1] = (VAR_4[9] - 2 * VAR_4[10] + 4 * VAR_4[11]) / 24;
  VAR_2[23 * VAR_1] = VAR_4[11];

  VAR_2[24 * VAR_1] = VAR_4[12] / 4;
  VAR_2[25 * VAR_1] = -(VAR_4[12] + VAR_4[13] + VAR_4[14]) / 6;
  VAR_2[26 * VAR_1] = (-VAR_4[12] + VAR_4[13] - VAR_4[14]) / 6;
  VAR_2[27 * VAR_1] = (VAR_4[12] + 2 * VAR_4[13] + 4 * VAR_4[14]) / 24;
  VAR_2[28 * VAR_1] = (VAR_4[12] - 2 * VAR_4[13] + 4 * VAR_4[14]) / 24;
  VAR_2[29 * VAR_1] = VAR_4[14];

  VAR_2[30 * VAR_1] = VAR_4[15] / 4;
  VAR_2[31 * VAR_1] = -(VAR_4[15] + VAR_4[16] + VAR_4[17]) / 6;
  VAR_2[32 * VAR_1] = (-VAR_4[15] + VAR_4[16] - VAR_4[17]) / 6;
  VAR_2[33 * VAR_1] = (VAR_4[15] + 2 * VAR_4[16] + 4 * VAR_4[17]) / 24;
  VAR_2[34 * VAR_1] = (VAR_4[15] - 2 * VAR_4[16] + 4 * VAR_4[17]) / 24;
  VAR_2[35 * VAR_1] = VAR_4[17];
  ++VAR_2;
 }
}
