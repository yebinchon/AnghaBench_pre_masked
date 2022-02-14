
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int const*,int ,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(
        int16_t* VAR_2,
        const int16_t* VAR_3,
        const int16_t* VAR_4,
        int VAR_5,
        int VAR_6,
        int VAR_7)
{
    int VAR_8;
    int16_t VAR_9[VAR_0];

    FUNC_0(VAR_9, VAR_4, VAR_1[VAR_5], VAR_7);

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        VAR_2[VAR_8] = VAR_3[VAR_8];
        VAR_2[VAR_8] -= (VAR_6 * VAR_4[VAR_8] + 0x2000) >> 14;
        VAR_2[VAR_8] += (VAR_6 * VAR_9[VAR_8] + 0x2000) >> 14;
    }
}
