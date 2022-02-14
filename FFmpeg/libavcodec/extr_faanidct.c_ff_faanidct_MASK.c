
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int FLOAT ;


 int FUNC_0 () ;
 int FUNC_1 (int*,int*,int *,int ,int,int,int) ;
 int* VAR_0 ;

void FUNC_2(int16_t VAR_1[64]){
    FLOAT VAR_2[64];
    int VAR_3;

    FUNC_0();

    for(VAR_3=0; VAR_3<64; VAR_3++)
        VAR_2[VAR_3] = VAR_1[VAR_3] * VAR_0[VAR_3];

    FUNC_1(VAR_1, VAR_2, ((void*)0), 0, 1, 8, 0);
    FUNC_1(VAR_1, VAR_2, ((void*)0), 0, 8, 1, 1);
}
