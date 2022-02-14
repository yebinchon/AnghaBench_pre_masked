
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_30__ {scalar_t__ reference; int field_picture; scalar_t__ long_ref; int * field_poc; TYPE_7__* f; int sei_recovery_frame_cnt; scalar_t__ invalid_gap; scalar_t__ recovered; scalar_t__ mmco_reset; int frame_num; } ;
struct TYPE_21__ {int next_pic; int last_pic; int cur_pic; } ;
struct TYPE_29__ {int linesize; int uvlinesize; TYPE_17__ er; int slice_type; } ;
struct TYPE_28__ {int* linesize; int crop_bottom; int crop_top; int crop_right; int crop_left; int pict_type; scalar_t__ key_frame; scalar_t__ coded_picture_number; } ;
struct TYPE_24__ {scalar_t__ x264_build; } ;
struct TYPE_26__ {int recovery_frame_cnt; } ;
struct TYPE_27__ {TYPE_3__ unregistered; TYPE_5__ recovery_point; } ;
struct TYPE_25__ {int frame_num; } ;
struct TYPE_23__ {TYPE_1__* sps; } ;
struct TYPE_22__ {scalar_t__ mb_aff; } ;
struct TYPE_20__ {int pixel_shift; scalar_t__ picture_structure; int nb_slice_ctx; int* block_offset; int mb_aff_frame; scalar_t__ x264_build; TYPE_9__* cur_pic_ptr; TYPE_6__ sei; TYPE_2__ ps; scalar_t__ postpone_filter; int * next_output_pic; TYPE_8__* slice_ctx; scalar_t__ enable_er; int cur_pic; int crop_bottom; int crop_top; int crop_right; int crop_left; TYPE_4__ poc; int coded_picture_number; scalar_t__ droppable; TYPE_9__* DPB; int avctx; } ;
typedef TYPE_9__ H264Picture ;
typedef TYPE_10__ H264Context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_10__*,TYPE_9__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_17__*) ;
 int FUNC_4 (TYPE_10__*,int *,TYPE_9__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_10__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*,int) ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_10(H264Context *VAR_5)
{
    H264Picture *VAR_6;
    int VAR_7, VAR_8;
    const int VAR_9 = VAR_5->pixel_shift;

    if (!FUNC_7(VAR_5->avctx)) {
        FUNC_2(VAR_5->avctx, VAR_0, "Attempt to start a frame outside SETUP state\n");
        return -1;
    }

    FUNC_9(VAR_5, 1);
    VAR_5->cur_pic_ptr = ((void*)0);

    VAR_7 = FUNC_8(VAR_5);
    if (VAR_7 < 0) {
        FUNC_2(VAR_5->avctx, VAR_0, "no frame buffer available\n");
        return VAR_7;
    }
    VAR_6 = &VAR_5->DPB[VAR_7];

    VAR_6->reference = VAR_5->droppable ? 0 : VAR_5->picture_structure;
    VAR_6->f->coded_picture_number = VAR_5->coded_picture_number++;
    VAR_6->field_picture = VAR_5->picture_structure != VAR_3;
    VAR_6->frame_num = VAR_5->poc.frame_num;





    VAR_6->f->key_frame = 0;
    VAR_6->mmco_reset = 0;
    VAR_6->recovered = 0;
    VAR_6->invalid_gap = 0;
    VAR_6->sei_recovery_frame_cnt = VAR_5->sei.recovery_point.recovery_frame_cnt;

    VAR_6->f->pict_type = VAR_5->slice_ctx[0].slice_type;

    VAR_6->f->crop_left = VAR_5->crop_left;
    VAR_6->f->crop_right = VAR_5->crop_right;
    VAR_6->f->crop_top = VAR_5->crop_top;
    VAR_6->f->crop_bottom = VAR_5->crop_bottom;

    if ((VAR_8 = FUNC_0(VAR_5, VAR_6)) < 0)
        return VAR_8;

    VAR_5->cur_pic_ptr = VAR_6;
    FUNC_6(VAR_5, &VAR_5->cur_pic);
    if (VAR_1) {
        FUNC_5(&VAR_5->slice_ctx[0].er.cur_pic, ((void*)0));
    }

    if ((VAR_8 = FUNC_4(VAR_5, &VAR_5->cur_pic, VAR_5->cur_pic_ptr)) < 0)
        return VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_5->nb_slice_ctx; VAR_7++) {
        VAR_5->slice_ctx[VAR_7].linesize = VAR_5->cur_pic_ptr->f->linesize[0];
        VAR_5->slice_ctx[VAR_7].uvlinesize = VAR_5->cur_pic_ptr->f->linesize[1];
    }

    if (VAR_1 && VAR_5->enable_er) {
        FUNC_3(&VAR_5->slice_ctx[0].er);
        FUNC_5(&VAR_5->slice_ctx[0].er.last_pic, ((void*)0));
        FUNC_5(&VAR_5->slice_ctx[0].er.next_pic, ((void*)0));
    }

    for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        VAR_5->block_offset[VAR_7] = (4 * ((VAR_4[VAR_7] - VAR_4[0]) & 7) << VAR_9) + 4 * VAR_6->f->linesize[0] * ((VAR_4[VAR_7] - VAR_4[0]) >> 3);
        VAR_5->block_offset[48 + VAR_7] = (4 * ((VAR_4[VAR_7] - VAR_4[0]) & 7) << VAR_9) + 8 * VAR_6->f->linesize[0] * ((VAR_4[VAR_7] - VAR_4[0]) >> 3);
    }
    for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        VAR_5->block_offset[16 + VAR_7] =
        VAR_5->block_offset[32 + VAR_7] = (4 * ((VAR_4[VAR_7] - VAR_4[0]) & 7) << VAR_9) + 4 * VAR_6->f->linesize[1] * ((VAR_4[VAR_7] - VAR_4[0]) >> 3);
        VAR_5->block_offset[48 + 16 + VAR_7] =
        VAR_5->block_offset[48 + 32 + VAR_7] = (4 * ((VAR_4[VAR_7] - VAR_4[0]) & 7) << VAR_9) + 8 * VAR_6->f->linesize[1] * ((VAR_4[VAR_7] - VAR_4[0]) >> 3);
    }





    VAR_5->cur_pic_ptr->reference = 0;

    VAR_5->cur_pic_ptr->field_poc[0] = VAR_5->cur_pic_ptr->field_poc[1] = VAR_2;

    VAR_5->next_output_pic = ((void*)0);

    VAR_5->postpone_filter = 0;

    VAR_5->mb_aff_frame = VAR_5->ps.sps->mb_aff && (VAR_5->picture_structure == VAR_3);

    if (VAR_5->sei.unregistered.x264_build >= 0)
        VAR_5->x264_build = VAR_5->sei.unregistered.x264_build;

    FUNC_1(VAR_5->cur_pic_ptr->long_ref == 0);

    return 0;
}
