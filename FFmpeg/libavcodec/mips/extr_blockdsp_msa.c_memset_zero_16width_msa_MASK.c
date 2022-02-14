
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ v16u8 ;
typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__,int *) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int32_t VAR_1,
                                    int32_t VAR_2)
{
    int8_t VAR_3;
    v16u8 VAR_4 = { 0 };

    for (VAR_3 = (VAR_2 / 2); VAR_3--;) {
        FUNC_0(VAR_4, VAR_0);
        VAR_0 += VAR_1;
        FUNC_0(VAR_4, VAR_0);
        VAR_0 += VAR_1;
    }
}
