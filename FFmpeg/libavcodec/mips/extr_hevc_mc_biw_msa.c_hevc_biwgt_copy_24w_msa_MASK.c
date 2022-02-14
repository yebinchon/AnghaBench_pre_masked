
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_3 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_8 (int ,int ,int ,int ,int *,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(uint8_t *VAR_0,
                                    int32_t VAR_1,
                                    int16_t *VAR_2,
                                    int32_t VAR_3,
                                    uint8_t *VAR_4,
                                    int32_t VAR_5,
                                    int32_t VAR_6,
                                    int32_t VAR_7,
                                    int32_t VAR_8,
                                    int32_t VAR_9,
                                    int32_t VAR_10,
                                    int32_t VAR_11)
{
    uint32_t VAR_12;
    int32_t VAR_13, VAR_14;
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    v16i8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29 = { 0 };
    v8i16 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
    v8i16 VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
    v4i32 VAR_54, VAR_55, VAR_56;

    VAR_13 = (VAR_9 + VAR_10) << VAR_11;
    VAR_7 = VAR_7 & 0x0000FFFF;
    VAR_14 = VAR_7 | (VAR_8 << 16);

    VAR_54 = FUNC_9(VAR_13);
    VAR_55 = FUNC_9(VAR_14);
    VAR_56 = FUNC_9(VAR_11 + 1);

    for (VAR_12 = 8; VAR_12--;) {
        FUNC_3(VAR_0, VAR_1, VAR_21, VAR_22, VAR_25, VAR_26);
        FUNC_3(VAR_0 + 16, VAR_1, VAR_23, VAR_24, VAR_27, VAR_28);
        VAR_0 += (4 * VAR_1);
        FUNC_4(VAR_2, VAR_3, VAR_41, VAR_42, VAR_43, VAR_44);
        FUNC_4(VAR_2 + 8, VAR_3, VAR_45, VAR_46, VAR_47, VAR_48);
        FUNC_4(VAR_2 + 16, VAR_3, VAR_49, VAR_50, VAR_51, VAR_52);
        VAR_2 += (4 * VAR_3);

        FUNC_1(VAR_29, VAR_21, VAR_30, VAR_31);
        FUNC_1(VAR_29, VAR_22, VAR_32, VAR_33);
        FUNC_2(VAR_29, VAR_23, VAR_29, VAR_24, VAR_34, VAR_35);
        FUNC_1(VAR_29, VAR_25, VAR_36, VAR_37);
        FUNC_1(VAR_29, VAR_26, VAR_38, VAR_39);
        FUNC_2(VAR_29, VAR_27, VAR_29, VAR_28, VAR_40, VAR_53);
        FUNC_6(VAR_30, VAR_31, VAR_32, VAR_33, 6);
        FUNC_6(VAR_34, VAR_35, VAR_36, VAR_37, 6);
        FUNC_6(VAR_38, VAR_39, VAR_40, VAR_53, 6);
        FUNC_0(VAR_30, VAR_31, VAR_32, VAR_33, VAR_41, VAR_45, VAR_42, VAR_46,
                                    VAR_55, VAR_56, VAR_54, VAR_30, VAR_31,
                                    VAR_32, VAR_33);
        FUNC_0(VAR_34, VAR_35, VAR_36, VAR_37, VAR_49, VAR_50, VAR_43, VAR_47,
                                    VAR_55, VAR_56, VAR_54, VAR_34, VAR_35,
                                    VAR_36, VAR_37);
        FUNC_0(VAR_38, VAR_39, VAR_40, VAR_53, VAR_44, VAR_48, VAR_51,
                                    VAR_52, VAR_55, VAR_56, VAR_54,
                                    VAR_38, VAR_39, VAR_40, VAR_53);
        FUNC_5(VAR_31, VAR_30, VAR_33, VAR_32, VAR_35, VAR_34, VAR_15, VAR_16, VAR_17);
        FUNC_5(VAR_37, VAR_36, VAR_39, VAR_38, VAR_53, VAR_40, VAR_18, VAR_19, VAR_20);
        FUNC_8(VAR_15, VAR_16, VAR_18, VAR_19, VAR_4, VAR_5);
        FUNC_7(VAR_17, VAR_20, 0, 1, 0, 1, VAR_4 + 16, VAR_5);
        VAR_4 += (4 * VAR_5);
    }
}
