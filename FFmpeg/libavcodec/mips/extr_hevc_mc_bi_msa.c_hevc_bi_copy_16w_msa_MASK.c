
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v16u8 ;
struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_2 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_7(uint8_t *VAR_0,
                                 int32_t VAR_1,
                                 int16_t *VAR_2,
                                 int32_t VAR_3,
                                 uint8_t *VAR_4,
                                 int32_t VAR_5,
                                 int32_t VAR_6)
{
    uint32_t VAR_7;
    v16u8 VAR_8, VAR_9, VAR_10, VAR_11;
    v16i8 VAR_12, VAR_13, VAR_14, VAR_15;
    v8i16 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    v8i16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    v16i8 VAR_32 = { 0 };

    for (VAR_7 = (VAR_6 >> 2); VAR_7--;) {
        FUNC_2(VAR_0, VAR_1, VAR_12, VAR_13, VAR_14, VAR_15);
        VAR_0 += (4 * VAR_1);
        FUNC_3(VAR_2, VAR_3, VAR_16, VAR_17, VAR_18, VAR_19);
        FUNC_3(VAR_2 + 8, VAR_3, VAR_20, VAR_21, VAR_22, VAR_23);
        VAR_2 += (4 * VAR_3);
        FUNC_1(VAR_32, VAR_12, VAR_24, VAR_28);
        FUNC_1(VAR_32, VAR_13, VAR_25, VAR_29);
        FUNC_1(VAR_32, VAR_14, VAR_26, VAR_30);
        FUNC_1(VAR_32, VAR_15, VAR_27, VAR_31);
        FUNC_5(VAR_24, VAR_25, VAR_26, VAR_27, 6);
        FUNC_5(VAR_28, VAR_29, VAR_30, VAR_31, 6);
        FUNC_0(VAR_16, VAR_17, VAR_20, VAR_21, VAR_24, VAR_25, VAR_28,
                                   VAR_29, 7, VAR_24, VAR_25, VAR_28, VAR_29);
        FUNC_0(VAR_18, VAR_19, VAR_22, VAR_23, VAR_26, VAR_27, VAR_30,
                                   VAR_31, 7, VAR_26, VAR_27, VAR_30, VAR_31);
        FUNC_4(VAR_28, VAR_24, VAR_29, VAR_25, VAR_8, VAR_9);
        FUNC_4(VAR_30, VAR_26, VAR_31, VAR_27, VAR_10, VAR_11);
        FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11, VAR_4, VAR_5);
        VAR_4 += (4 * VAR_5);
    }
}
