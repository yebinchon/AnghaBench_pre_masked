
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, const uint8_t *VAR_2,
                                    int16_t VAR_3[2][VAR_0],
                                    int VAR_4, int VAR_5)
{
    int VAR_6;


    if (VAR_1 < VAR_4) {
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
            FUNC_1(&VAR_3[VAR_6][VAR_0 - 40], &VAR_3[VAR_6][VAR_1],
                            36 * sizeof(int16_t));
        VAR_1 = VAR_0 - 40;
    }


    for (; VAR_4 >= 8; VAR_4 -= 8, VAR_2 += 16 * VAR_5) {
        VAR_1 -= 8;
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            int16_t *VAR_7 = &VAR_3[VAR_6][VAR_1];
            VAR_7[0] = FUNC_0(VAR_2 + 14*VAR_5 + 2*VAR_6);
            VAR_7[1] = FUNC_0(VAR_2 + 6*VAR_5 + 2*VAR_6);
            VAR_7[2] = FUNC_0(VAR_2 + 12*VAR_5 + 2*VAR_6);
            VAR_7[3] = FUNC_0(VAR_2 + 8*VAR_5 + 2*VAR_6);
            VAR_7[4] = FUNC_0(VAR_2 + 0*VAR_5 + 2*VAR_6);
            VAR_7[5] = FUNC_0(VAR_2 + 4*VAR_5 + 2*VAR_6);
            VAR_7[6] = FUNC_0(VAR_2 + 2*VAR_5 + 2*VAR_6);
            VAR_7[7] = FUNC_0(VAR_2 + 10*VAR_5 + 2*VAR_6);
        }
    }

    return VAR_1;
}
