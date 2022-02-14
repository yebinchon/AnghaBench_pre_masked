
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1, int16_t *VAR_2)
{
    int VAR_3, VAR_4;
    int16_t *VAR_5;

    VAR_5 = VAR_2;
    FUNC_1(VAR_5++, 8, 13, (1 << 12) + (1 << 17));
    for (VAR_3 = 1; VAR_3 < 8; VAR_3++) {
        FUNC_1(VAR_5, 8, 13, 1 << 12);
        VAR_5++;
    }

    VAR_5 = VAR_2;
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        FUNC_1(VAR_5, 1, 20, 0);
        VAR_5 += 8;
    }

    VAR_5 = VAR_2;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
            VAR_0[VAR_3] = FUNC_0(VAR_5[VAR_3]);
        VAR_0 += VAR_1;
        VAR_5 += 8;
    }
}
