
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int int16_t ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(int32_t *VAR_0, int16_t VAR_1)
{
    unsigned int VAR_2;
    int VAR_3;
    int VAR_4;

    VAR_2 = 1;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
        VAR_2 |= FUNC_0(VAR_0[VAR_4]);

    for (VAR_3 = 0; VAR_2 <= 0x4000; ++VAR_3)
        VAR_2 *= 2;
    return VAR_3;
}
