
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(const int16_t *VAR_0, int VAR_1,
                         const int16_t **VAR_2, uint16_t *VAR_3, int VAR_4,
                         int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = 17;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        int VAR_9 = 1 << (VAR_8 - 1);

        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
            VAR_9 += VAR_2[VAR_7][VAR_6] * VAR_0[VAR_7];

        FUNC_0(&VAR_3[VAR_6], VAR_9);
    }
}
