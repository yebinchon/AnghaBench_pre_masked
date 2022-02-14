
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (int,int,int,int,int,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int,int ,int,int,int,int,int,int,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int,scalar_t__,scalar_t__) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (int,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_20(uint8_t *VAR_1,
                                  int32_t VAR_2,
                                  int16_t *VAR_3,
                                  int32_t VAR_4,
                                  uint8_t *VAR_5,
                                  int32_t VAR_6,
                                  const int8_t *VAR_7,
                                  int32_t VAR_8)
{
    uint32_t VAR_9;
    int32_t VAR_10, VAR_11;
    int64_t VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17;
    v16i8 VAR_18, VAR_19, VAR_20;
    v8i16 VAR_21, VAR_22, VAR_23, VAR_24;
    v16i8 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34, VAR_35;
    v8i16 VAR_36, VAR_37, VAR_38, VAR_39;
    v8i16 VAR_40, VAR_41;

    VAR_1 -= 3;
    VAR_41 = FUNC_17(128);
    VAR_41 <<= 6;

    VAR_40 = FUNC_5(VAR_7);
    FUNC_9(VAR_40, 0, 1, 2, 3, VAR_21, VAR_22, VAR_23, VAR_24);

    VAR_25 = FUNC_3(VAR_0);
    VAR_26 = VAR_25 + 2;
    VAR_27 = VAR_25 + 4;
    VAR_28 = VAR_25 + 6;
    VAR_29 = FUNC_3(&VAR_0[16]);
    VAR_30 = VAR_29 + 2;
    VAR_31 = VAR_29 + 4;
    VAR_32 = VAR_29 + 6;

    for (VAR_9 = 8; VAR_9--;) {
        FUNC_4(VAR_1, 8, VAR_14, VAR_15);
        VAR_1 += VAR_2;
        FUNC_4(VAR_1, 8, VAR_16, VAR_17);
        VAR_1 += VAR_2;
        FUNC_6(VAR_3, 8, VAR_36, VAR_37);
        VAR_3 += VAR_4;
        FUNC_6(VAR_3, 8, VAR_38, VAR_39);
        VAR_3 += VAR_4;
        FUNC_12(VAR_14, VAR_15, VAR_16, VAR_17);

        VAR_33 = VAR_41;
        VAR_34 = VAR_41;
        VAR_35 = VAR_41;

        FUNC_11(VAR_14, VAR_14, VAR_15, VAR_17, VAR_16, VAR_16, VAR_25, VAR_29, VAR_25,
                   VAR_18, VAR_19, VAR_20);
        FUNC_1(VAR_18, VAR_19, VAR_21, VAR_21, VAR_33, VAR_34);
        VAR_35 = FUNC_16(VAR_35, VAR_20, (v16i8) VAR_21);
        FUNC_11(VAR_14, VAR_14, VAR_15, VAR_17, VAR_16, VAR_16, VAR_26, VAR_30, VAR_26,
                   VAR_18, VAR_19, VAR_20);
        FUNC_1(VAR_18, VAR_19, VAR_22, VAR_22, VAR_33, VAR_34);
        VAR_35 = FUNC_16(VAR_35, VAR_20, (v16i8) VAR_22);
        FUNC_11(VAR_14, VAR_14, VAR_15, VAR_17, VAR_16, VAR_16, VAR_27, VAR_31, VAR_27,
                   VAR_18, VAR_19, VAR_20);
        FUNC_1(VAR_18, VAR_19, VAR_23, VAR_23, VAR_33, VAR_34);
        VAR_35 = FUNC_16(VAR_35, VAR_20, (v16i8) VAR_23);
        FUNC_11(VAR_14, VAR_14, VAR_15, VAR_17, VAR_16, VAR_16, VAR_28, VAR_32, VAR_28,
                   VAR_18, VAR_19, VAR_20);
        FUNC_1(VAR_18, VAR_19, VAR_24, VAR_24, VAR_33, VAR_34);
        VAR_35 = FUNC_16(VAR_35, VAR_20, (v16i8) VAR_24);

        VAR_37 = (v8i16) FUNC_18((v2i64) VAR_39, (v2i64) VAR_37);
        FUNC_2(VAR_36, VAR_37, VAR_33, VAR_34, 7, VAR_33, VAR_34);
        VAR_35 = FUNC_13(VAR_38, VAR_35);
        VAR_35 = FUNC_19(VAR_35, 7);
        FUNC_0(VAR_35);
        FUNC_7(VAR_34, VAR_33, VAR_35, VAR_35, VAR_33, VAR_34);

        VAR_12 = FUNC_14((v2i64) VAR_33, 0);
        VAR_10 = FUNC_15((v4i32) VAR_33, 2);
        VAR_13 = FUNC_14((v2i64) VAR_34, 0);
        VAR_11 = FUNC_15((v4i32) VAR_33, 3);
        FUNC_8(VAR_12, VAR_5);
        FUNC_10(VAR_10, VAR_5 + 8);
        VAR_5 += VAR_6;
        FUNC_8(VAR_13, VAR_5);
        FUNC_10(VAR_11, VAR_5 + 8);
        VAR_5 += VAR_6;
    }
}
