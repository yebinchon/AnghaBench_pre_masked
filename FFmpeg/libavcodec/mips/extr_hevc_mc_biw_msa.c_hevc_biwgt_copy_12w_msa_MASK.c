
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
struct TYPE_24__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int,int,int,int,int ,int ,int ,int,int) ;
 int FUNC_1 (int,int,int,int,int,int,int,int,int ,int ,int ,int,int,int,int) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int) ;
 int FUNC_4 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int,int) ;
 int FUNC_6 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_7 (int *,int,int,int,int,int) ;
 int FUNC_8 (int,int,int,int,int,int,int ,int ,int ) ;
 int FUNC_9 (int,int,int,int,int) ;
 int FUNC_10 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_11 (int ,int ,int,int,int,int *,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(uint8_t *VAR_0,
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
    v16i8 VAR_15 = { 0 };
    v16u8 VAR_16, VAR_17, VAR_18;
    v16i8 VAR_19, VAR_20, VAR_21, VAR_22;
    v8i16 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
    v8i16 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
    v4i32 VAR_37, VAR_38, VAR_39;

    VAR_13 = (VAR_9 + VAR_10) << VAR_11;
    VAR_7 = VAR_7 & 0x0000FFFF;
    VAR_14 = VAR_7 | (VAR_8 << 16);

    VAR_37 = FUNC_12(VAR_13);
    VAR_38 = FUNC_12(VAR_14);
    VAR_39 = FUNC_12(VAR_11 + 1);

    for (VAR_12 = (16 >> 2); VAR_12--;) {
        FUNC_6(VAR_0, VAR_1, VAR_19, VAR_20, VAR_21, VAR_22);
        VAR_0 += (4 * VAR_1);
        FUNC_7(VAR_2, VAR_3, VAR_23, VAR_24, VAR_25, VAR_26);
        FUNC_7(VAR_2 + 8, VAR_3, VAR_27, VAR_28, VAR_29, VAR_30);
        VAR_2 += (4 * VAR_3);

        FUNC_5(VAR_28, VAR_27, VAR_30, VAR_29, VAR_27, VAR_28);
        FUNC_4(VAR_15, VAR_19, VAR_15, VAR_20, VAR_15, VAR_21, VAR_15, VAR_22,
                   VAR_31, VAR_32, VAR_33, VAR_34);

        FUNC_9(VAR_31, VAR_32, VAR_33, VAR_34, 6);
        FUNC_2(VAR_20, VAR_19, VAR_22, VAR_21, VAR_19, VAR_20);
        FUNC_3(VAR_15, VAR_19, VAR_15, VAR_20, VAR_35, VAR_36);

        VAR_35 <<= 6;
        VAR_36 <<= 6;
        FUNC_1(VAR_31, VAR_32, VAR_33, VAR_34, VAR_23, VAR_24, VAR_25, VAR_26,
                                    VAR_38, VAR_39, VAR_37, VAR_31, VAR_32,
                                    VAR_33, VAR_34);
        FUNC_0(VAR_35, VAR_36, VAR_27, VAR_28, VAR_38, VAR_39,
                                    VAR_37, VAR_35, VAR_36);
        FUNC_8(VAR_32, VAR_31, VAR_34, VAR_33, VAR_36, VAR_35, VAR_16, VAR_17, VAR_18);
        FUNC_10(VAR_16, VAR_17, 0, 1, 0, 1, VAR_4, VAR_5);
        FUNC_11(VAR_18, 0, 1, 2, 3, VAR_4 + 8, VAR_5);
        VAR_4 += (4 * VAR_5);
    }
}
