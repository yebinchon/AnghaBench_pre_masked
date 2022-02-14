
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef int v2i64 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int ,int,int *,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_13(const uint8_t *VAR_1, int32_t VAR_2,
                               uint8_t *VAR_3, int32_t VAR_4,
                               const int8_t *VAR_5, const int8_t *VAR_6)
{
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    v16u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    v8u16 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

    VAR_12 = FUNC_3(&VAR_0[16]);


    VAR_24 = FUNC_5(VAR_5);
    VAR_14 = (v16u8) FUNC_12((v8i16) VAR_24, 0);

    VAR_24 = FUNC_5(VAR_6);
    VAR_13 = (v16u8) FUNC_12((v8i16) VAR_24, 0);

    FUNC_4(VAR_1, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
    VAR_19 = FUNC_1(VAR_7, VAR_8, VAR_12, VAR_14, 7);
    VAR_21 = FUNC_1(VAR_9, VAR_10, VAR_12, VAR_14, 7);
    VAR_23 = FUNC_1(VAR_11, VAR_11, VAR_12, VAR_14, 7);
    VAR_20 = (v8u16) FUNC_11((v16i8) VAR_21, (v16i8) VAR_19, 8);
    VAR_22 = (v8u16) FUNC_10((v2i64) VAR_23, (v2i64) VAR_21);

    FUNC_2(VAR_19, VAR_20, VAR_21, VAR_22, VAR_15, VAR_16);
    FUNC_0(VAR_15, VAR_16, VAR_13, VAR_13, VAR_25, VAR_26);
    FUNC_8(VAR_25, VAR_26, 7);
    FUNC_7(VAR_25, VAR_26, 7);
    FUNC_6(VAR_25, VAR_25, VAR_26, VAR_26, VAR_17, VAR_18);
    FUNC_9(VAR_17, 0, 1, VAR_3, VAR_4);
    FUNC_9(VAR_18, 0, 1, VAR_3 + 2 * VAR_4, VAR_4);
}
