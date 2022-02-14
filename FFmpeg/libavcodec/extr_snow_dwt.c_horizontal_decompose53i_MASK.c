
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWTELEM ;


 int FUNC_0 (int *,int *,int *,int,int,int,int,int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_1(DWTELEM *VAR_0, DWTELEM *VAR_1, int VAR_2)
{
    const int VAR_3 = VAR_2 >> 1;
    int VAR_4;
    const int VAR_5 = (VAR_2 + 1) >> 1;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_1[VAR_4] = VAR_0[2 * VAR_4];
        VAR_1[VAR_4 + VAR_5] = VAR_0[2 * VAR_4 + 1];
    }
    if (VAR_2 & 1)
        VAR_1[VAR_4] = VAR_0[2 * VAR_4];
    FUNC_0(VAR_0 + VAR_5, VAR_1 + VAR_5, VAR_1, 1, 1, 1, VAR_2, -1, 0, 1, 1, 0);
    FUNC_0(VAR_0, VAR_1, VAR_0 + VAR_5, 1, 1, 1, VAR_2, 1, 2, 2, 0, 0);
}
