
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;

uint64_t FUNC_1(AVIOContext *VAR_0){
    uint64_t VAR_1 = 0;
    int VAR_2;

    do{
        VAR_2 = FUNC_0(VAR_0);
        VAR_1= (VAR_1<<7) + (VAR_2&127);
    }while(VAR_2&128);
    return VAR_1;
}
