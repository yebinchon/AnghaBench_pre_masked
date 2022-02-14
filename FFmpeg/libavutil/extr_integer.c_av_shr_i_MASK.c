
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;

AVInteger FUNC_0(AVInteger VAR_1, int VAR_2){
    AVInteger VAR_3;
    int VAR_4;

    for(VAR_4=0; VAR_4<VAR_0; VAR_4++){
        unsigned int VAR_5= VAR_4 + (VAR_2>>4);
        unsigned int VAR_6=0;
        if(VAR_5+1<VAR_0) VAR_6 = VAR_1.v[VAR_5+1]<<16;
        if(VAR_5 <VAR_0) VAR_6+= VAR_1.v[VAR_5 ];
        VAR_3.v[VAR_4]= VAR_6 >> (VAR_2&15);
    }
    return VAR_3;
}
