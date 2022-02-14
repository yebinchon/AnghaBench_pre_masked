
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_5__ {int* qscale_table; } ;
struct TYPE_6__ {int mb_num; size_t* mb_index2xy; scalar_t__ codec_id; int* mb_type; TYPE_1__ current_picture; } ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(MpegEncContext *VAR_3){
    int VAR_4;
    int8_t * const VAR_5 = VAR_3->current_picture.qscale_table;

    FUNC_0(VAR_3);

    for(VAR_4=1; VAR_4<VAR_3->mb_num; VAR_4++){
        if(VAR_5[ VAR_3->mb_index2xy[VAR_4] ] - VAR_5[ VAR_3->mb_index2xy[VAR_4-1] ] >2)
            VAR_5[ VAR_3->mb_index2xy[VAR_4] ]= VAR_5[ VAR_3->mb_index2xy[VAR_4-1] ]+2;
    }
    for(VAR_4=VAR_3->mb_num-2; VAR_4>=0; VAR_4--){
        if(VAR_5[ VAR_3->mb_index2xy[VAR_4] ] - VAR_5[ VAR_3->mb_index2xy[VAR_4+1] ] >2)
            VAR_5[ VAR_3->mb_index2xy[VAR_4] ]= VAR_5[ VAR_3->mb_index2xy[VAR_4+1] ]+2;
    }

    if(VAR_3->codec_id != VAR_0){
        for(VAR_4=1; VAR_4<VAR_3->mb_num; VAR_4++){
            int VAR_6= VAR_3->mb_index2xy[VAR_4];

            if(VAR_5[VAR_6] != VAR_5[VAR_3->mb_index2xy[VAR_4-1]] && (VAR_3->mb_type[VAR_6]&VAR_2)){
                VAR_3->mb_type[VAR_6]|= VAR_1;
            }
        }
    }
}
