
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(const int16_t *VAR_0,
                         uint16_t *VAR_1, int VAR_2,
                         int VAR_3)
{
    int VAR_4;
    int VAR_5 = 5;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        int VAR_6 = VAR_0[VAR_4] + (1 << (VAR_5 - 1));
        FUNC_0(&VAR_1[VAR_4], VAR_6);
    }
}
