
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v8u16 ;
typedef int v8i16 ;
typedef scalar_t__ v16u8 ;
typedef int v16i8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int ,int ,int ,int,int ,int,int *,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_11(const uint8_t *VAR_1, int32_t VAR_2,
                               uint8_t *VAR_3, int32_t VAR_4,
                               const int8_t *VAR_5, const int8_t *VAR_6)
{
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v8u16 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v8i16 VAR_27;

    VAR_12 = FUNC_1(&VAR_0[0]);


    VAR_27 = FUNC_3(VAR_5);
    VAR_15 = (v16u8) FUNC_10(VAR_27, 0);

    VAR_27 = FUNC_3(VAR_6);
    VAR_16 = (v16u8) FUNC_10(VAR_27, 0);

    FUNC_2(VAR_1, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

    VAR_21 = FUNC_0(VAR_7, VAR_7, VAR_12, VAR_15, 7);
    VAR_22 = FUNC_0(VAR_8, VAR_8, VAR_12, VAR_15, 7);
    VAR_17 = (v16u8) FUNC_9((v16i8) VAR_22, (v16i8) VAR_21);
    VAR_23 = FUNC_8(VAR_17, VAR_16);

    VAR_21 = FUNC_0(VAR_9, VAR_9, VAR_12, VAR_15, 7);
    VAR_18 = (v16u8) FUNC_9((v16i8) VAR_21, (v16i8) VAR_22);
    VAR_24 = FUNC_8(VAR_18, VAR_16);

    VAR_22 = FUNC_0(VAR_10, VAR_10, VAR_12, VAR_15, 7);
    VAR_19 = (v16u8) FUNC_9((v16i8) VAR_22, (v16i8) VAR_21);
    VAR_25 = FUNC_8(VAR_19, VAR_16);

    VAR_21 = FUNC_0(VAR_11, VAR_11, VAR_12, VAR_15, 7);
    VAR_20 = (v16u8) FUNC_9((v16i8) VAR_21, (v16i8) VAR_22);
    VAR_26 = FUNC_8(VAR_20, VAR_16);

    FUNC_6(VAR_23, VAR_24, VAR_25, VAR_26, 7);
    FUNC_5(VAR_23, VAR_24, VAR_25, VAR_26, 7);
    FUNC_4(VAR_24, VAR_23, VAR_26, VAR_25, VAR_13, VAR_14);
    FUNC_7(VAR_13, VAR_14, 0, 1, 0, 1, VAR_3, VAR_4);
}
