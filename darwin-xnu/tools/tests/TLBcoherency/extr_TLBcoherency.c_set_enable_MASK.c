
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int*,int,int *,size_t*,int *,int ) ;

void FUNC_2(int VAR_3)
{
 int VAR_4[6];
 size_t VAR_5;

        VAR_4[0] = VAR_0;
        VAR_4[1] = VAR_1;
        VAR_4[2] = VAR_2;
        VAR_4[3] = VAR_3;
        VAR_4[4] = 0;
        VAR_4[5] = 0;

        if (FUNC_1(VAR_4, 4, ((void*)0), &VAR_5, ((void*)0), 0) < 0) {
                FUNC_0("trace facility failure, KERN_KDENABLE\n");
 }
}
