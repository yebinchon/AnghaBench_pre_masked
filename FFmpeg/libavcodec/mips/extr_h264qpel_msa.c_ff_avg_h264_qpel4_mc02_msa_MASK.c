
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int v8i16 ;
struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,TYPE_1__) ;
 int FUNC_4 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int const*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int,int ,int ,int ,int ) ;
 TYPE_1__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (TYPE_1__,int ,int,int,int,int *,int) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 TYPE_1__ FUNC_12 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(uint8_t *VAR_0, const uint8_t *VAR_1,
                                ptrdiff_t VAR_2)
{
    uint32_t VAR_3, VAR_4, VAR_5, VAR_6;
    int16_t VAR_7 = 0xfb01;
    int16_t VAR_8 = 0x1414;
    int16_t VAR_9 = 0x1fb;
    v16u8 VAR_10, VAR_11 = { 0 };
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16i8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    v16i8 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    v8i16 VAR_36, VAR_37;

    VAR_33 = (v16i8) FUNC_13(VAR_7);
    VAR_34 = (v16i8) FUNC_13(VAR_8);
    VAR_35 = (v16i8) FUNC_13(VAR_9);

    VAR_1 -= (VAR_2 * 2);
    FUNC_5(VAR_1, VAR_2, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
    VAR_1 += (5 * VAR_2);

    FUNC_1(VAR_13, VAR_12, VAR_14, VAR_13, VAR_15, VAR_14, VAR_16, VAR_15, VAR_21, VAR_25,
               VAR_22, VAR_26);
    FUNC_2(VAR_25, VAR_21, VAR_26, VAR_22, VAR_29, VAR_30);
    FUNC_11(VAR_29, VAR_30);
    FUNC_4(VAR_1, VAR_2, VAR_17, VAR_18, VAR_19, VAR_20);
    FUNC_1(VAR_17, VAR_16, VAR_18, VAR_17, VAR_19, VAR_18, VAR_20, VAR_19, VAR_23, VAR_27,
               VAR_24, VAR_28);
    FUNC_2(VAR_27, VAR_23, VAR_28, VAR_24, VAR_31, VAR_32);
    FUNC_11(VAR_31, VAR_32);
    VAR_36 = FUNC_0(VAR_29, VAR_30, VAR_31, VAR_33, VAR_34, VAR_35);
    VAR_37 = FUNC_0(VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35);
    FUNC_9(VAR_36, VAR_37, 5);
    FUNC_8(VAR_36, VAR_37, 7);
    FUNC_6(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_11);
    VAR_10 = FUNC_7(VAR_36, VAR_37);
    VAR_11 = FUNC_12(VAR_10, VAR_11);
    FUNC_10(VAR_11, 0, 1, 2, 3, VAR_0, VAR_2);
}
