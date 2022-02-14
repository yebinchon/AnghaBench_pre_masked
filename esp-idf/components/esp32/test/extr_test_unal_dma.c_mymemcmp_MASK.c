
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int) ;

int FUNC_1(char *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_0[VAR_3] != VAR_1[VAR_3]) {
            FUNC_0("Not equal at byte %d. a=%x, b=%x\n", VAR_3, (int)VAR_0[VAR_3], (int)VAR_1[VAR_3]);
            return 1;
        }
    }
    return 0;
}
