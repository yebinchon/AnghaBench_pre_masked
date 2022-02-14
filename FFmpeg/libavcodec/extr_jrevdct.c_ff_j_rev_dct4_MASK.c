
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int* DCTBLOCK ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;
 int VAR_7 ;

void FUNC_3(DCTBLOCK VAR_8)
{
  int32_t VAR_9, VAR_10, VAR_11, VAR_12;
  int32_t VAR_13, VAR_14, VAR_15, VAR_16;
  int32_t VAR_17;
  int32_t VAR_18, VAR_19, VAR_20, VAR_21;
  register int16_t *VAR_22;
  int VAR_23;





  VAR_8[0] += 4;

  VAR_22 = VAR_8;

  for (VAR_23 = VAR_1-1; VAR_23 >= 0; VAR_23--) {
    register uint8_t *VAR_24 = (uint8_t*)VAR_22;

    VAR_18 = VAR_22[0];
    VAR_19 = VAR_22[1];
    VAR_20 = VAR_22[2];
    VAR_21 = VAR_22[3];

    if ((VAR_19 | VAR_20 | VAR_21) == 0) {

      if (VAR_18) {

          int16_t VAR_25 = (int16_t) (VAR_18 << VAR_7);
          register int VAR_26 = (VAR_25 & 0xffff) | ((VAR_25 << 16) & 0xffff0000);

          FUNC_0(&VAR_24[0], VAR_26);
          FUNC_0(&VAR_24[4], VAR_26);
      }

      VAR_22 += VAR_2;
      continue;
    }



    if (VAR_21) {
            if (VAR_19) {

                    VAR_17 = FUNC_2(VAR_19 + VAR_21, VAR_3);
                    VAR_11 = VAR_17 + FUNC_2(-VAR_21, VAR_6);
                    VAR_12 = VAR_17 + FUNC_2(VAR_19, VAR_4);

                    VAR_9 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_10 = (VAR_18 - VAR_20) << VAR_0;

                    VAR_13 = VAR_9 + VAR_12;
                    VAR_16 = VAR_9 - VAR_12;
                    VAR_14 = VAR_10 + VAR_11;
                    VAR_15 = VAR_10 - VAR_11;
            } else {

                    VAR_11 = FUNC_2(-VAR_21, VAR_5);
                    VAR_12 = FUNC_2(VAR_21, VAR_3);

                    VAR_9 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_10 = (VAR_18 - VAR_20) << VAR_0;

                    VAR_13 = VAR_9 + VAR_12;
                    VAR_16 = VAR_9 - VAR_12;
                    VAR_14 = VAR_10 + VAR_11;
                    VAR_15 = VAR_10 - VAR_11;
            }
    } else {
            if (VAR_19) {

                    VAR_11 = FUNC_2(VAR_19, VAR_3);
                    VAR_12 = FUNC_2(VAR_19, VAR_5);

                    VAR_9 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_10 = (VAR_18 - VAR_20) << VAR_0;

                    VAR_13 = VAR_9 + VAR_12;
                    VAR_16 = VAR_9 - VAR_12;
                    VAR_14 = VAR_10 + VAR_11;
                    VAR_15 = VAR_10 - VAR_11;
            } else {

                    VAR_13 = VAR_16 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_14 = VAR_15 = (VAR_18 - VAR_20) << VAR_0;
            }
      }



    VAR_22[0] = (int16_t) FUNC_1(VAR_13, VAR_0-VAR_7);
    VAR_22[1] = (int16_t) FUNC_1(VAR_14, VAR_0-VAR_7);
    VAR_22[2] = (int16_t) FUNC_1(VAR_15, VAR_0-VAR_7);
    VAR_22[3] = (int16_t) FUNC_1(VAR_16, VAR_0-VAR_7);

    VAR_22 += VAR_2;
  }





  VAR_22 = VAR_8;
  for (VAR_23 = VAR_1-1; VAR_23 >= 0; VAR_23--) {
    VAR_18 = VAR_22[VAR_2*0];
    VAR_19 = VAR_22[VAR_2*1];
    VAR_20 = VAR_22[VAR_2*2];
    VAR_21 = VAR_22[VAR_2*3];



    if (VAR_21) {
            if (VAR_19) {

                    VAR_17 = FUNC_2(VAR_19 + VAR_21, VAR_3);
                    VAR_11 = VAR_17 + FUNC_2(-VAR_21, VAR_6);
                    VAR_12 = VAR_17 + FUNC_2(VAR_19, VAR_4);

                    VAR_9 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_10 = (VAR_18 - VAR_20) << VAR_0;

                    VAR_13 = VAR_9 + VAR_12;
                    VAR_16 = VAR_9 - VAR_12;
                    VAR_14 = VAR_10 + VAR_11;
                    VAR_15 = VAR_10 - VAR_11;
            } else {

                    VAR_11 = FUNC_2(-VAR_21, VAR_5);
                    VAR_12 = FUNC_2(VAR_21, VAR_3);

                    VAR_9 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_10 = (VAR_18 - VAR_20) << VAR_0;

                    VAR_13 = VAR_9 + VAR_12;
                    VAR_16 = VAR_9 - VAR_12;
                    VAR_14 = VAR_10 + VAR_11;
                    VAR_15 = VAR_10 - VAR_11;
            }
    } else {
            if (VAR_19) {

                    VAR_11 = FUNC_2(VAR_19, VAR_3);
                    VAR_12 = FUNC_2(VAR_19, VAR_5);

                    VAR_9 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_10 = (VAR_18 - VAR_20) << VAR_0;

                    VAR_13 = VAR_9 + VAR_12;
                    VAR_16 = VAR_9 - VAR_12;
                    VAR_14 = VAR_10 + VAR_11;
                    VAR_15 = VAR_10 - VAR_11;
            } else {

                    VAR_13 = VAR_16 = (VAR_18 + VAR_20) << VAR_0;
                    VAR_14 = VAR_15 = (VAR_18 - VAR_20) << VAR_0;
            }
    }



    VAR_22[VAR_2*0] = VAR_13 >> (VAR_0+VAR_7+3);
    VAR_22[VAR_2*1] = VAR_14 >> (VAR_0+VAR_7+3);
    VAR_22[VAR_2*2] = VAR_15 >> (VAR_0+VAR_7+3);
    VAR_22[VAR_2*3] = VAR_16 >> (VAR_0+VAR_7+3);

    VAR_22++;
  }
}
