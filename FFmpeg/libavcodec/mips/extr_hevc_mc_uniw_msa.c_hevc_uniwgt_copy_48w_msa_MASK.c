
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_2 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(uint8_t *VAR_0,
                                     int32_t VAR_1,
                                     uint8_t *VAR_2,
                                     int32_t VAR_3,
                                     int32_t VAR_4,
                                     int32_t VAR_5,
                                     int32_t VAR_6,
                                     int32_t VAR_7)
{
    uint32_t VAR_8;
    v16u8 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v16i8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16i8 VAR_21 = { 0 };
    v8i16 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    v8i16 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
    v4i32 VAR_35, VAR_36;

    VAR_5 = VAR_5 & 0x0000FFFF;
    VAR_35 = FUNC_8(VAR_5);
    VAR_28 = FUNC_7(VAR_6);
    VAR_36 = FUNC_8(VAR_7);

    for (VAR_8 = (VAR_4 >> 1); VAR_8--;) {
        FUNC_2(VAR_0, 16, VAR_15, VAR_16, VAR_17);
        VAR_0 += VAR_1;
        FUNC_2(VAR_0, 16, VAR_18, VAR_19, VAR_20);
        VAR_0 += VAR_1;

        FUNC_1(VAR_21, VAR_15, VAR_22, VAR_23);
        FUNC_1(VAR_21, VAR_16, VAR_24, VAR_25);
        FUNC_1(VAR_21, VAR_17, VAR_26, VAR_27);
        FUNC_1(VAR_21, VAR_18, VAR_29, VAR_30);
        FUNC_1(VAR_21, VAR_19, VAR_31, VAR_32);
        FUNC_1(VAR_21, VAR_20, VAR_33, VAR_34);
        FUNC_4(VAR_22, VAR_23, VAR_24, VAR_25, 6);
        FUNC_4(VAR_26, VAR_27, VAR_29, VAR_30, 6);
        FUNC_4(VAR_31, VAR_32, VAR_33, VAR_34, 6);
        FUNC_0(VAR_22, VAR_23, VAR_24, VAR_25, VAR_35,
                                       VAR_28, VAR_36, VAR_22, VAR_23, VAR_24,
                                       VAR_25);
        FUNC_0(VAR_26, VAR_27, VAR_29, VAR_30, VAR_35,
                                       VAR_28, VAR_36, VAR_26, VAR_27, VAR_29,
                                       VAR_30);
        FUNC_0(VAR_31, VAR_32, VAR_33, VAR_34, VAR_35,
                                       VAR_28, VAR_36, VAR_31, VAR_32, VAR_33,
                                       VAR_34);
        FUNC_3(VAR_23, VAR_22, VAR_25, VAR_24, VAR_27, VAR_26, VAR_9, VAR_10, VAR_11);
        FUNC_3(VAR_30, VAR_29, VAR_32, VAR_31, VAR_34, VAR_33, VAR_12, VAR_13, VAR_14);
        FUNC_6(VAR_9, VAR_10, VAR_2, 16);
        FUNC_5(VAR_11, VAR_2 + 32);
        VAR_2 += VAR_3;
        FUNC_6(VAR_12, VAR_13, VAR_2, 16);
        FUNC_5(VAR_14, VAR_2 + 32);
        VAR_2 += VAR_3;
    }
}
