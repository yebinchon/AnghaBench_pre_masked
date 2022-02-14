
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int AVLFG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(int16_t VAR_0[64], int VAR_1, int VAR_2, AVLFG *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    FUNC_2(VAR_0, 0, 64 * sizeof(*VAR_0));

    switch (VAR_1) {
    case 0:
        for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
            VAR_0[VAR_5] = (FUNC_0(VAR_3) % (2*VAR_4)) -VAR_4;
        if (VAR_2) {
            FUNC_1(VAR_0);
            for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
                VAR_0[VAR_5] >>= 3;
        }
        break;
    case 1:
        VAR_6 = FUNC_0(VAR_3) % 10 + 1;
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            int VAR_7 = FUNC_0(VAR_3) % 64;
            VAR_0[VAR_7] = FUNC_0(VAR_3) % (2*VAR_4) -VAR_4;
        }
        break;
    case 2:
        VAR_0[ 0] = FUNC_0(VAR_3) % (16*VAR_4) - (8*VAR_4);
        VAR_0[63] = (VAR_0[0] & 1) ^ 1;
        break;
    }
}
