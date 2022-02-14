
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v2i64 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (scalar_t__,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_14(uint8_t *VAR_0, int32_t VAR_1,
                                 uint8_t *VAR_2, int32_t VAR_3,
                                 const int8_t *VAR_4)
{
    uint32_t VAR_5;
    uint64_t VAR_6, VAR_7, VAR_8;
    v16i8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24, VAR_25;

    VAR_0 -= VAR_1;


    VAR_23 = FUNC_4(VAR_4);
    FUNC_8(VAR_23, 0, 1, VAR_24, VAR_25);

    FUNC_3(VAR_0, VAR_1, VAR_9, VAR_10, VAR_11);
    VAR_0 += (3 * VAR_1);

    FUNC_11(VAR_9, VAR_10, VAR_11);
    FUNC_1(VAR_10, VAR_9, VAR_11, VAR_10, VAR_15, VAR_17);

    for (VAR_5 = 2; VAR_5--;) {
        FUNC_3(VAR_0, VAR_1, VAR_12, VAR_13, VAR_14);
        VAR_0 += (3 * VAR_1);

        FUNC_11(VAR_12, VAR_13, VAR_14);
        FUNC_2(VAR_12, VAR_11, VAR_13, VAR_12, VAR_14, VAR_13, VAR_16, VAR_18, VAR_19);
        VAR_20 = FUNC_0(VAR_15, VAR_16, VAR_24, VAR_25);
        VAR_21 = FUNC_0(VAR_17, VAR_18, VAR_24, VAR_25);
        VAR_22 = FUNC_0(VAR_16, VAR_19, VAR_24, VAR_25);
        FUNC_9(VAR_20, VAR_21, 6);
        VAR_22 = FUNC_13(VAR_22, 6);
        FUNC_6(VAR_20, VAR_21, VAR_22, 7);
        FUNC_5(VAR_21, VAR_20, VAR_22, VAR_22, VAR_20, VAR_22);
        FUNC_10(VAR_20, VAR_22);

        VAR_6 = FUNC_12((v2i64) VAR_20, 0);
        VAR_7 = FUNC_12((v2i64) VAR_20, 1);
        VAR_8 = FUNC_12((v2i64) VAR_22, 0);
        FUNC_7(VAR_6, VAR_2);
        VAR_2 += VAR_3;
        FUNC_7(VAR_7, VAR_2);
        VAR_2 += VAR_3;
        FUNC_7(VAR_8, VAR_2);
        VAR_2 += VAR_3;

        VAR_11 = VAR_14;
        VAR_15 = VAR_18;
        VAR_17 = VAR_19;
    }
}
