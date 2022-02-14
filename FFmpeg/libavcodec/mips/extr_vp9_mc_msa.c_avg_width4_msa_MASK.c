
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int member_0; } ;
typedef TYPE_1__ v16u8 ;
typedef int const uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_1__) ;
 int FUNC_2 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__,int ,int,int,int,int const*,int) ;
 int FUNC_4 (TYPE_1__,TYPE_1__,int ,int,int,int,int ,int,int,int,int const*,int) ;
 TYPE_1__ FUNC_5 (TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_6(const uint8_t *VAR_0, int32_t VAR_1,
                           uint8_t *VAR_2, int32_t VAR_3,
                           int32_t VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
    v16u8 VAR_9 = { 0 }, VAR_10 = { 0 }, VAR_11 = { 0 }, VAR_12 = { 0 };

    if (8 == VAR_4) {
        FUNC_2(VAR_0, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8);
        VAR_0 += 4 * VAR_1;
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_2(VAR_0, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
        FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
        FUNC_2(VAR_2 + 4 * VAR_3, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_12);
        FUNC_0(VAR_9, VAR_11, VAR_10, VAR_12, VAR_11, VAR_12);
        FUNC_4(VAR_11, VAR_12, 0, 1, 2, 3, 0, 1, 2, 3, VAR_2, VAR_3);
    } else if (4 == VAR_4) {
        FUNC_2(VAR_0, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
        VAR_11 = FUNC_5(VAR_9, VAR_11);
        FUNC_3(VAR_11, 0, 1, 2, 3, VAR_2, VAR_3);
    }
}
