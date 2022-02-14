
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v4i32 ;
typedef int v2i64 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *,int,int ,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int,int ,int,int,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
                              int32_t VAR_1,
                              int16_t *VAR_2,
                              int32_t VAR_3,
                              const int8_t *VAR_4,
                              int32_t VAR_5)
{
    int32_t VAR_6;
    uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
    uint64_t VAR_11, VAR_12, VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25, VAR_26, VAR_27;
    v8i16 VAR_28, VAR_29;
    v8i16 VAR_30, VAR_31;

    VAR_0 -= VAR_1;
    VAR_31 = FUNC_12(128);
    VAR_31 <<= 6;

    VAR_30 = FUNC_4(VAR_4);
    FUNC_6(VAR_30, 0, 1, VAR_28, VAR_29);

    FUNC_3(VAR_0, VAR_1, VAR_15, VAR_16, VAR_17);
    VAR_0 += (3 * VAR_1);
    FUNC_9(VAR_15, VAR_16, VAR_17);
    FUNC_1(VAR_16, VAR_15, VAR_17, VAR_16, VAR_20, VAR_22);

    for (VAR_6 = (VAR_5 >> 2); VAR_6--;) {
        FUNC_2(VAR_0, VAR_1, VAR_18, VAR_19);
        VAR_0 += (2 * VAR_1);
        FUNC_8(VAR_18, VAR_19);
        FUNC_1(VAR_18, VAR_17, VAR_19, VAR_18, VAR_21, VAR_23);

        VAR_24 = VAR_31;
        FUNC_0(VAR_20, VAR_21, VAR_28, VAR_29, VAR_24, VAR_24);
        VAR_25 = VAR_31;
        FUNC_0(VAR_22, VAR_23, VAR_28, VAR_29, VAR_25, VAR_25);

        FUNC_2(VAR_0, VAR_1, VAR_16, VAR_17);
        VAR_0 += (2 * VAR_1);
        FUNC_8(VAR_16, VAR_17);
        FUNC_1(VAR_16, VAR_19, VAR_17, VAR_16, VAR_20, VAR_22);

        VAR_26 = VAR_31;
        FUNC_0(VAR_21, VAR_20, VAR_28, VAR_29, VAR_26, VAR_26);
        VAR_27 = VAR_31;
        FUNC_0(VAR_23, VAR_22, VAR_28, VAR_29, VAR_27, VAR_27);

        VAR_11 = FUNC_10((v2i64) VAR_24, 0);
        VAR_12 = FUNC_10((v2i64) VAR_25, 0);
        VAR_13 = FUNC_10((v2i64) VAR_26, 0);
        VAR_14 = FUNC_10((v2i64) VAR_27, 0);

        VAR_7 = FUNC_11((v4i32) VAR_24, 2);
        VAR_8 = FUNC_11((v4i32) VAR_25, 2);
        VAR_9 = FUNC_11((v4i32) VAR_26, 2);
        VAR_10 = FUNC_11((v4i32) VAR_27, 2);

        FUNC_5(VAR_11, VAR_2);
        FUNC_7(VAR_7, VAR_2 + 4);
        VAR_2 += VAR_3;
        FUNC_5(VAR_12, VAR_2);
        FUNC_7(VAR_8, VAR_2 + 4);
        VAR_2 += VAR_3;
        FUNC_5(VAR_13, VAR_2);
        FUNC_7(VAR_9, VAR_2 + 4);
        VAR_2 += VAR_3;
        FUNC_5(VAR_14, VAR_2);
        FUNC_7(VAR_10, VAR_2 + 4);
        VAR_2 += VAR_3;
    }
}
