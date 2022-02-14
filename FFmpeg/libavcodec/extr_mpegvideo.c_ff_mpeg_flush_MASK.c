
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int state; scalar_t__ last_index; scalar_t__ index; scalar_t__ overread_index; scalar_t__ overread; scalar_t__ frame_start_found; } ;
struct TYPE_6__ {scalar_t__ pp_time; scalar_t__ bitstream_buffer_size; TYPE_1__ parse_context; scalar_t__ closed_gop; scalar_t__ mb_y; scalar_t__ mb_x; int next_picture; int avctx; int last_picture; int current_picture; int * next_picture_ptr; int last_picture_ptr; int current_picture_ptr; int * picture; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(AVCodecContext *VAR_1){
    int VAR_2;
    MpegEncContext *VAR_3 = VAR_1->priv_data;

    if (!VAR_3 || !VAR_3->picture)
        return;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_0(VAR_3->avctx, &VAR_3->picture[VAR_2]);
    VAR_3->current_picture_ptr = VAR_3->last_picture_ptr = *(VAR_3->next_picture_ptr = ((void*)0));

    FUNC_0(VAR_3->avctx, &VAR_3->current_picture);
    FUNC_0(VAR_3->avctx, &VAR_3->last_picture);
    FUNC_0(VAR_3->avctx, &VAR_3->next_picture);

    VAR_3->mb_x= VAR_3->mb_y= 0;
    VAR_3->closed_gop= 0;

    VAR_3->parse_context.state= -1;
    VAR_3->parse_context.frame_start_found= 0;
    VAR_3->parse_context.overread= 0;
    VAR_3->parse_context.overread_index= 0;
    VAR_3->parse_context.index= 0;
    VAR_3->parse_context.last_index= 0;
    VAR_3->bitstream_buffer_size=0;
    VAR_3->pp_time=0;
}
