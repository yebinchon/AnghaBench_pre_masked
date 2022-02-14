
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int v8i16 ;
typedef int v4i32 ;
typedef int v16u8 ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int,int,int *,int) ;
 int FUNC_8 (int ,int ,int,int *,int) ;
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
    uint64_t VAR_15, VAR_16, VAR_17, VAR_18;
    v16u8 VAR_19, VAR_20;
    v16i8 VAR_21 = { 0 };
    v16i8 VAR_22 = { 0 }, VAR_23 = { 0 };
    v8i16 VAR_24, VAR_25, VAR_26, VAR_27;
    v8i16 VAR_28, VAR_29, VAR_30, VAR_31;
    v4i32 VAR_32, VAR_33, VAR_34;

    VAR_13 = (VAR_9 + VAR_10) << VAR_11;
    VAR_7 = VAR_7 & 0x0000FFFF;
    VAR_14 = VAR_7 | (VAR_8 << 16);

    VAR_33 = FUNC_9(VAR_14);
    VAR_32 = FUNC_9(VAR_13);
    VAR_34 = FUNC_9(VAR_11 + 1);

    for (VAR_12 = (VAR_6 >> 2); VAR_12--;) {
        FUNC_3(VAR_0, VAR_1, VAR_15, VAR_16, VAR_17, VAR_18);
        VAR_0 += (4 * VAR_1);
        FUNC_2(VAR_15, VAR_16, VAR_22);
        FUNC_2(VAR_17, VAR_18, VAR_23);
        FUNC_4(VAR_2, VAR_3, VAR_24, VAR_25, VAR_26, VAR_27);
        VAR_2 += (4 * VAR_3);
        FUNC_1(VAR_21, VAR_22, VAR_28, VAR_29);
        FUNC_1(VAR_21, VAR_23, VAR_30, VAR_31);
        FUNC_6(VAR_28, VAR_29, VAR_30, VAR_31, 6);
        FUNC_0(VAR_28, VAR_29, VAR_30, VAR_31,
                                    VAR_24, VAR_25, VAR_26, VAR_27,
                                    VAR_33, VAR_34, VAR_32,
                                    VAR_28, VAR_29, VAR_30, VAR_31);
        FUNC_5(VAR_29, VAR_28, VAR_31, VAR_30, VAR_19, VAR_20);
        FUNC_8(VAR_19, 0, 2, VAR_4, VAR_5);
        FUNC_7(VAR_19, 2, 6, VAR_4 + 4, VAR_5);
        FUNC_8(VAR_20, 0, 2, VAR_4 + 2 * VAR_5, VAR_5);
        FUNC_7(VAR_20, 2, 6, VAR_4 + 2 * VAR_5 + 4, VAR_5);
        VAR_4 += (4 * VAR_5);
    }
}
