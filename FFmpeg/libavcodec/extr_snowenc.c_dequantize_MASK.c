
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int const qbias; int qlog; } ;
struct TYPE_5__ {int width; int height; int qlog; } ;
typedef TYPE_1__ SubBand ;
typedef TYPE_2__ SnowContext ;
typedef int IDWTELEM ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int const* VAR_5 ;

__attribute__((used)) static void FUNC_1(SnowContext *VAR_6, SubBand *VAR_7, IDWTELEM *VAR_8, int VAR_9){
    const int VAR_10= VAR_7->width;
    const int VAR_11= VAR_7->height;
    const int VAR_12= FUNC_0(VAR_6->qlog + VAR_7->qlog, 0, VAR_3*16);
    const int VAR_13= VAR_5[VAR_12&(VAR_3-1)]<<(VAR_12>>VAR_4);
    const int VAR_14= (VAR_6->qbias*VAR_13)>>VAR_1;
    int VAR_15,VAR_16;

    if(VAR_6->qlog == VAR_0) return;

    for(VAR_16=0; VAR_16<VAR_11; VAR_16++){
        for(VAR_15=0; VAR_15<VAR_10; VAR_15++){
            int VAR_17= VAR_8[VAR_15 + VAR_16*VAR_9];
            if(VAR_17<0){
                VAR_8[VAR_15 + VAR_16*VAR_9]= -((-VAR_17*VAR_13 + VAR_14)>>(VAR_2));
            }else if(VAR_17>0){
                VAR_8[VAR_15 + VAR_16*VAR_9]= (( VAR_17*VAR_13 + VAR_14)>>(VAR_2));
            }
        }
    }
}
