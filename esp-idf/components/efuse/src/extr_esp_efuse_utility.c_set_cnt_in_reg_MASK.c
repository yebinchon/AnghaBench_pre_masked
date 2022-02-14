
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(int VAR_0, int VAR_1, uint32_t VAR_2, size_t* VAR_3)
{
    FUNC_0((VAR_0 + VAR_1) <= 32);
    uint32_t VAR_4 = 0;
    for (int VAR_5 = VAR_0; VAR_5 < VAR_0 + VAR_1; ++VAR_5) {
        if ((VAR_2 & (1 << VAR_5)) == 0) {
            VAR_4 |= (1 << VAR_5);
            if (--(*VAR_3) == 0) {
                break;
            }
        }
    }
    return VAR_4;
}
