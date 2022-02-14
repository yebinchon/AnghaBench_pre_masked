
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(int * VAR_0, int VAR_1)
{
    int *VAR_2 = VAR_0 + 127;
    int VAR_3;
    int VAR_4;

    FUNC_0(VAR_1 < 128U);


    FUNC_1(VAR_0, 0, 256 * sizeof(int));
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2[-VAR_3] = -VAR_3;
        VAR_2[VAR_3] = VAR_3;
    }
    for (VAR_3 = VAR_4 = VAR_1; VAR_3 < 128 && VAR_4; VAR_3++, VAR_4--) {
        VAR_2[ VAR_3] = VAR_4;
        VAR_2[-VAR_3] = -VAR_4;
    }
    if (VAR_4)
        VAR_2[128] = VAR_4;
    VAR_2[129] = VAR_2[130] = VAR_1 * 0x02020202;
}
