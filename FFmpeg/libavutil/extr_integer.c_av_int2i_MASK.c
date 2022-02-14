
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;

AVInteger FUNC_0(int64_t VAR_1){
    AVInteger VAR_2;
    int VAR_3;

    for(VAR_3=0; VAR_3<VAR_0; VAR_3++){
        VAR_2.v[VAR_3]= VAR_1;
        VAR_1>>=16;
    }
    return VAR_2;
}
