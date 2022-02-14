
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;

AVInteger FUNC_0(AVInteger VAR_1, AVInteger VAR_2){
    int VAR_3, VAR_4=0;

    for(VAR_3=0; VAR_3<VAR_0; VAR_3++){
        VAR_4= (VAR_4>>16) + VAR_1.v[VAR_3] - VAR_2.v[VAR_3];
        VAR_1.v[VAR_3]= VAR_4;
    }
    return VAR_1;
}
