
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (float*,int) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(float *VAR_1, int VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3){
        int VAR_4 = FUNC_1(VAR_1+VAR_3*VAR_0, VAR_0);
        FUNC_2("%c", FUNC_0(VAR_4));
    }
    FUNC_2("\n");
}
