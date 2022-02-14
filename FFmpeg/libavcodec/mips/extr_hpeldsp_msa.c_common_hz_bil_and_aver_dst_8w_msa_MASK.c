
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int*,int) ;
 int FUNC_1 (int const*,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_0,
                                              int32_t VAR_1,
                                              uint8_t *VAR_2, int32_t VAR_3,
                                              uint8_t VAR_4)
{
    uint8_t VAR_5;
    v16i8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    v16i8 VAR_14 = { 0 };

    for (VAR_5 = (VAR_4 >> 2); VAR_5--;) {
        FUNC_1(VAR_0, VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
        VAR_0 += (4 * VAR_1);

        FUNC_2(VAR_14, VAR_6, VAR_14, VAR_7, VAR_14, VAR_8, VAR_14, VAR_9, 1,
                   VAR_10, VAR_11, VAR_12, VAR_13);

        FUNC_0(VAR_6, VAR_10, VAR_7, VAR_11, VAR_8, VAR_12,
                          VAR_9, VAR_13, VAR_2, VAR_3);
        VAR_2 += (4 * VAR_3);
    }
}
