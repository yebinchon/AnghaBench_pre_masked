
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1[8], int VAR_2[9])
{
    int VAR_3;
    for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
        VAR_0 -= FUNC_0(VAR_1[VAR_3], VAR_2[VAR_3]);
        VAR_2[VAR_3 + 1] = VAR_2[VAR_3] + FUNC_0(VAR_1[VAR_3], VAR_0);
    }
    VAR_2[0] = VAR_0;
    return VAR_0;
}
