
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
                                             int32_t VAR_1,
                                             int16_t *VAR_2,
                                             int32_t VAR_3,
                                             uint8_t *VAR_4,
                                             int32_t VAR_5,
                                             const int8_t *VAR_6,
                                             int32_t VAR_7,
                                             int32_t VAR_8,
                                             int32_t VAR_9,
                                             int32_t VAR_10,
                                             int32_t VAR_11,
                                             int32_t VAR_12)
{
    uint32_t VAR_13;
    int32_t VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v8i16 VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26, VAR_27, VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31, VAR_32, VAR_33;
    v8i16 VAR_34, VAR_35;
    v8i16 VAR_36;
    v4i32 VAR_37, VAR_38, VAR_39;

    VAR_0 -= VAR_1;

    VAR_14 = (VAR_10 + VAR_11) << VAR_12;
    VAR_8 = VAR_8 & 0x0000FFFF;
    VAR_15 = VAR_8 | (VAR_9 << 16);
    VAR_16 = 128 * VAR_9;
    VAR_16 <<= 6;
    VAR_14 += VAR_16;

    VAR_38 = FUNC_12(VAR_14);
    VAR_37 = FUNC_12(VAR_15);
    VAR_39 = FUNC_12(VAR_12 + 1);

    VAR_36 = FUNC_5(VAR_6);
    FUNC_8(VAR_36, 0, 1, VAR_34, VAR_35);

    FUNC_4(VAR_0, VAR_1, VAR_17, VAR_18, VAR_19);
    VAR_0 += (3 * VAR_1);
    FUNC_11(VAR_17, VAR_18, VAR_19);
    FUNC_2(VAR_18, VAR_17, VAR_19, VAR_18, VAR_26, VAR_28);

    for (VAR_13 = (VAR_7 >> 2); VAR_13--;) {
        FUNC_3(VAR_0, VAR_1, VAR_20, VAR_21);
        VAR_0 += (2 * VAR_1);
        FUNC_6(VAR_2, VAR_3, VAR_22, VAR_23, VAR_24, VAR_25);
        VAR_2 += (4 * VAR_3);
        FUNC_10(VAR_20, VAR_21);
        FUNC_2(VAR_20, VAR_19, VAR_21, VAR_20, VAR_27, VAR_29);

        VAR_30 = FUNC_1(VAR_26, VAR_27, VAR_34, VAR_35);
        VAR_31 = FUNC_1(VAR_28, VAR_29, VAR_34, VAR_35);

        FUNC_3(VAR_0, VAR_1, VAR_18, VAR_19);
        VAR_0 += (2 * VAR_1);
        FUNC_10(VAR_18, VAR_19);
        FUNC_2(VAR_18, VAR_21, VAR_19, VAR_18, VAR_26, VAR_28);

        VAR_32 = FUNC_1(VAR_27, VAR_26, VAR_34, VAR_35);
        VAR_33 = FUNC_1(VAR_29, VAR_28, VAR_34, VAR_35);
        FUNC_0(VAR_30, VAR_31, VAR_32, VAR_33,
                           VAR_22, VAR_23, VAR_24, VAR_25,
                           VAR_37, VAR_39, VAR_38,
                           VAR_30, VAR_31, VAR_32, VAR_33);

        FUNC_7(VAR_31, VAR_30, VAR_33, VAR_32, VAR_30, VAR_31);
        FUNC_9(VAR_30, VAR_31, 0, 1, 0, 1, VAR_4, VAR_5);
        VAR_4 += (4 * VAR_5);
    }
}
