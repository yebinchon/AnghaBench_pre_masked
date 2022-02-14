
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;


typedef int uint8_t ;
struct TYPE_28__ {int flags2; int active_thread_type; int slice_flags; TYPE_4__* hwaccel; } ;
struct TYPE_27__ {int * data; } ;
struct TYPE_26__ {int a53_caption_size; scalar_t__ has_afd; int afd; scalar_t__ has_stereo3d; int stereo3d; int * a53_caption; int pan_scan; } ;
struct TYPE_22__ {TYPE_1__* f; } ;
struct TYPE_25__ {long long mb_width; long long mb_height; scalar_t__ picture_structure; TYPE_3__* current_picture_ptr; TYPE_2__ current_picture; TYPE_8__* avctx; scalar_t__ progressive_frame; scalar_t__ top_field_first; scalar_t__ progressive_sequence; scalar_t__ repeat_first_field; scalar_t__ first_field; } ;
struct TYPE_24__ {int (* end_frame ) (TYPE_8__*) ;int (* start_frame ) (TYPE_8__*,int const*,int) ;} ;
struct TYPE_23__ {TYPE_16__* f; } ;
struct TYPE_21__ {int * data; } ;
struct TYPE_20__ {int repeat_pict; scalar_t__* linesize; int * data; } ;
typedef TYPE_5__ MpegEncContext ;
typedef TYPE_6__ Mpeg1Context ;
typedef int AVStereo3D ;
typedef TYPE_7__ AVFrameSideData ;
typedef TYPE_8__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_7__* FUNC_1 (TYPE_16__*,int ,int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_8__*,int ,char*) ;
 int * FUNC_4 (TYPE_16__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*,int const*,int) ;

__attribute__((used)) static int FUNC_11(MpegEncContext *VAR_12, const uint8_t *VAR_13, int VAR_14)
{
    AVCodecContext *VAR_15 = VAR_12->avctx;
    Mpeg1Context *VAR_16 = (Mpeg1Context *) VAR_12;
    int VAR_17;

    if (!(VAR_15->flags2 & VAR_1)) {
        if (VAR_12->mb_width * VAR_12->mb_height * 11LL / (33 * 2 * 8) > VAR_14)
            return VAR_0;
    }


    if (VAR_12->first_field || VAR_12->picture_structure == VAR_10) {
        AVFrameSideData *VAR_18;

        if ((VAR_17 = FUNC_6(VAR_12, VAR_15)) < 0)
            return VAR_17;

        FUNC_5(VAR_12);


        VAR_12->current_picture_ptr->f->repeat_pict = 0;
        if (VAR_12->repeat_first_field) {
            if (VAR_12->progressive_sequence) {
                if (VAR_12->top_field_first)
                    VAR_12->current_picture_ptr->f->repeat_pict = 4;
                else
                    VAR_12->current_picture_ptr->f->repeat_pict = 2;
            } else if (VAR_12->progressive_frame) {
                VAR_12->current_picture_ptr->f->repeat_pict = 1;
            }
        }

        VAR_18 = FUNC_1(VAR_12->current_picture_ptr->f,
                                          VAR_4,
                                          sizeof(VAR_16->pan_scan));
        if (!VAR_18)
            return FUNC_0(VAR_6);
        FUNC_8(VAR_18->data, &VAR_16->pan_scan, sizeof(VAR_16->pan_scan));

        if (VAR_16->a53_caption) {
            AVFrameSideData *VAR_19 = FUNC_1(
                VAR_12->current_picture_ptr->f, VAR_2,
                VAR_16->a53_caption_size);
            if (VAR_19)
                FUNC_8(VAR_19->data, VAR_16->a53_caption, VAR_16->a53_caption_size);
            FUNC_2(&VAR_16->a53_caption);
        }

        if (VAR_16->has_stereo3d) {
            AVStereo3D *VAR_20 = FUNC_4(VAR_12->current_picture_ptr->f);
            if (!VAR_20)
                return FUNC_0(VAR_6);

            *VAR_20 = VAR_16->stereo3d;
            VAR_16->has_stereo3d = 0;
        }

        if (VAR_16->has_afd) {
            AVFrameSideData *VAR_21 =
                FUNC_1(VAR_12->current_picture_ptr->f,
                                       VAR_3, 1);
            if (!VAR_21)
                return FUNC_0(VAR_6);

            *VAR_21->data = VAR_16->afd;
            VAR_16->has_afd = 0;
        }

        if (VAR_8 && (VAR_15->active_thread_type & VAR_7))
            FUNC_7(VAR_15);
    } else {
        int VAR_22;

        if (!VAR_12->current_picture_ptr) {
            FUNC_3(VAR_12->avctx, VAR_5, "first field missing\n");
            return VAR_0;
        }

        if (VAR_12->avctx->hwaccel &&
            (VAR_12->avctx->slice_flags & VAR_11)) {
            if ((VAR_17 = VAR_12->avctx->hwaccel->end_frame(VAR_12->avctx)) < 0) {
                FUNC_3(VAR_15, VAR_5,
                       "hardware accelerator failed to decode first field\n");
                return VAR_17;
            }
        }

        for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
            VAR_12->current_picture.f->data[VAR_22] = VAR_12->current_picture_ptr->f->data[VAR_22];
            if (VAR_12->picture_structure == VAR_9)
                VAR_12->current_picture.f->data[VAR_22] +=
                    VAR_12->current_picture_ptr->f->linesize[VAR_22];
        }
    }

    if (VAR_15->hwaccel) {
        if ((VAR_17 = VAR_15->hwaccel->start_frame(VAR_15, VAR_13, VAR_14)) < 0)
            return VAR_17;
    }

    return 0;
}
