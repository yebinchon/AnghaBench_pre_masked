
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int ,int) ;
 int FUNC_1 (float*,int,int) ;
 float FUNC_2 (float*,int) ;

int FUNC_3(float *VAR_0, int VAR_1)
{
    float VAR_2 = FUNC_2(VAR_0, VAR_1);
    FUNC_1(VAR_0, VAR_1, 1./VAR_2);
    float VAR_3 = FUNC_0(0, 1);
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        VAR_3 = VAR_3 - VAR_0[VAR_4];
        if (VAR_3 <= 0) return VAR_4;
    }
    return VAR_1-1;
}
