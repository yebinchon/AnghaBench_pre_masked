
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
struct TYPE_22__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int ,int ,int ,int *,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(uint8_t *VAR_0,
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
    v16u8 VAR_15, VAR_16, VAR_17, VAR_18;
    v16i8 VAR_19 = { 0 };
    v16i8 VAR_20, VAR_21, VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v8i16 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    v4i32 VAR_40, VAR_41, VAR_42;

    VAR_13 = (VAR_9 + VAR_10) << VAR_11;
    VAR_7 = VAR_7 & 0x0000FFFF;
    VAR_14 = VAR_7 | (VAR_8 << 16);

    VAR_40 = FUNC_8(VAR_13);
    VAR_41 = FUNC_8(VAR_14);
    VAR_42 = FUNC_8(VAR_11 + 1);

    for (VAR_12 = (VAR_6 >> 2); VAR_12--;) {
        FUNC_3(VAR_0, VAR_1, VAR_20, VAR_21, VAR_22, VAR_23);
        VAR_0 += (4 * VAR_1);
        FUNC_4(VAR_2, VAR_3, VAR_24, VAR_25, VAR_26, VAR_27);
        FUNC_4(VAR_2 + 8, VAR_3, VAR_28, VAR_29, VAR_30, VAR_31);
        VAR_2 += (4 * VAR_3);
        FUNC_2(VAR_19, VAR_20, VAR_19, VAR_21, VAR_19, VAR_22, VAR_19, VAR_23, VAR_32, VAR_33,
                   VAR_34, VAR_35);
        FUNC_1(VAR_19, VAR_20, VAR_19, VAR_21, VAR_19, VAR_22, VAR_19, VAR_23, VAR_36, VAR_37,
                   VAR_38, VAR_39);
        FUNC_6(VAR_32, VAR_33, VAR_34, VAR_35, 6);
        FUNC_6(VAR_36, VAR_37, VAR_38, VAR_39, 6);
        FUNC_0(VAR_32, VAR_33, VAR_36, VAR_37, VAR_24, VAR_25, VAR_28, VAR_29,
                                    VAR_41, VAR_42, VAR_40, VAR_32, VAR_33,
                                    VAR_36, VAR_37);
        FUNC_0(VAR_34, VAR_35, VAR_38, VAR_39, VAR_26, VAR_27, VAR_30, VAR_31,
                                    VAR_41, VAR_42, VAR_40, VAR_34, VAR_35,
                                    VAR_38, VAR_39);
        FUNC_5(VAR_36, VAR_32, VAR_37, VAR_33, VAR_15, VAR_16);
        FUNC_5(VAR_38, VAR_34, VAR_39, VAR_35, VAR_17, VAR_18);
        FUNC_7(VAR_15, VAR_16, VAR_17, VAR_18, VAR_4, VAR_5);
        VAR_4 += (4 * VAR_5);
    }
}
