
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int*) ;

__attribute__((used)) static uint8_t* FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1)
{
    for (; VAR_0 < VAR_1 - 3; VAR_0 += 4) {
        uint32_t VAR_2 = FUNC_0(VAR_0);

        if (VAR_2 & (~(VAR_2+0x01010101)) & 0x80808080) {
            if (VAR_0[0] == 0xff) {
                return VAR_0;
            } else if (VAR_0[1] == 0xff) {
                return VAR_0+1;
            } else if (VAR_0[2] == 0xff) {
                return VAR_0+2;
            } else if (VAR_0[3] == 0xff) {
                return VAR_0+3;
            }
        }
    }

    for (; VAR_0 < VAR_1; ++VAR_0) {
        if (*VAR_0 == 0xff) return VAR_0;
    }

    return VAR_1;
}
