
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0,const long *VAR_1,
                                const float *VAR_2,
                                float *VAR_3,
                                const float VAR_4,
                                const int VAR_5){

  float *VAR_6=FUNC_0(VAR_0*sizeof(*VAR_6));
  float *VAR_7=FUNC_0(VAR_0*sizeof(*VAR_6));
  float *VAR_8=FUNC_0(VAR_0*sizeof(*VAR_6));
  float *VAR_9=FUNC_0(VAR_0*sizeof(*VAR_6));
  float *VAR_10=FUNC_0(VAR_0*sizeof(*VAR_6));

  float VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  int VAR_16;

  int VAR_17, VAR_18;
  float VAR_19=0.f;
  float VAR_20=0.f;
  float VAR_21=0.f;
  float VAR_22=1.f;
  float VAR_23, VAR_24, VAR_25;

  VAR_11 = VAR_12 = VAR_13 = VAR_14 = VAR_15 = 0.f;

  VAR_25 = VAR_2[0] + VAR_4;
  if (VAR_25 < 1.f) VAR_25 = 1.f;

  VAR_23 = VAR_25 * VAR_25 * .5;

  VAR_11 += VAR_23;
  VAR_12 += VAR_23;
  VAR_14 += VAR_23 * VAR_25;

  VAR_6[0] = VAR_11;
  VAR_7[0] = VAR_12;
  VAR_8[0] = VAR_13;
  VAR_9[0] = VAR_14;
  VAR_10[0] = VAR_15;

  for (VAR_16 = 1, VAR_24 = 1.f; VAR_16 < VAR_0; VAR_16++, VAR_24 += 1.f) {

    VAR_25 = VAR_2[VAR_16] + VAR_4;
    if (VAR_25 < 1.f) VAR_25 = 1.f;

    VAR_23 = VAR_25 * VAR_25;

    VAR_11 += VAR_23;
    VAR_12 += VAR_23 * VAR_24;
    VAR_13 += VAR_23 * VAR_24 * VAR_24;
    VAR_14 += VAR_23 * VAR_25;
    VAR_15 += VAR_23 * VAR_24 * VAR_25;

    VAR_6[VAR_16] = VAR_11;
    VAR_7[VAR_16] = VAR_12;
    VAR_8[VAR_16] = VAR_13;
    VAR_9[VAR_16] = VAR_14;
    VAR_10[VAR_16] = VAR_15;
  }

  for (VAR_16 = 0, VAR_24 = 0.f;; VAR_16++, VAR_24 += 1.f) {

    VAR_17 = VAR_1[VAR_16] >> 16;
    if( VAR_17>=0 ) break;
    VAR_18 = VAR_1[VAR_16] & 0xffff;

    VAR_11 = VAR_6[VAR_18] + VAR_6[-VAR_17];
    VAR_12 = VAR_7[VAR_18] - VAR_7[-VAR_17];
    VAR_13 = VAR_8[VAR_18] + VAR_8[-VAR_17];
    VAR_14 = VAR_9[VAR_18] + VAR_9[-VAR_17];
    VAR_15 = VAR_10[VAR_18] - VAR_10[-VAR_17];

    VAR_20 = VAR_14 * VAR_13 - VAR_12 * VAR_15;
    VAR_21 = VAR_11 * VAR_15 - VAR_12 * VAR_14;
    VAR_22 = VAR_11 * VAR_13 - VAR_12 * VAR_12;
    VAR_19 = (VAR_20 + VAR_24 * VAR_21) / VAR_22;
    if (VAR_19 < 0.f)
      VAR_19 = 0.f;

    VAR_3[VAR_16] = VAR_19 - VAR_4;
  }

  for ( ;; VAR_16++, VAR_24 += 1.f) {

    VAR_17 = VAR_1[VAR_16] >> 16;
    VAR_18 = VAR_1[VAR_16] & 0xffff;
    if(VAR_18>=VAR_0)break;

    VAR_11 = VAR_6[VAR_18] - VAR_6[VAR_17];
    VAR_12 = VAR_7[VAR_18] - VAR_7[VAR_17];
    VAR_13 = VAR_8[VAR_18] - VAR_8[VAR_17];
    VAR_14 = VAR_9[VAR_18] - VAR_9[VAR_17];
    VAR_15 = VAR_10[VAR_18] - VAR_10[VAR_17];

    VAR_20 = VAR_14 * VAR_13 - VAR_12 * VAR_15;
    VAR_21 = VAR_11 * VAR_15 - VAR_12 * VAR_14;
    VAR_22 = VAR_11 * VAR_13 - VAR_12 * VAR_12;
    VAR_19 = (VAR_20 + VAR_24 * VAR_21) / VAR_22;
    if (VAR_19 < 0.f) VAR_19 = 0.f;

    VAR_3[VAR_16] = VAR_19 - VAR_4;
  }
  for ( ; VAR_16 < VAR_0; VAR_16++, VAR_24 += 1.f) {

    VAR_19 = (VAR_20 + VAR_24 * VAR_21) / VAR_22;
    if (VAR_19 < 0.f) VAR_19 = 0.f;

    VAR_3[VAR_16] = VAR_19 - VAR_4;
  }

  if (VAR_5 <= 0) return;

  for (VAR_16 = 0, VAR_24 = 0.f;; VAR_16++, VAR_24 += 1.f) {
    VAR_18 = VAR_16 + VAR_5 / 2;
    VAR_17 = VAR_18 - VAR_5;
    if(VAR_17>=0)break;

    VAR_11 = VAR_6[VAR_18] + VAR_6[-VAR_17];
    VAR_12 = VAR_7[VAR_18] - VAR_7[-VAR_17];
    VAR_13 = VAR_8[VAR_18] + VAR_8[-VAR_17];
    VAR_14 = VAR_9[VAR_18] + VAR_9[-VAR_17];
    VAR_15 = VAR_10[VAR_18] - VAR_10[-VAR_17];


    VAR_20 = VAR_14 * VAR_13 - VAR_12 * VAR_15;
    VAR_21 = VAR_11 * VAR_15 - VAR_12 * VAR_14;
    VAR_22 = VAR_11 * VAR_13 - VAR_12 * VAR_12;
    VAR_19 = (VAR_20 + VAR_24 * VAR_21) / VAR_22;

    if (VAR_19 - VAR_4 < VAR_3[VAR_16]) VAR_3[VAR_16] = VAR_19 - VAR_4;
  }
  for ( ;; VAR_16++, VAR_24 += 1.f) {

    VAR_18 = VAR_16 + VAR_5 / 2;
    VAR_17 = VAR_18 - VAR_5;
    if(VAR_18>=VAR_0)break;

    VAR_11 = VAR_6[VAR_18] - VAR_6[VAR_17];
    VAR_12 = VAR_7[VAR_18] - VAR_7[VAR_17];
    VAR_13 = VAR_8[VAR_18] - VAR_8[VAR_17];
    VAR_14 = VAR_9[VAR_18] - VAR_9[VAR_17];
    VAR_15 = VAR_10[VAR_18] - VAR_10[VAR_17];

    VAR_20 = VAR_14 * VAR_13 - VAR_12 * VAR_15;
    VAR_21 = VAR_11 * VAR_15 - VAR_12 * VAR_14;
    VAR_22 = VAR_11 * VAR_13 - VAR_12 * VAR_12;
    VAR_19 = (VAR_20 + VAR_24 * VAR_21) / VAR_22;

    if (VAR_19 - VAR_4 < VAR_3[VAR_16]) VAR_3[VAR_16] = VAR_19 - VAR_4;
  }
  for ( ; VAR_16 < VAR_0; VAR_16++, VAR_24 += 1.f) {
    VAR_19 = (VAR_20 + VAR_24 * VAR_21) / VAR_22;
    if (VAR_19 - VAR_4 < VAR_3[VAR_16]) VAR_3[VAR_16] = VAR_19 - VAR_4;
  }
}
