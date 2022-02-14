
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef int v8i16 ;
struct TYPE_22__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_5(uint8_t *VAR_0, int32_t VAR_1,
                              int16_t *VAR_2, int32_t VAR_3,
                              int32_t VAR_4)
{
    uint32_t VAR_5;
    v16i8 VAR_6 = { 0 };
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    for (VAR_5 = (VAR_4 >> 1); VAR_5--;) {
        FUNC_2(VAR_0, 16, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_0 += VAR_1;
        FUNC_2(VAR_0, 16, VAR_11, VAR_12, VAR_13, VAR_14);
        VAR_0 += VAR_1;

        FUNC_1(VAR_6, VAR_7, VAR_6, VAR_8, VAR_6, VAR_9, VAR_6, VAR_10,
                   VAR_15, VAR_16, VAR_17, VAR_18);
        FUNC_0(VAR_6, VAR_7, VAR_6, VAR_8, VAR_6, VAR_9, VAR_6, VAR_10,
                   VAR_19, VAR_20, VAR_21, VAR_22);
        FUNC_3(VAR_15, VAR_16, VAR_17, VAR_18, 6);
        FUNC_3(VAR_19, VAR_20, VAR_21, VAR_22, 6);
        FUNC_4(VAR_15, VAR_19, VAR_16, VAR_20, VAR_2, 8);
        FUNC_4(VAR_17, VAR_21, VAR_18, VAR_22, (VAR_2 + 32), 8);
        VAR_2 += VAR_3;

        FUNC_1(VAR_6, VAR_11, VAR_6, VAR_12, VAR_6, VAR_13, VAR_6, VAR_14,
                   VAR_15, VAR_16, VAR_17, VAR_18);
        FUNC_0(VAR_6, VAR_11, VAR_6, VAR_12, VAR_6, VAR_13, VAR_6, VAR_14,
                   VAR_19, VAR_20, VAR_21, VAR_22);
        FUNC_3(VAR_15, VAR_16, VAR_17, VAR_18, 6);
        FUNC_3(VAR_19, VAR_20, VAR_21, VAR_22, 6);
        FUNC_4(VAR_15, VAR_19, VAR_16, VAR_20, VAR_2, 8);
        FUNC_4(VAR_17, VAR_21, VAR_18, VAR_22, (VAR_2 + 32), 8);
        VAR_2 += VAR_3;
    }
}
