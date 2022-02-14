
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int **,int*,int,int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0[3], int VAR_1[3], int VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < 16*8; VAR_4 += 16) {
        for (VAR_3 = 0; VAR_3 < 16*8; VAR_3 += 16) {
            uint8_t *VAR_6[3];
            VAR_6[0] = VAR_0[0] + VAR_3*2 + VAR_4*2*VAR_1[0];
            VAR_6[1] = VAR_0[1] + VAR_3 + VAR_4* VAR_1[1];
            VAR_6[2] = VAR_0[2] + VAR_3 + VAR_4* VAR_1[2];

            FUNC_0(VAR_6, VAR_1, VAR_5, (64+VAR_2)*4, 128*8);
            VAR_5++;
        }
    }
}
