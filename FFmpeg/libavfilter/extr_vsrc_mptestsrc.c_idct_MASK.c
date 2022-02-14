
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_1, int VAR_2, int VAR_3[64])
{
    int VAR_4, VAR_5, VAR_6;
    double VAR_7[64];

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
            double VAR_8 = 0.0;

            for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
                VAR_8 += VAR_0[VAR_6*8+VAR_5] * VAR_3[8*VAR_4+VAR_6];

            VAR_7[8*VAR_4+VAR_5] = VAR_8;
        }
    }

    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
            double VAR_9 = 0.0;

            for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
                VAR_9 += VAR_0[VAR_6*8+VAR_4]*VAR_7[8*VAR_6+VAR_5];

            VAR_1[VAR_2*VAR_4 + VAR_5] = FUNC_0(FUNC_1(VAR_9));
        }
    }
}
