
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 double FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < 16*16; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 16*16; VAR_3++) {
            double VAR_5 = FUNC_0(VAR_3-8*16, VAR_4-8*16);
            double VAR_6 = VAR_5/20 - (int)(VAR_5/20);
            if (VAR_6 < VAR_2/30.0) {
                VAR_0[VAR_3 + VAR_4*VAR_1] = 255;
                VAR_0[VAR_3 + VAR_4*VAR_1+256] = 0;
            } else {
                VAR_0[VAR_3 + VAR_4*VAR_1] = VAR_3;
                VAR_0[VAR_3 + VAR_4*VAR_1+256] = VAR_3;
            }
        }
    }
}
