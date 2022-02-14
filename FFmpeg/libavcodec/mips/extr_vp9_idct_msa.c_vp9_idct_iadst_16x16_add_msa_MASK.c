
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_0, uint8_t *VAR_1,
                                         int32_t VAR_2, int32_t VAR_3)
{
    int32_t VAR_4;
    int16_t VAR_5[16 * 16];
    int16_t *VAR_6 = &VAR_5[0];


    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {

        FUNC_1((VAR_0 + (VAR_4 << 3)), (VAR_6 + (VAR_4 << 7)));
    }


    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {

        FUNC_0((VAR_6 + (VAR_4 << 3)),
                                          (VAR_1 + (VAR_4 << 3)), VAR_2);
    }
}
