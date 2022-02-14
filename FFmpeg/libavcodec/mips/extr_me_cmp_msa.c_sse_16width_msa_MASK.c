
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ v4i32 ;
typedef int v16u8 ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint32_t FUNC_3(uint8_t *VAR_0, int32_t VAR_1,
                                uint8_t *VAR_2, int32_t VAR_3,
                                int32_t VAR_4)
{
    int32_t VAR_5;
    uint32_t VAR_6;
    v16u8 VAR_7, VAR_8;
    v4i32 VAR_9 = { 0 };

    for (VAR_5 = (VAR_4 >> 2); VAR_5--;) {
        VAR_7 = FUNC_2(VAR_0);
        VAR_0 += VAR_1;
        VAR_8 = FUNC_2(VAR_2);
        VAR_2 += VAR_3;
        FUNC_0(VAR_7, VAR_8, VAR_9);

        VAR_7 = FUNC_2(VAR_0);
        VAR_0 += VAR_1;
        VAR_8 = FUNC_2(VAR_2);
        VAR_2 += VAR_3;
        FUNC_0(VAR_7, VAR_8, VAR_9);

        VAR_7 = FUNC_2(VAR_0);
        VAR_0 += VAR_1;
        VAR_8 = FUNC_2(VAR_2);
        VAR_2 += VAR_3;
        FUNC_0(VAR_7, VAR_8, VAR_9);

        VAR_7 = FUNC_2(VAR_0);
        VAR_0 += VAR_1;
        VAR_8 = FUNC_2(VAR_2);
        VAR_2 += VAR_3;
        FUNC_0(VAR_7, VAR_8, VAR_9);
    }

    VAR_6 = FUNC_1(VAR_9);

    return VAR_6;
}
