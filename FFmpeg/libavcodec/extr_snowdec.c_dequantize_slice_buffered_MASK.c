
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int slice_buffer ;
struct TYPE_6__ {int const qbias; int qlog; } ;
struct TYPE_5__ {int width; int stride_line; int buf_x_offset; scalar_t__ buf_y_offset; int qlog; } ;
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
 int* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(SnowContext *VAR_6, slice_buffer * VAR_7, SubBand *VAR_8, IDWTELEM *VAR_9, int VAR_10, int VAR_11, int VAR_12){
    const int VAR_13= VAR_8->width;
    const int VAR_14= FUNC_0(VAR_6->qlog + VAR_8->qlog, 0, VAR_3*16);
    const int VAR_15= VAR_5[VAR_14&(VAR_3-1)]<<(VAR_14>>VAR_4);
    const int VAR_16= (VAR_6->qbias*VAR_15)>>VAR_1;
    int VAR_17,VAR_18;

    if(VAR_6->qlog == VAR_0) return;

    for(VAR_18=VAR_11; VAR_18<VAR_12; VAR_18++){

        IDWTELEM * VAR_19 = FUNC_1(VAR_7, (VAR_18 * VAR_8->stride_line) + VAR_8->buf_y_offset) + VAR_8->buf_x_offset;
        for(VAR_17=0; VAR_17<VAR_13; VAR_17++){
            int VAR_20= VAR_19[VAR_17];
            if(VAR_20<0){
                VAR_19[VAR_17]= -((-VAR_20*(unsigned)VAR_15 + VAR_16)>>(VAR_2));
            }else if(VAR_20>0){
                VAR_19[VAR_17]= (( VAR_20*(unsigned)VAR_15 + VAR_16)>>(VAR_2));
            }
        }
    }
}
