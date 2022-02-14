
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int *VAR_0, int VAR_1)
{
    if(VAR_1 <= 0) return -1;
    int VAR_2, VAR_3 = 0;
    int VAR_4 = VAR_0[0];
    for(VAR_2 = 1; VAR_2 < VAR_1; ++VAR_2){
        if(VAR_0[VAR_2] > VAR_4){
            VAR_4 = VAR_0[VAR_2];
            VAR_3 = VAR_2;
        }
    }
    return VAR_3;
}
