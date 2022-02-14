
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef int int64_t ;
struct TYPE_3__ {int* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;

int64_t FUNC_0(AVInteger VAR_1){
    int VAR_2;
    int64_t VAR_3=(int8_t)VAR_1.v[VAR_0-1];

    for(VAR_2= VAR_0-2; VAR_2>=0; VAR_2--){
        VAR_3 = (VAR_3<<16) + VAR_1.v[VAR_2];
    }
    return VAR_3;
}
