
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int member_0; } ;
typedef TYPE_1__ v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_1 (int ,int ,TYPE_1__) ;
 int FUNC_2 (int ,int ,int ,int ,TYPE_1__) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__,int ,int,int *,int) ;
 int FUNC_6 (TYPE_1__,int ,int,int,int,int *,int) ;
 int FUNC_7 (TYPE_1__,TYPE_1__,int ,int,int,int,int ,int,int,int,int *,int) ;
 TYPE_1__ FUNC_8 (TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_9(uint8_t *VAR_0, uint8_t *VAR_1, int32_t VAR_2,
                           int32_t VAR_3)
{
    uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
    v16u8 VAR_8 = { 0 }, VAR_9 = { 0 }, VAR_10 = { 0 }, VAR_11 = { 0 };

    if (8 == VAR_3) {
        FUNC_4(VAR_0, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
        VAR_0 += 4 * VAR_2;
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_4(VAR_0, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
        FUNC_4(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10);
        FUNC_4(VAR_1 + 4 * VAR_2, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_11);
        FUNC_0(VAR_8, VAR_10, VAR_9, VAR_11, VAR_10, VAR_11);
        FUNC_7(VAR_10, VAR_11, 0, 1, 2, 3, 0, 1, 2, 3, VAR_1, VAR_2);
    } else if (4 == VAR_3) {
        FUNC_4(VAR_0, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_4(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10);
        VAR_10 = FUNC_8(VAR_8, VAR_10);
        FUNC_6(VAR_10, 0, 1, 2, 3, VAR_1, VAR_2);
    } else if (2 == VAR_3) {
        FUNC_3(VAR_0, VAR_2, VAR_4, VAR_5);
        FUNC_1(VAR_4, VAR_5, VAR_8);
        FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
        FUNC_1(VAR_4, VAR_5, VAR_10);
        VAR_10 = FUNC_8(VAR_8, VAR_10);
        FUNC_5(VAR_10, 0, 1, VAR_1, VAR_2);
    }
}
