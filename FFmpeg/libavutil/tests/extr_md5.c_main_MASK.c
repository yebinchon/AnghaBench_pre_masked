
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int volatile*,int) ;
 int FUNC_1 (int*) ;

int FUNC_2(void)
{
    uint8_t VAR_0[16];
    int VAR_1;
    volatile uint8_t VAR_2[1000];


    for (VAR_1 = 0; VAR_1 < 1000; VAR_1++)
        VAR_2[VAR_1] = VAR_1 * VAR_1;
    FUNC_0(VAR_0, VAR_2, 1000);
    FUNC_1(VAR_0);
    FUNC_0(VAR_0, VAR_2, 63);
    FUNC_1(VAR_0);
    FUNC_0(VAR_0, VAR_2, 64);
    FUNC_1(VAR_0);
    FUNC_0(VAR_0, VAR_2, 65);
    FUNC_1(VAR_0);
    for (VAR_1 = 0; VAR_1 < 1000; VAR_1++)
        VAR_2[VAR_1] = VAR_1 % 127;
    FUNC_0(VAR_0, VAR_2, 999);
    FUNC_1(VAR_0);

    return 0;
}
