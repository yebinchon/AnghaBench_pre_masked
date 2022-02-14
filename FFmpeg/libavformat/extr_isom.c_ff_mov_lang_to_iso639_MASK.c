
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int **) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*,int ,int) ;
 int ** VAR_0 ;

int FUNC_3(unsigned VAR_1, char VAR_2[4])
{
    int VAR_3;
    FUNC_2(VAR_2, 0, 4);


    if (VAR_1 >= 0x400 && VAR_1 != 0x7fff) {
        for (VAR_3 = 2; VAR_3 >= 0; VAR_3--) {
            VAR_2[VAR_3] = 0x60 + (VAR_1 & 0x1f);
            VAR_1 >>= 5;
        }
        return 1;
    }

    if (VAR_1 >= FUNC_0(VAR_0))
        return 0;
    if (!VAR_0[VAR_1][0])
        return 0;
    FUNC_1(VAR_2, VAR_0[VAR_1], 4);
    return 1;
}
