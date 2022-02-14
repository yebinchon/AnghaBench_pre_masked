
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWTELEM ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(DWTELEM *VAR_1, DWTELEM *VAR_2, DWTELEM *VAR_3,
                                    int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_2[VAR_5] = (16 * 4 * VAR_2[VAR_5] - 4 * (VAR_1[VAR_5] + VAR_3[VAR_5]) + VAR_0 * 5 + (5 << 27)) /
                (5 * 16) - (1 << 23);
}
