
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int v16u8 ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ v16i8 ;
typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (TYPE_1__,int ,TYPE_1__,int ,TYPE_1__,int ,TYPE_1__,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int const*,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_0, int32_t VAR_1,
                                          int16_t *VAR_2, int32_t VAR_3,
                                          int32_t VAR_4)
{
    uint8_t *VAR_5;
    int32_t VAR_6;
    v16u8 VAR_7, VAR_8, VAR_9, VAR_10;
    v16i8 VAR_11 = { 0 };

    VAR_5 = (uint8_t *) VAR_2;

    for (VAR_6 = (VAR_4 >> 2); VAR_6--;) {
        FUNC_1(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_0 += (4 * VAR_1);

        FUNC_0(VAR_11, VAR_7, VAR_11, VAR_8, VAR_11, VAR_9, VAR_11, VAR_10,
                   VAR_7, VAR_8, VAR_9, VAR_10);

        FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_5, (VAR_3 * 2));
        VAR_5 += (4 * 2 * VAR_3);
    }
}
