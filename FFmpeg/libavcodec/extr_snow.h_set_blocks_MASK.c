
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* color; int mx; int my; int ref; int type; int level; } ;
struct TYPE_4__ {int b_width; int block_max_depth; TYPE_2__* block; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ BlockNode ;



__attribute__((used)) static inline void FUNC_0(SnowContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10){
    const int VAR_11= VAR_0->b_width << VAR_0->block_max_depth;
    const int VAR_12= VAR_0->block_max_depth - VAR_1;
    const int VAR_13= (VAR_2 + VAR_3*VAR_11) << VAR_12;
    const int VAR_14= 1<<VAR_12;
    const int VAR_15= 1<<VAR_12;
    BlockNode VAR_16;
    int VAR_17,VAR_18;

    VAR_16.color[0]= VAR_4;
    VAR_16.color[1]= VAR_5;
    VAR_16.color[2]= VAR_6;
    VAR_16.mx= VAR_7;
    VAR_16.my= VAR_8;
    VAR_16.ref= VAR_9;
    VAR_16.type= VAR_10;
    VAR_16.level= VAR_1;

    for(VAR_18=0; VAR_18<VAR_15; VAR_18++){
        for(VAR_17=0; VAR_17<VAR_14; VAR_17++){
            VAR_0->block[VAR_13 + VAR_17 + VAR_18*VAR_11]= VAR_16;
        }
    }
}
