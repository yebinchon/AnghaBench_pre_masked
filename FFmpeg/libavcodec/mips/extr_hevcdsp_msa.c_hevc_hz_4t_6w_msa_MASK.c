
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int ,int,int,int) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_1,
                              int32_t VAR_2,
                              int16_t *VAR_3,
                              int32_t VAR_4,
                              const int8_t *VAR_5,
                              int32_t VAR_6)
{
    uint32_t VAR_7;
    uint64_t VAR_8, VAR_9, VAR_10, VAR_11;
    uint32_t VAR_12, VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    v16i8 VAR_22, VAR_23, VAR_24, VAR_25;
    v16i8 VAR_26 = FUNC_1(VAR_0);
    v16i8 VAR_27;
    v16i8 VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31;

    VAR_1 -= 1;

    VAR_30 = FUNC_3(VAR_5);
    FUNC_5(VAR_30, 0, 1, VAR_16, VAR_17);

    VAR_27 = VAR_26 + 2;

    VAR_31 = FUNC_11(128);
    VAR_31 <<= 6;

    for (VAR_7 = 2; VAR_7--;) {
        FUNC_2(VAR_1, VAR_2, VAR_22, VAR_23, VAR_24, VAR_25);
        VAR_1 += (4 * VAR_2);

        FUNC_8(VAR_22, VAR_23, VAR_24, VAR_25);

        FUNC_7(VAR_22, VAR_22, VAR_22, VAR_22, VAR_26, VAR_27, VAR_28, VAR_29);
        VAR_18 = VAR_31;
        FUNC_0(VAR_28, VAR_29, VAR_16, VAR_17, VAR_18, VAR_18);
        FUNC_7(VAR_23, VAR_23, VAR_23, VAR_23, VAR_26, VAR_27, VAR_28, VAR_29);
        VAR_19 = VAR_31;
        FUNC_0(VAR_28, VAR_29, VAR_16, VAR_17, VAR_19, VAR_19);
        FUNC_7(VAR_24, VAR_24, VAR_24, VAR_24, VAR_26, VAR_27, VAR_28, VAR_29);
        VAR_20 = VAR_31;
        FUNC_0(VAR_28, VAR_29, VAR_16, VAR_17, VAR_20, VAR_20);
        FUNC_7(VAR_25, VAR_25, VAR_25, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29);
        VAR_21 = VAR_31;
        FUNC_0(VAR_28, VAR_29, VAR_16, VAR_17, VAR_21, VAR_21);

        VAR_8 = FUNC_9((v2i64) VAR_18, 0);
        VAR_9 = FUNC_9((v2i64) VAR_19, 0);
        VAR_10 = FUNC_9((v2i64) VAR_20, 0);
        VAR_11 = FUNC_9((v2i64) VAR_21, 0);

        VAR_12 = FUNC_10((v4i32) VAR_18, 2);
        VAR_13 = FUNC_10((v4i32) VAR_19, 2);
        VAR_14 = FUNC_10((v4i32) VAR_20, 2);
        VAR_15 = FUNC_10((v4i32) VAR_21, 2);

        FUNC_4(VAR_8, VAR_3);
        FUNC_6(VAR_12, VAR_3 + 4);
        VAR_3 += VAR_4;
        FUNC_4(VAR_9, VAR_3);
        FUNC_6(VAR_13, VAR_3 + 4);
        VAR_3 += VAR_4;
        FUNC_4(VAR_10, VAR_3);
        FUNC_6(VAR_14, VAR_3 + 4);
        VAR_3 += VAR_4;
        FUNC_4(VAR_11, VAR_3);
        FUNC_6(VAR_15, VAR_3 + 4);
        VAR_3 += VAR_4;
    }
}
