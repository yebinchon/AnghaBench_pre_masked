
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int spi_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int const*,int *,int) ;

void FUNC_3(spi_t * VAR_0, const uint8_t * VAR_1, uint8_t * VAR_2, uint32_t VAR_3)
{
    if(!VAR_0) {
        return;
    }
    FUNC_0();
    while(VAR_3) {
        if(VAR_3 > 64) {
            FUNC_2(VAR_0, VAR_1, VAR_2, 64);
            VAR_3 -= 64;
            if(VAR_1) {
                VAR_1 += 64;
            }
            if(VAR_2) {
                VAR_2 += 64;
            }
        } else {
            FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
            VAR_3 = 0;
        }
    }
    FUNC_1();
}
