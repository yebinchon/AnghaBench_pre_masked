
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int const int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int,int,int) ;
 int FUNC_7 (int,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int,int ,int,int,int,int,int,int,int) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_17(uint8_t *VAR_1,
                                  int32_t VAR_2,
                                  int16_t *VAR_3,
                                  int32_t VAR_4,
                                  uint8_t *VAR_5,
                                  int32_t VAR_6,
                                  const int8_t *VAR_7,
                                  int32_t VAR_8)
{
    uint32_t VAR_9;
    uint64_t VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18;
    v16i8 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26, VAR_27, VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31, VAR_32;
    v8i16 VAR_33, VAR_34, VAR_35;
    v8i16 VAR_36, VAR_37;
    v16i8 VAR_38 = FUNC_3(&VAR_0[0]);

    VAR_1 = VAR_1 - 3;
    VAR_37 = FUNC_15(128);
    VAR_37 <<= 6;

    VAR_36 = FUNC_5(VAR_7);
    FUNC_9(VAR_36, 0, 1, 2, 3, VAR_15, VAR_16, VAR_17, VAR_18);

    VAR_19 = VAR_38 + 2;
    VAR_20 = VAR_38 + 4;
    VAR_21 = VAR_38 + 6;
    VAR_22 = VAR_38 + 8;
    VAR_23 = VAR_38 + 10;
    VAR_24 = VAR_38 + 12;
    VAR_25 = VAR_38 + 14;

    for (VAR_9 = VAR_8; VAR_9--;) {
        FUNC_4(VAR_1, 16, VAR_11, VAR_12);
        VAR_1 += VAR_2;
        FUNC_6(VAR_3, 8, VAR_33, VAR_34);
        VAR_35 = FUNC_5(VAR_3 + 16);
        VAR_3 += VAR_4;
        FUNC_12(VAR_11, VAR_12);

        VAR_30 = VAR_37;
        VAR_31 = VAR_37;
        VAR_32 = VAR_37;
        FUNC_11(VAR_11, VAR_11, VAR_11, VAR_12, VAR_38, VAR_22, VAR_26, VAR_27);
        FUNC_11(VAR_12, VAR_12, VAR_11, VAR_11, VAR_38, VAR_19, VAR_28, VAR_29);
        FUNC_1(VAR_26, VAR_27, VAR_28, VAR_29, VAR_15, VAR_15, VAR_15, VAR_16, VAR_30,
                     VAR_31, VAR_32, VAR_30);
        FUNC_11(VAR_11, VAR_12, VAR_12, VAR_12, VAR_23, VAR_19, VAR_26, VAR_27);
        FUNC_11(VAR_11, VAR_11, VAR_11, VAR_12, VAR_20, VAR_24, VAR_28, VAR_29);
        FUNC_1(VAR_26, VAR_27, VAR_28, VAR_29, VAR_16, VAR_16, VAR_17, VAR_17, VAR_31,
                     VAR_32, VAR_30, VAR_31);
        FUNC_11(VAR_12, VAR_12, VAR_11, VAR_11, VAR_20, VAR_21, VAR_26, VAR_27);
        FUNC_11(VAR_11, VAR_12, VAR_12, VAR_12, VAR_25, VAR_21, VAR_28, VAR_29);
        FUNC_1(VAR_26, VAR_27, VAR_28, VAR_29, VAR_17, VAR_18, VAR_18, VAR_18, VAR_32,
                     VAR_30, VAR_31, VAR_32);

        FUNC_2(VAR_33, VAR_34, VAR_30, VAR_31, 7, VAR_30, VAR_31);
        VAR_32 = FUNC_13(VAR_32, VAR_35);
        VAR_32 = FUNC_16(VAR_32, 7);
        FUNC_0(VAR_32);

        FUNC_7(VAR_31, VAR_30, VAR_32, VAR_32, VAR_13, VAR_14);
        VAR_10 = FUNC_14((v2i64) VAR_14, 0);
        FUNC_10(VAR_13, VAR_5);
        FUNC_8(VAR_10, VAR_5 + 16);
        VAR_5 += VAR_6;
    }
}
