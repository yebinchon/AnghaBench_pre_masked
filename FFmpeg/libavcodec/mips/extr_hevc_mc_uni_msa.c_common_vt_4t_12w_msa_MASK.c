
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int ,int ,int) ;
 int FUNC_12 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_13 (int ,int ,int,int,int,int *,int) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int ) ;

__attribute__((used)) static void FUNC_17(uint8_t *VAR_0, int32_t VAR_1,
                                 uint8_t *VAR_2, int32_t VAR_3,
                                 const int8_t *VAR_4, int32_t VAR_5)
{
    uint32_t VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16u8 VAR_14, VAR_15;
    v16i8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    v16i8 VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
    v8i16 VAR_39;

    VAR_0 -= (1 * VAR_1);

    VAR_39 = FUNC_5(VAR_4);
    FUNC_9(VAR_39, 0, 1, VAR_37, VAR_38);

    FUNC_3(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9);
    VAR_0 += (3 * VAR_1);

    FUNC_14(VAR_7, VAR_8, VAR_9);
    FUNC_2(VAR_8, VAR_7, VAR_9, VAR_8, VAR_16, VAR_18);
    FUNC_1(VAR_8, VAR_7, VAR_9, VAR_8, VAR_22, VAR_25);
    VAR_28 = (v16i8) FUNC_16((v2i64) VAR_25, (v2i64) VAR_22);

    for (VAR_6 = 4; VAR_6--;) {
        FUNC_4(VAR_0, VAR_1, VAR_10, VAR_11, VAR_12, VAR_13);
        VAR_0 += (4 * VAR_1);

        FUNC_15(VAR_10, VAR_11, VAR_12, VAR_13);
        FUNC_2(VAR_10, VAR_9, VAR_11, VAR_10, VAR_17, VAR_19);
        FUNC_1(VAR_10, VAR_9, VAR_11, VAR_10, VAR_23, VAR_26);
        VAR_29 = (v16i8) FUNC_16((v2i64) VAR_26, (v2i64) VAR_23);
        FUNC_2(VAR_12, VAR_11, VAR_13, VAR_12, VAR_20, VAR_21);
        FUNC_1(VAR_12, VAR_11, VAR_13, VAR_12, VAR_24, VAR_27);
        VAR_30 = (v16i8) FUNC_16((v2i64) VAR_27, (v2i64) VAR_24);

        VAR_31 = FUNC_0(VAR_16, VAR_17, VAR_37, VAR_38);
        VAR_32 = FUNC_0(VAR_18, VAR_19, VAR_37, VAR_38);
        VAR_35 = FUNC_0(VAR_28, VAR_29, VAR_37, VAR_38);
        VAR_33 = FUNC_0(VAR_17, VAR_20, VAR_37, VAR_38);
        VAR_34 = FUNC_0(VAR_19, VAR_21, VAR_37, VAR_38);
        VAR_36 = FUNC_0(VAR_29, VAR_30, VAR_37, VAR_38);

        FUNC_11(VAR_31, VAR_32, VAR_33, VAR_34, 6);
        FUNC_10(VAR_35, VAR_36, 6);
        FUNC_8(VAR_31, VAR_32, VAR_33, VAR_34, 7);
        FUNC_7(VAR_35, VAR_36, 7);
        VAR_14 = FUNC_6(VAR_31, VAR_32);
        VAR_15 = FUNC_6(VAR_33, VAR_34);
        FUNC_12(VAR_14, VAR_15, 0, 1, 0, 1, VAR_2, VAR_3);
        VAR_14 = FUNC_6(VAR_35, VAR_36);
        FUNC_13(VAR_14, 0, 1, 2, 3, VAR_2 + 8, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_9 = VAR_13;
        VAR_16 = VAR_20;
        VAR_18 = VAR_21;
        VAR_28 = VAR_30;
    }
}
