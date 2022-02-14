
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int const*,int,int ,int ) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int) ;
 int FUNC_11 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_13(const uint8_t *VAR_1,
                                              int32_t VAR_2,
                                              uint8_t *VAR_3, int32_t VAR_4,
                                              const int8_t *VAR_5,
                                              int32_t VAR_6)
{
    int32_t VAR_7;
    v16i8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    v16u8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v8i16 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v8i16 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;

    VAR_16 = FUNC_5(&VAR_0[0]);
    VAR_1 -= 3;


    VAR_22 = FUNC_4(VAR_5);
    FUNC_9(VAR_22, 0, 1, 2, 3, VAR_12, VAR_13, VAR_14, VAR_15);

    VAR_17 = VAR_16 + 2;
    VAR_18 = VAR_16 + 4;
    VAR_19 = VAR_16 + 6;

    for (VAR_7 = VAR_6 >> 1; VAR_7--;) {
        FUNC_3(VAR_1, VAR_2, VAR_8, VAR_10);
        FUNC_3(VAR_1 + 8, VAR_2, VAR_9, VAR_11);
        VAR_1 += (2 * VAR_2);

        FUNC_12(VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_11(VAR_8, VAR_8, VAR_16, VAR_17, VAR_18, VAR_19, VAR_27, VAR_31, VAR_35,
                   VAR_39);
        FUNC_11(VAR_9, VAR_9, VAR_16, VAR_17, VAR_18, VAR_19, VAR_28, VAR_32, VAR_36,
                   VAR_40);
        FUNC_11(VAR_10, VAR_10, VAR_16, VAR_17, VAR_18, VAR_19, VAR_29, VAR_33, VAR_37,
                   VAR_41);
        FUNC_11(VAR_11, VAR_11, VAR_16, VAR_17, VAR_18, VAR_19, VAR_30, VAR_34, VAR_38,
                   VAR_42);
        FUNC_1(VAR_27, VAR_28, VAR_29, VAR_30, VAR_12, VAR_12, VAR_12, VAR_12, VAR_27,
                    VAR_28, VAR_29, VAR_30);
        FUNC_1(VAR_35, VAR_36, VAR_37, VAR_38, VAR_14, VAR_14, VAR_14, VAR_14, VAR_35,
                    VAR_36, VAR_37, VAR_38);
        FUNC_2(VAR_31, VAR_32, VAR_33, VAR_34, VAR_13, VAR_13, VAR_13, VAR_13, VAR_27,
                     VAR_28, VAR_29, VAR_30);
        FUNC_2(VAR_39, VAR_40, VAR_41, VAR_42, VAR_15, VAR_15, VAR_15, VAR_15,
                     VAR_35, VAR_36, VAR_37, VAR_38);
        FUNC_0(VAR_27, VAR_35, VAR_28, VAR_36, VAR_29, VAR_37, VAR_30, VAR_38, VAR_23,
                    VAR_24, VAR_25, VAR_26);
        FUNC_6(VAR_3, VAR_4, VAR_20, VAR_21);
        FUNC_10(VAR_23, VAR_24, VAR_25, VAR_26, 7);
        FUNC_8(VAR_23, VAR_24, VAR_25, VAR_26, 7);
        FUNC_7(VAR_24, VAR_23, VAR_20, VAR_3);
        VAR_3 += VAR_4;
        FUNC_7(VAR_26, VAR_25, VAR_21, VAR_3);
        VAR_3 += VAR_4;
    }
}
