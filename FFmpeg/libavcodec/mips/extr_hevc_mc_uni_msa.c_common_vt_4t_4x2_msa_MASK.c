
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v8i16 ;
typedef int v2i64 ;
typedef int v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int,int *,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int ,int) ;

__attribute__((used)) static void FUNC_12(uint8_t *VAR_0, int32_t VAR_1,
                                 uint8_t *VAR_2, int32_t VAR_3,
                                 const int8_t *VAR_4)
{
    v16i8 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17;
    v16u8 VAR_18;
    v8i16 VAR_19, VAR_20;

    VAR_0 -= VAR_1;

    VAR_19 = FUNC_4(VAR_4);
    FUNC_6(VAR_19, 0, 1, VAR_16, VAR_17);

    FUNC_3(VAR_0, VAR_1, VAR_5, VAR_6, VAR_7);
    VAR_0 += (3 * VAR_1);

    FUNC_1(VAR_6, VAR_5, VAR_7, VAR_6, VAR_10, VAR_12);
    VAR_14 = (v16i8) FUNC_8((v2i64) VAR_12, (v2i64) VAR_10);
    VAR_14 = (v16i8) FUNC_11((v16u8) VAR_14, 128);
    FUNC_2(VAR_0, VAR_1, VAR_8, VAR_9);
    FUNC_1(VAR_8, VAR_7, VAR_9, VAR_8, VAR_11, VAR_13);
    VAR_15 = (v16i8) FUNC_8((v2i64) VAR_13, (v2i64) VAR_11);
    VAR_15 = (v16i8) FUNC_11((v16u8) VAR_15, 128);
    VAR_20 = FUNC_0(VAR_14, VAR_15, VAR_16, VAR_17);
    VAR_20 = FUNC_10(VAR_20, 6);
    VAR_20 = FUNC_9(VAR_20, 7);
    VAR_18 = FUNC_5(VAR_20, VAR_20);
    FUNC_7(VAR_18, 0, 1, VAR_2, VAR_3);
}
