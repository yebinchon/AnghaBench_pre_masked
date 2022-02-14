
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v16u8 ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_2 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_8(uint8_t *VAR_0,
                                 int32_t VAR_1,
                                 int16_t *VAR_2,
                                 int32_t VAR_3,
                                 uint8_t *VAR_4,
                                 int32_t VAR_5,
                                 int32_t VAR_6)
{
    uint32_t VAR_7;
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16i8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    v16i8 VAR_20 = { 0 };
    v8i16 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;

    for (VAR_7 = (VAR_6 >> 1); VAR_7--;) {
        FUNC_2(VAR_0, 16, VAR_14, VAR_15, VAR_16);
        VAR_0 += VAR_1;
        FUNC_2(VAR_0, 16, VAR_17, VAR_18, VAR_19);
        VAR_0 += VAR_1;

        FUNC_3(VAR_2, 8, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37);
        VAR_2 += VAR_3;
        FUNC_3(VAR_2, 8, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43);
        VAR_2 += VAR_3;

        FUNC_1(VAR_20, VAR_14, VAR_21, VAR_22);
        FUNC_1(VAR_20, VAR_15, VAR_23, VAR_24);
        FUNC_1(VAR_20, VAR_16, VAR_25, VAR_26);
        FUNC_1(VAR_20, VAR_17, VAR_27, VAR_28);
        FUNC_1(VAR_20, VAR_18, VAR_29, VAR_30);
        FUNC_1(VAR_20, VAR_19, VAR_31, VAR_44);

        FUNC_5(VAR_21, VAR_22, VAR_23, VAR_24, 6);
        FUNC_5(VAR_25, VAR_26, VAR_27, VAR_28, 6);
        FUNC_5(VAR_29, VAR_30, VAR_31, VAR_44, 6);

        FUNC_0(VAR_32, VAR_33, VAR_34, VAR_35, VAR_21, VAR_22, VAR_23, VAR_24,
                                   7, VAR_21, VAR_22, VAR_23, VAR_24);
        FUNC_0(VAR_36, VAR_37, VAR_38, VAR_39, VAR_25, VAR_26, VAR_27, VAR_28,
                                   7, VAR_25, VAR_26, VAR_27, VAR_28);
        FUNC_0(VAR_40, VAR_41, VAR_42, VAR_43, VAR_29, VAR_30, VAR_31,
                                   VAR_44, 7, VAR_29, VAR_30, VAR_31, VAR_44);
        FUNC_4(VAR_22, VAR_21, VAR_24, VAR_23, VAR_26, VAR_25, VAR_8, VAR_9, VAR_10);
        FUNC_4(VAR_28, VAR_27, VAR_30, VAR_29, VAR_44, VAR_31, VAR_11, VAR_12, VAR_13);
        FUNC_7(VAR_8, VAR_9, VAR_4, 16);
        FUNC_6(VAR_10, VAR_4 + 32);
        VAR_4 += VAR_5;
        FUNC_7(VAR_11, VAR_12, VAR_4, 16);
        FUNC_6(VAR_13, VAR_4 + 32);
        VAR_4 += VAR_5;
    }
}
