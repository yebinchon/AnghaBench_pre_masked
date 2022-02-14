
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
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int ,int,int,int,int *,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_16(const uint8_t *VAR_1,
                                                   int32_t VAR_2,
                                                   uint8_t *VAR_3,
                                                   int32_t VAR_4,
                                                   const int8_t *VAR_5,
                                                   const int8_t *VAR_6)
{
    uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
    v16i8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    v16u8 VAR_17, VAR_18, VAR_19, VAR_20;
    v16u8 VAR_21, VAR_22;
    v8u16 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

    VAR_16 = FUNC_4(&VAR_0[16]);


    VAR_30 = FUNC_6(VAR_5);
    VAR_17 = (v16u8) FUNC_15((v8i16) VAR_30, 0);

    VAR_30 = FUNC_6(VAR_6);
    VAR_18 = (v16u8) FUNC_15((v8i16) VAR_30, 0);

    FUNC_5(VAR_1, VAR_2, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

    VAR_23 = FUNC_1(VAR_11, VAR_12, VAR_16, VAR_17, 7);
    VAR_25 = FUNC_1(VAR_13, VAR_14, VAR_16, VAR_17, 7);
    VAR_27 = FUNC_1(VAR_15, VAR_15, VAR_16, VAR_17, 7);
    VAR_24 = (v8u16) FUNC_14((v16i8) VAR_25, (v16i8) VAR_23, 8);
    VAR_26 = (v8u16) FUNC_13((v2i64) VAR_27, (v2i64) VAR_25);
    FUNC_2(VAR_23, VAR_24, VAR_25, VAR_26, VAR_19, VAR_20);

    FUNC_7(VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_21);

    FUNC_0(VAR_19, VAR_20, VAR_18, VAR_18, VAR_28, VAR_29);
    FUNC_9(VAR_28, VAR_29, 7);
    FUNC_8(VAR_28, VAR_29, 7);

    VAR_22 = (v16u8) FUNC_12((v16i8) VAR_29, (v16i8) VAR_28);
    VAR_22 = FUNC_11(VAR_22, VAR_21);

    FUNC_10(VAR_22, 0, 1, 2, 3, VAR_3, VAR_4);
}
