
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int **,int **,int) ;

__attribute__((used)) static void FUNC_1(uint8_t **VAR_1, int VAR_2,
                         int VAR_3, int *VAR_4)
{
    int VAR_5;
    uint8_t *VAR_6[VAR_0];
    FUNC_0(VAR_6, VAR_1, VAR_3 * sizeof(uint8_t*));
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        VAR_1[VAR_5] = VAR_6[VAR_4[VAR_5]];
    }
}
