
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_simd16_t ;
typedef int int16_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_10, int16_t *VAR_11, int16_t *VAR_12, int VAR_13)
{
    int_simd16_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int_simd16_t VAR_22, VAR_23, VAR_24, VAR_25;
    int_simd16_t VAR_26,VAR_27,VAR_28,VAR_29,VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    int_simd16_t VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;

    int16_t *VAR_43;
    int16_t *VAR_44;
    int16_t *VAR_45;
    int VAR_46;

    VAR_43 = VAR_11;
    VAR_44 = VAR_12;

    for (; VAR_13 > 0; VAR_13 -= 2) {
        VAR_45 = (int16_t *)VAR_10;
        for (VAR_46 = VAR_0; VAR_46 > 0; VAR_46--) {

            VAR_14 = VAR_43[VAR_0 * 0] + VAR_43[VAR_0 * 7];
            VAR_21 = VAR_43[VAR_0 * 0] - VAR_43[VAR_0 * 7];

            VAR_15 = VAR_43[VAR_0 * 1] + VAR_43[VAR_0 * 6];
            VAR_20 = VAR_43[VAR_0 * 1] - VAR_43[VAR_0 * 6];

            VAR_16 = VAR_43[VAR_0 * 2] + VAR_43[VAR_0 * 5];
            VAR_19 = VAR_43[VAR_0 * 2] - VAR_43[VAR_0 * 5];

            VAR_17 = VAR_43[VAR_0 * 3] + VAR_43[VAR_0 * 4];
            VAR_18 = VAR_43[VAR_0 * 3] - VAR_43[VAR_0 * 4];



            VAR_22 = VAR_14 + VAR_17;
            VAR_25 = VAR_14 - VAR_17;
            VAR_23 = VAR_15 + VAR_16;
            VAR_24 = VAR_15 - VAR_16;

            VAR_35 = VAR_22 + VAR_23;
            VAR_39 = VAR_22 - VAR_23;

            VAR_26 = FUNC_0((VAR_24 + VAR_25) << 2, VAR_3);
            VAR_37 = VAR_25 + VAR_26;
            VAR_41 = VAR_25 - VAR_26;



            FUNC_1(VAR_14, VAR_35, VAR_45[0 * 8]);
            FUNC_1(VAR_15, VAR_37, VAR_45[2 * 8]);
            FUNC_1(VAR_16, VAR_39, VAR_45[4 * 8]);
            FUNC_1(VAR_17, VAR_41, VAR_45[6 * 8]);
            VAR_14 += 2;
            VAR_22 = (VAR_14 + VAR_16) >> 2;
            VAR_23 = (VAR_14 - VAR_16) >> 2;

            VAR_25 = (VAR_15 + VAR_17) >>2;
            VAR_24 = FUNC_0((VAR_15 - VAR_17), VAR_7) - VAR_25;

            VAR_14 = VAR_22 + VAR_25;
            VAR_17 = VAR_22 - VAR_25;
            VAR_15 = VAR_23 + VAR_24;
            VAR_16 = VAR_23 - VAR_24;



            VAR_22 = VAR_18 + VAR_19;
            VAR_23 = VAR_19 + VAR_20;
            VAR_24 = VAR_20 + VAR_21;

            VAR_30 = FUNC_0((VAR_22 - VAR_24) << 2, VAR_1);
            VAR_27 = FUNC_0(VAR_22 << 2, VAR_2) + VAR_30;
            VAR_29 = FUNC_0(VAR_24 << 2, VAR_5) + VAR_30;
            VAR_28 = FUNC_0(VAR_23 << 2, VAR_3);

            VAR_32 = VAR_21 + VAR_28;
            VAR_34 = VAR_21 - VAR_28;

            VAR_40 = VAR_34 + VAR_27;
            VAR_38 = VAR_34 - VAR_27;
            VAR_36 = VAR_32 + VAR_29;
            VAR_42 = VAR_32 - VAR_29;



            FUNC_1(VAR_18, VAR_36, VAR_45[1 * 8]);
            FUNC_1(VAR_19, VAR_38, VAR_45[3 * 8]);
            FUNC_1(VAR_20, VAR_40, VAR_45[5 * 8]);
            FUNC_1(VAR_21, VAR_42, VAR_45[7 * 8]);


            VAR_34 = VAR_20 + VAR_19;
            VAR_31 = (VAR_20 - VAR_19) << 1;
            VAR_32 = VAR_18 + VAR_21;
            VAR_33 = (VAR_18 - VAR_21) << 1;

            VAR_21 = (VAR_32 + VAR_34) >> 2;
            VAR_23 = FUNC_0((VAR_32 - VAR_34) << 1, VAR_6);
            VAR_30 = FUNC_0(VAR_31 + VAR_33, VAR_8);
            VAR_22 = FUNC_0(VAR_33, VAR_4) - VAR_30;
            VAR_24 = FUNC_0(VAR_31, VAR_9) + VAR_30;

            VAR_20 = VAR_24 - VAR_21;
            VAR_19 = VAR_23 - VAR_20;
            VAR_18 = VAR_22 + VAR_19;

            VAR_44[VAR_0 * 0] += (VAR_14 + VAR_21);
            VAR_44[VAR_0 * 1] += (VAR_15 + VAR_20);
            VAR_44[VAR_0 * 2] += (VAR_16 + VAR_19);
            VAR_44[VAR_0 * 3] += (VAR_17 - VAR_18);
            VAR_44[VAR_0 * 4] += (VAR_17 + VAR_18);
            VAR_44[VAR_0 * 5] += (VAR_16 - VAR_19);
            VAR_44[VAR_0 * 6] = (VAR_15 - VAR_20);
            VAR_44[VAR_0 * 7] = (VAR_14 - VAR_21);

            VAR_43++;
            VAR_44++;
            VAR_45++;
        }
        VAR_43 += 8;
        VAR_44 += 8;
    }
}
