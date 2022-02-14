
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int out ;
struct TYPE_7__ {int* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

AVInteger FUNC_2(AVInteger VAR_1, AVInteger VAR_2){
    AVInteger VAR_3;
    int VAR_4, VAR_5;
    int VAR_6= (FUNC_0(VAR_1)+16) >> 4;
    int VAR_7= (FUNC_0(VAR_2)+16) >> 4;

    FUNC_1(&VAR_3, 0, sizeof(VAR_3));

    for(VAR_4=0; VAR_4<VAR_6; VAR_4++){
        unsigned int VAR_8=0;

        if(VAR_1.v[VAR_4])
            for(VAR_5=VAR_4; VAR_5<VAR_0 && VAR_5-VAR_4<=VAR_7; VAR_5++){
                VAR_8= (VAR_8>>16) + VAR_3.v[VAR_5] + VAR_1.v[VAR_4]*(unsigned)VAR_2.v[VAR_5-VAR_4];
                VAR_3.v[VAR_5]= VAR_8;
            }
    }

    return VAR_3;
}
