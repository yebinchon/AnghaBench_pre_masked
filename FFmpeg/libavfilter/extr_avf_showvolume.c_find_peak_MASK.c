
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;
 float FUNC_1 (float,int ) ;

__attribute__((used)) static void FUNC_2(float *VAR_0, int VAR_1, float *VAR_2, float VAR_3)
{
    int VAR_4;

    *VAR_2 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
        *VAR_2 = FUNC_1(*VAR_2, FUNC_0(VAR_0[VAR_4]));
}
