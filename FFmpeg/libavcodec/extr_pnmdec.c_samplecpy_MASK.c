
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_3 <= 255) {
        FUNC_1(VAR_0, VAR_1, VAR_2);
    } else {
        int VAR_4;
        for (VAR_4=0; VAR_4<VAR_2/2; VAR_4++) {
            ((uint16_t *)VAR_0)[VAR_4] = FUNC_0(VAR_1+2*VAR_4);
        }
    }
}
