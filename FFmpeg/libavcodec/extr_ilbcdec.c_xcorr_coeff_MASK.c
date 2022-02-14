
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int int16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int*,int*,int,int) ;

__attribute__((used)) static int FUNC_7(int16_t *VAR_1, int16_t *VAR_2,
                       int16_t VAR_3, int16_t VAR_4,
                       int16_t VAR_5, int16_t VAR_6)
{
    int16_t VAR_7;
    int16_t VAR_8;
    int16_t VAR_9;
    int16_t VAR_10, VAR_11;
    int16_t VAR_12, VAR_13;
    int32_t VAR_14, VAR_15;
    int16_t VAR_16, VAR_17, VAR_18;
    int16_t *VAR_19, *VAR_20;
    int16_t *VAR_21, *VAR_22;
    int16_t VAR_23, VAR_24;
    int16_t VAR_25;
    int32_t VAR_26, VAR_27;
    int VAR_28;
    int VAR_29;


    VAR_13 = 0;
    VAR_18 = VAR_0;
    VAR_24 = -500;
    VAR_7 = 0;
    VAR_8 = 0;


    if (VAR_6 == 1) {
        VAR_9 = FUNC_4(VAR_2, (int16_t) (VAR_3 + VAR_4 - 1));
        VAR_21 = VAR_2;
        VAR_22 = &VAR_2[VAR_3];
    } else {
        VAR_9 = FUNC_4(&VAR_2[-VAR_4], (int16_t) (VAR_3 + VAR_4 - 1));
        VAR_21 = &VAR_2[-1];
        VAR_22 = &VAR_2[VAR_3 - 1];
    }





    if (VAR_9 > 5000) {
        VAR_28 = 2;
    } else {
        VAR_28 = 0;
    }


    VAR_15 = FUNC_6(VAR_2, VAR_2, VAR_3, VAR_28);

    for (VAR_29 = 0; VAR_29 < VAR_4; VAR_29++) {
        VAR_19 = VAR_1;
        VAR_20 = &VAR_2[VAR_8];

        VAR_14 = FUNC_6(VAR_19, VAR_20, VAR_3, VAR_28);

        if ((VAR_15 > 0) && (VAR_14 > 0)) {

            VAR_10 = FUNC_5(VAR_14) - 16;
            VAR_16 = (int16_t) FUNC_3(VAR_14, VAR_10);
            VAR_11 = FUNC_5(VAR_15) - 16;
            VAR_17 = (int16_t) FUNC_3(VAR_15, VAR_11);


            VAR_12 = (int16_t) FUNC_2(VAR_16, VAR_16, 16);




            VAR_23 = VAR_11 - (VAR_10 * 2);




            VAR_25 = VAR_23 - VAR_24;
            VAR_25 = FUNC_1(VAR_25, 31);
            VAR_25 = FUNC_0(VAR_25, -31);





            if (VAR_25 < 0) {
                VAR_26 = ((int32_t) VAR_12 * VAR_18) >> (-VAR_25);
                VAR_27 = ((int32_t) VAR_13 * VAR_17);
            } else {
                VAR_26 = ((int32_t) VAR_12 * VAR_18);
                VAR_27 = ((int32_t) VAR_13 * VAR_17) >> VAR_25;
            }




            if (VAR_26 > VAR_27) {
                VAR_13 = VAR_12;
                VAR_18 = VAR_17;
                VAR_24 = VAR_23;
                VAR_7 = VAR_29;
            }
        }
        VAR_8 += VAR_6;


        VAR_15 += (unsigned)VAR_6 * ((*VAR_22 * *VAR_22 - *VAR_21 * *VAR_21) >> VAR_28);

        VAR_21 += VAR_6;
        VAR_22 += VAR_6;
    }

    return VAR_7 + VAR_5;
}
