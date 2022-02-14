
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(int16_t *VAR_0)
{
    uint8_t VAR_1, VAR_2;
    int16_t *VAR_3 = VAR_0;
    int16_t VAR_4[8 * 32 + 31];
    int16_t *VAR_5 = VAR_4 + 31;
    uint8_t VAR_6;
    uint8_t VAR_7;


    VAR_5 = (int16_t *)(((uintptr_t) VAR_5) & ~(uintptr_t) 63);


    VAR_6 = 7;
    VAR_7 = 32;
    for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {

        FUNC_0((VAR_0 + VAR_2 * 8), VAR_7, VAR_6);
    }


    VAR_6 = 12;
    VAR_7 = 8;
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {

        VAR_3 = (VAR_0 + 32 * 8 * VAR_1);

        FUNC_1(VAR_3, VAR_5);
        FUNC_0(VAR_5, VAR_7, VAR_6);
        FUNC_2(VAR_5, VAR_3);
    }
}
