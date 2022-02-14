
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dia_size; } ;
struct TYPE_9__ {int first_slice_line; scalar_t__ mb_y; scalar_t__ start_mb_y; scalar_t__ end_mb_y; scalar_t__ mb_x; scalar_t__ mb_width; int* block_index; scalar_t__ pict_type; TYPE_2__* avctx; TYPE_1__ me; } ;
struct TYPE_8__ {int dia_size; } ;
typedef TYPE_3__ MpegEncContext ;
typedef int AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, void *VAR_2){
    MpegEncContext *VAR_3= *(void**)VAR_2;

    FUNC_0();

    VAR_3->me.dia_size= VAR_3->avctx->dia_size;
    VAR_3->first_slice_line=1;
    for(VAR_3->mb_y= VAR_3->start_mb_y; VAR_3->mb_y < VAR_3->end_mb_y; VAR_3->mb_y++) {
        VAR_3->mb_x=0;
        FUNC_3(VAR_3);
        for(VAR_3->mb_x=0; VAR_3->mb_x < VAR_3->mb_width; VAR_3->mb_x++) {
            VAR_3->block_index[0]+=2;
            VAR_3->block_index[1]+=2;
            VAR_3->block_index[2]+=2;
            VAR_3->block_index[3]+=2;


            if(VAR_3->pict_type==VAR_0)
                FUNC_1(VAR_3, VAR_3->mb_x, VAR_3->mb_y);
            else
                FUNC_2(VAR_3, VAR_3->mb_x, VAR_3->mb_y);
        }
        VAR_3->first_slice_line=0;
    }
    return 0;
}
