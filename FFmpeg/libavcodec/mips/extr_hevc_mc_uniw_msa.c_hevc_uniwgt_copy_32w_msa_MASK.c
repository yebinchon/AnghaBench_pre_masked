
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_2 (int *,int,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(uint8_t *VAR_0,
                                     int32_t VAR_1,
                                     uint8_t *VAR_2,
                                     int32_t VAR_3,
                                     int32_t VAR_4,
                                     int32_t VAR_5,
                                     int32_t VAR_6,
                                     int32_t VAR_7)
{
    uint32_t VAR_8;
    v16u8 VAR_9, VAR_10, VAR_11, VAR_12;
    v16i8 VAR_13, VAR_14, VAR_15, VAR_16;
    v16i8 VAR_17 = { 0 };
    v8i16 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    v4i32 VAR_27, VAR_28;

    VAR_5 = VAR_5 & 0x0000FFFF;
    VAR_27 = FUNC_7(VAR_5);
    VAR_26 = FUNC_6(VAR_6);
    VAR_28 = FUNC_7(VAR_7);

    for (VAR_8 = (VAR_4 >> 1); VAR_8--;) {
        FUNC_2(VAR_0, VAR_1, VAR_13, VAR_14);
        FUNC_2(VAR_0 + 16, VAR_1, VAR_15, VAR_16);
        VAR_0 += (2 * VAR_1);

        FUNC_1(VAR_17, VAR_13, VAR_18, VAR_19);
        FUNC_1(VAR_17, VAR_14, VAR_20, VAR_21);
        FUNC_1(VAR_17, VAR_15, VAR_22, VAR_23);
        FUNC_1(VAR_17, VAR_16, VAR_24, VAR_25);
        FUNC_4(VAR_18, VAR_19, VAR_20, VAR_21, 6);
        FUNC_4(VAR_22, VAR_23, VAR_24, VAR_25, 6);
        FUNC_0(VAR_18, VAR_19, VAR_20, VAR_21, VAR_27,
                                       VAR_26, VAR_28, VAR_18, VAR_19, VAR_20,
                                       VAR_21);
        FUNC_0(VAR_22, VAR_23, VAR_24, VAR_25, VAR_27,
                                       VAR_26, VAR_28, VAR_22, VAR_23, VAR_24,
                                       VAR_25);
        FUNC_3(VAR_19, VAR_18, VAR_21, VAR_20, VAR_9, VAR_10);
        FUNC_3(VAR_23, VAR_22, VAR_25, VAR_24, VAR_11, VAR_12);
        FUNC_5(VAR_9, VAR_10, VAR_2, VAR_3);
        FUNC_5(VAR_11, VAR_12, VAR_2 + 16, VAR_3);
        VAR_2 += (2 * VAR_3);
    }
}
