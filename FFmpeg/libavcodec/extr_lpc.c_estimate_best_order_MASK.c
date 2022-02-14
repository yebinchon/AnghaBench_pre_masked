
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(double *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    VAR_4 = VAR_1;
    for(VAR_3=VAR_2-1; VAR_3>=VAR_1-1; VAR_3--) {
        if(VAR_0[VAR_3] > 0.10) {
            VAR_4 = VAR_3+1;
            break;
        }
    }
    return VAR_4;
}
