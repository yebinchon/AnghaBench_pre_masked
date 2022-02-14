
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWTELEM ;



__attribute__((used)) static void FUNC_0(DWTELEM *VAR_0, DWTELEM *VAR_1, DWTELEM *VAR_2,
                                    int VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        VAR_1[VAR_4] -= (VAR_0[VAR_4] + VAR_2[VAR_4]) >> 1;
}
