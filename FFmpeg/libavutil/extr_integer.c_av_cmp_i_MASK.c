
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;

int FUNC_0(AVInteger VAR_1, AVInteger VAR_2){
    int VAR_3;
    int VAR_4= (int16_t)VAR_1.v[VAR_0-1] - (int16_t)VAR_2.v[VAR_0-1];
    if(VAR_4) return (VAR_4>>16)|1;

    for(VAR_3=VAR_0-2; VAR_3>=0; VAR_3--){
        int VAR_5= VAR_1.v[VAR_3] - VAR_2.v[VAR_3];
        if(VAR_5) return (VAR_5>>16)|1;
    }
    return 0;
}
