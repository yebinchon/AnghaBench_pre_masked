
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8i16 ;
typedef int v2i64 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(const int16_t *VAR_0, uint8_t *VAR_1,
                                          int32_t VAR_2)
{
    uint64_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    v8i16 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

    FUNC_1(VAR_0, 8, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);

    VAR_11 += 128;
    VAR_12 += 128;
    VAR_13 += 128;
    VAR_14 += 128;
    VAR_15 += 128;
    VAR_16 += 128;
    VAR_17 += 128;
    VAR_18 += 128;

    FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
    FUNC_2(VAR_11, VAR_11, VAR_12, VAR_12, VAR_13, VAR_13, VAR_14, VAR_14, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_2(VAR_15, VAR_15, VAR_16, VAR_16, VAR_17, VAR_17, VAR_18, VAR_18, VAR_15, VAR_16, VAR_17, VAR_18);

    VAR_3 = FUNC_4((v2i64) VAR_11, 0);
    VAR_4 = FUNC_4((v2i64) VAR_12, 0);
    VAR_5 = FUNC_4((v2i64) VAR_13, 0);
    VAR_6 = FUNC_4((v2i64) VAR_14, 0);
    VAR_7 = FUNC_4((v2i64) VAR_15, 0);
    VAR_8 = FUNC_4((v2i64) VAR_16, 0);
    VAR_9 = FUNC_4((v2i64) VAR_17, 0);
    VAR_10 = FUNC_4((v2i64) VAR_18, 0);
    FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_1, VAR_2);
    VAR_1 += 4 * VAR_2;
    FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_1, VAR_2);
}
