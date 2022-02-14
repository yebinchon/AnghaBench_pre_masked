
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int flags2; scalar_t__ skip_frame; int err_recognition; int flags; TYPE_1__* priv_data; } ;
struct TYPE_19__ {scalar_t__* buf; } ;
struct TYPE_18__ {int* data; int size; } ;
struct TYPE_17__ {scalar_t__ nal_unit_type; scalar_t__ mb_y; scalar_t__ mb_height; int last_pic_for_ec; scalar_t__ next_output_pic; int * slice_ctx; int has_slice; int cur_pic_ptr; int nal_length_size; scalar_t__ is_avc; int ps; scalar_t__ nb_slice_ctx_queued; scalar_t__ setup_finished; int flags; } ;
typedef TYPE_1__ H264Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int* FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int FUNC_4 (int const*,int,int *,scalar_t__*,int *,int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,scalar_t__,int*) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int const*,int) ;
 int FUNC_10 (char*,int const*,int) ;
 int FUNC_11 (TYPE_1__*,TYPE_3__*,int*,int) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_6, void *VAR_7,
                             int *VAR_8, AVPacket *VAR_9)
{
    const uint8_t *VAR_10 = VAR_9->data;
    int VAR_11 = VAR_9->size;
    H264Context *VAR_12 = VAR_6->priv_data;
    AVFrame *VAR_13 = VAR_7;
    int VAR_14;
    int VAR_15;

    VAR_12->flags = VAR_6->flags;
    VAR_12->setup_finished = 0;
    VAR_12->nb_slice_ctx_queued = 0;

    FUNC_6(VAR_12, &VAR_12->last_pic_for_ec);


    if (VAR_11 == 0)
        return FUNC_11(VAR_12, VAR_13, VAR_8, 0);

    if (VAR_12->is_avc && FUNC_2(VAR_9, VAR_4, ((void*)0))) {
        int VAR_16;
        uint8_t *VAR_17 = FUNC_2(VAR_9, VAR_4, &VAR_16);
        if (FUNC_9(VAR_17, VAR_16))
            FUNC_4(VAR_17, VAR_16,
                                     &VAR_12->ps, &VAR_12->is_avc, &VAR_12->nal_length_size,
                                     VAR_6->err_recognition, VAR_6);
    }
    if (VAR_12->is_avc && VAR_11 >= 9 && VAR_10[0]==1 && VAR_10[2]==0 && (VAR_10[4]&0xFC)==0xFC) {
        if (FUNC_9(VAR_10, VAR_11))
            return FUNC_4(VAR_10, VAR_11,
                                            &VAR_12->ps, &VAR_12->is_avc, &VAR_12->nal_length_size,
                                            VAR_6->err_recognition, VAR_6);
    }

    VAR_14 = FUNC_3(VAR_12, VAR_10, VAR_11);
    if (VAR_14 < 0)
        return VAR_1;

    if (!VAR_12->cur_pic_ptr && VAR_12->nal_unit_type == VAR_5) {
        FUNC_0(VAR_14 <= VAR_11);
        return FUNC_11(VAR_12, VAR_13, VAR_8, VAR_14);
    }

    if (!(VAR_6->flags2 & VAR_2) && (!VAR_12->cur_pic_ptr || !VAR_12->has_slice)) {
        if (VAR_6->skip_frame >= VAR_0 ||
            VAR_11 >= 4 && !FUNC_10("Q264", VAR_10, 4))
            return VAR_11;
        FUNC_1(VAR_6, VAR_3, "no frame!\n");
        return VAR_1;
    }

    if (!(VAR_6->flags2 & VAR_2) ||
        (VAR_12->mb_y >= VAR_12->mb_height && VAR_12->mb_height)) {
        if ((VAR_15 = FUNC_5(VAR_12, &VAR_12->slice_ctx[0], 0)) < 0)
            return VAR_15;


        if (VAR_12->next_output_pic) {
            VAR_15 = FUNC_7(VAR_12, VAR_13, VAR_12->next_output_pic, VAR_8);
            if (VAR_15 < 0)
                return VAR_15;
        }
    }

    FUNC_0(VAR_13->buf[0] || !*VAR_8);

    FUNC_6(VAR_12, &VAR_12->last_pic_for_ec);

    return FUNC_8(VAR_14, VAR_11);
}
