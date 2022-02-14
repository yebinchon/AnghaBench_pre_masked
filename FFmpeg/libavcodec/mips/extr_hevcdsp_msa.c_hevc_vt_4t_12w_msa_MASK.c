
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int,int ,int,int,int) ;
 int FUNC_7 (int,int,int ,int,int ,int,int *,int) ;
 int FUNC_8 (int,int,int,int,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
                               int32_t VAR_1,
                               int16_t *VAR_2,
                               int32_t VAR_3,
                               const int8_t *VAR_4,
                               int32_t VAR_5)
{
    int32_t VAR_6;
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17;
    v8i16 VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    v16i8 VAR_28, VAR_29;
    v16i8 VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34;
    v8i16 VAR_35, VAR_36;
    v8i16 VAR_37, VAR_38;

    VAR_0 -= (1 * VAR_1);
    VAR_38 = FUNC_12(128);
    VAR_38 <<= 6;

    VAR_37 = FUNC_5(VAR_4);
    FUNC_6(VAR_37, 0, 1, VAR_35, VAR_36);

    FUNC_4(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9);
    VAR_0 += (3 * VAR_1);
    FUNC_10(VAR_7, VAR_8, VAR_9);
    FUNC_2(VAR_8, VAR_7, VAR_9, VAR_8, VAR_14, VAR_16);
    FUNC_1(VAR_8, VAR_7, VAR_9, VAR_8, VAR_22, VAR_25);
    VAR_28 = (v16i8) FUNC_11((v2i64) VAR_25, (v2i64) VAR_22);

    for (VAR_6 = 4; VAR_6--;) {
        FUNC_3(VAR_0, VAR_1, VAR_10, VAR_11);
        VAR_0 += (2 * VAR_1);
        FUNC_3(VAR_0, VAR_1, VAR_12, VAR_13);
        VAR_0 += (2 * VAR_1);
        FUNC_9(VAR_10, VAR_11);
        FUNC_9(VAR_12, VAR_13);

        FUNC_2(VAR_10, VAR_9, VAR_11, VAR_10, VAR_15, VAR_17);
        FUNC_1(VAR_10, VAR_9, VAR_11, VAR_10, VAR_23, VAR_26);
        VAR_29 = (v16i8) FUNC_11((v2i64) VAR_26, (v2i64) VAR_23);
        FUNC_2(VAR_12, VAR_11, VAR_13, VAR_12, VAR_30, VAR_31);
        FUNC_1(VAR_12, VAR_11, VAR_13, VAR_12, VAR_24, VAR_27);
        VAR_32 = (v16i8) FUNC_11((v2i64) VAR_27, (v2i64) VAR_24);

        VAR_18 = VAR_38;
        FUNC_0(VAR_14, VAR_15, VAR_35, VAR_36, VAR_18, VAR_18);
        VAR_19 = VAR_38;
        FUNC_0(VAR_16, VAR_17, VAR_35, VAR_36, VAR_19, VAR_19);
        VAR_20 = VAR_38;
        FUNC_0(VAR_15, VAR_30, VAR_35, VAR_36, VAR_20, VAR_20);
        VAR_21 = VAR_38;
        FUNC_0(VAR_17, VAR_31, VAR_35, VAR_36, VAR_21, VAR_21);
        VAR_33 = VAR_38;
        FUNC_0(VAR_28, VAR_29, VAR_35, VAR_36, VAR_33, VAR_33);
        VAR_34 = VAR_38;
        FUNC_0(VAR_29, VAR_32, VAR_35, VAR_36, VAR_34, VAR_34);

        FUNC_8(VAR_18, VAR_19, VAR_20, VAR_21, VAR_2, VAR_3);
        FUNC_7(VAR_33, VAR_34, 0, 1, 0, 1, VAR_2 + 8, VAR_3);
        VAR_2 += (4 * VAR_3);

        VAR_9 = VAR_13;
        VAR_14 = VAR_30;
        VAR_16 = VAR_31;
        VAR_28 = VAR_32;
    }
}
