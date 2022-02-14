
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_1__ ;


typedef int v8i16 ;
struct TYPE_28__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,int,int,int) ;
 int FUNC_3 (int *,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_4 (int,int,int,int,int) ;
 int FUNC_5 (int,int,int ,int,int ,int,int *,int) ;
 int FUNC_6 (int,int,int,int,int *,int) ;

__attribute__((used)) static void FUNC_7(uint8_t *VAR_0, int32_t VAR_1,
                              int16_t *VAR_2, int32_t VAR_3,
                              int32_t VAR_4)
{
    uint32_t VAR_5;
    v16i8 VAR_6 = { 0 };
    v16i8 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    v8i16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

    for (VAR_5 = (VAR_4 >> 3); VAR_5--;) {
        FUNC_3(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
        VAR_0 += (8 * VAR_1);

        FUNC_2(VAR_6, VAR_7, VAR_6, VAR_8, VAR_6, VAR_9, VAR_6, VAR_10,
                   VAR_17, VAR_18, VAR_19, VAR_20);
        FUNC_4(VAR_17, VAR_18, VAR_19, VAR_20, 6);
        FUNC_0(VAR_8, VAR_7, VAR_10, VAR_9, VAR_7, VAR_8);
        FUNC_1(VAR_6, VAR_7, VAR_6, VAR_8, VAR_15, VAR_16);
        VAR_15 <<= 6;
        VAR_16 <<= 6;
        FUNC_6(VAR_17, VAR_18, VAR_19, VAR_20, VAR_2, VAR_3);
        FUNC_5(VAR_15, VAR_16, 0, 1, 0, 1, VAR_2 + 8, VAR_3);
        VAR_2 += (4 * VAR_3);

        FUNC_2(VAR_6, VAR_11, VAR_6, VAR_12, VAR_6, VAR_13, VAR_6, VAR_14,
                   VAR_17, VAR_18, VAR_19, VAR_20);
        FUNC_4(VAR_17, VAR_18, VAR_19, VAR_20, 6);
        FUNC_0(VAR_12, VAR_11, VAR_14, VAR_13, VAR_7, VAR_8);
        FUNC_1(VAR_6, VAR_7, VAR_6, VAR_8, VAR_15, VAR_16);
        VAR_15 <<= 6;
        VAR_16 <<= 6;
        FUNC_6(VAR_17, VAR_18, VAR_19, VAR_20, VAR_2, VAR_3);
        FUNC_5(VAR_15, VAR_16, 0, 1, 0, 1, VAR_2 + 8, VAR_3);
        VAR_2 += (4 * VAR_3);
    }
}
