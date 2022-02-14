
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pre_pass; int dia_size; } ;
struct TYPE_7__ {int first_slice_line; scalar_t__ mb_y; scalar_t__ end_mb_y; scalar_t__ start_mb_y; scalar_t__ mb_x; scalar_t__ mb_width; TYPE_2__ me; TYPE_1__* avctx; } ;
struct TYPE_5__ {int pre_dia_size; } ;
typedef TYPE_3__ MpegEncContext ;
typedef int AVCodecContext ;


 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, void *VAR_1){
    MpegEncContext *VAR_2= *(void**)VAR_1;


    VAR_2->me.pre_pass=1;
    VAR_2->me.dia_size= VAR_2->avctx->pre_dia_size;
    VAR_2->first_slice_line=1;
    for(VAR_2->mb_y= VAR_2->end_mb_y-1; VAR_2->mb_y >= VAR_2->start_mb_y; VAR_2->mb_y--) {
        for(VAR_2->mb_x=VAR_2->mb_width-1; VAR_2->mb_x >=0 ;VAR_2->mb_x--) {
            FUNC_0(VAR_2, VAR_2->mb_x, VAR_2->mb_y);
        }
        VAR_2->first_slice_line=0;
    }

    VAR_2->me.pre_pass=0;

    return 0;
}
