
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *,int) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static inline void FUNC_4(GetBitContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5[2];

    switch (FUNC_1(VAR_0, 2)) {
    case 1:
        VAR_5[0] = FUNC_1(VAR_0, 8);
        for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
            FUNC_3(VAR_1 + VAR_4 * VAR_2, VAR_5[0], 4);
        break;
    case 2:
        VAR_5[0] = FUNC_1(VAR_0, 8);
        VAR_5[1] = FUNC_1(VAR_0, 8);
        for (VAR_4 = 2; VAR_4 >= 0; VAR_4 -= 2) {
            for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
                VAR_1[VAR_4 * VAR_2 + VAR_3] = VAR_5[FUNC_2(VAR_0)];
            for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
                VAR_1[(VAR_4 + 1) * VAR_2 + VAR_3] = VAR_5[FUNC_2(VAR_0)];
        }
        break;
    case 3:
        for (VAR_4 = 0; VAR_4 < 4; VAR_4 += 2)
            for (VAR_3 = 0; VAR_3 < 4; VAR_3 += 2)
                FUNC_0(VAR_0, VAR_1 + VAR_4 * VAR_2 + VAR_3, VAR_2);
    }
}
