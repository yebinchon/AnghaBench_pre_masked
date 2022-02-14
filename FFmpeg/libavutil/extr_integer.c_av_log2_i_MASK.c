
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1(AVInteger VAR_1){
    int VAR_2;

    for(VAR_2=VAR_0-1; VAR_2>=0; VAR_2--){
        if(VAR_1.v[VAR_2])
            return FUNC_0(VAR_1.v[VAR_2]) + 16*VAR_2;
    }
    return -1;
}
