
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int*,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int,int ,int,int ,int,int ,int,int*,int) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0, uint8_t *VAR_1, int32_t VAR_2,
                               int32_t VAR_3, int32_t VAR_4,
                               int32_t VAR_5, int32_t VAR_6)
{
    uint8_t VAR_7;
    uint64_t VAR_8, VAR_9, VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18;
    v16u8 VAR_19, VAR_20, VAR_21, VAR_22;
    v16i8 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
    v8i16 VAR_39, VAR_40;

    VAR_6 = (unsigned) ((VAR_6 + 1) | 1) << VAR_3;
    VAR_6 += (128 * (VAR_4 + VAR_5));

    VAR_12 = FUNC_10(VAR_4);
    VAR_13 = FUNC_10(VAR_5);
    VAR_40 = FUNC_11(VAR_6);
    VAR_39 = FUNC_11(VAR_3 + 1);
    VAR_14 = FUNC_12(VAR_13, VAR_12);

    for (VAR_7 = 2; VAR_7--;) {
        FUNC_4(VAR_0, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
        VAR_0 += 4 * VAR_2;
        FUNC_3(VAR_8, VAR_9, VAR_15);
        FUNC_3(VAR_10, VAR_11, VAR_16);
        FUNC_4(VAR_0, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
        VAR_0 += 4 * VAR_2;
        FUNC_3(VAR_8, VAR_9, VAR_17);
        FUNC_3(VAR_10, VAR_11, VAR_18);
        FUNC_4(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_3(VAR_8, VAR_9, VAR_19);
        FUNC_3(VAR_10, VAR_11, VAR_20);
        FUNC_4(VAR_1 + 4 * VAR_2, VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_3(VAR_8, VAR_9, VAR_21);
        FUNC_3(VAR_10, VAR_11, VAR_22);
        FUNC_8(VAR_15, VAR_16, VAR_17, VAR_18);
        FUNC_8(VAR_19, VAR_20, VAR_21, VAR_22);
        FUNC_2(VAR_19, VAR_15, VAR_20, VAR_16, VAR_21, VAR_17, VAR_22, VAR_18,
                   VAR_23, VAR_25, VAR_27, VAR_29);
        FUNC_1(VAR_19, VAR_15, VAR_20, VAR_16, VAR_21, VAR_17, VAR_22, VAR_18,
                   VAR_24, VAR_26, VAR_28, VAR_30);

        VAR_31 = FUNC_9(VAR_40, VAR_14, VAR_23);
        VAR_32 = FUNC_9(VAR_40, VAR_14, VAR_24);
        VAR_33 = FUNC_9(VAR_40, VAR_14, VAR_25);
        VAR_34 = FUNC_9(VAR_40, VAR_14, VAR_26);
        VAR_35 = FUNC_9(VAR_40, VAR_14, VAR_27);
        VAR_36 = FUNC_9(VAR_40, VAR_14, VAR_28);
        VAR_37 = FUNC_9(VAR_40, VAR_14, VAR_29);
        VAR_38 = FUNC_9(VAR_40, VAR_14, VAR_30);

        FUNC_6(VAR_31, VAR_32, VAR_33, VAR_34, VAR_39);
        FUNC_6(VAR_35, VAR_36, VAR_37, VAR_38, VAR_39);
        FUNC_0(VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38);
        FUNC_5(VAR_32, VAR_31, VAR_34, VAR_33, VAR_36, VAR_35, VAR_38, VAR_37,
                    VAR_19, VAR_20, VAR_21, VAR_22);
        FUNC_7(VAR_19, VAR_20, VAR_21, VAR_22, 0, 1, 0, 1, 0, 1, 0, 1, VAR_1, VAR_2);
        VAR_1 += 8 * VAR_2;
    }
}
