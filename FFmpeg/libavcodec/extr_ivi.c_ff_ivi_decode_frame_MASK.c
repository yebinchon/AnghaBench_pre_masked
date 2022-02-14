
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_28__ {TYPE_1__* priv_data; } ;
struct TYPE_27__ {int * linesize; int * data; } ;
struct TYPE_26__ {int size; int * data; } ;
struct TYPE_25__ {int frame_size; int (* decode_pic_hdr ) (TYPE_1__*,TYPE_4__*) ;scalar_t__ frame_type; int got_p_frame; int gop_flags; int* buf_invalid; size_t dst_buf; scalar_t__ show_indeo4_info; scalar_t__ uses_fullpel; scalar_t__ uses_haar; scalar_t__ has_transp; scalar_t__ has_b_frames; scalar_t__ uses_tiling; scalar_t__ is_scalable; void* p_frame; int gb; scalar_t__ is_indeo4; TYPE_10__* planes; scalar_t__ (* is_nonnull_frame ) (TYPE_1__*) ;int (* switch_buffers ) (TYPE_1__*) ;scalar_t__ gop_invalid; int const* frame_data; } ;
struct TYPE_24__ {int buf; } ;
struct TYPE_23__ {int num_bands; int height; int width; TYPE_19__* bands; } ;
typedef TYPE_1__ IVI45DecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*,void*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_19__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_10__*,int ,int ) ;
 int FUNC_6 (TYPE_10__*,int ,int ) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int const*,int) ;
 int FUNC_12 (TYPE_10__*,int ,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;

int FUNC_19(AVCodecContext *VAR_7, void *VAR_8, int *VAR_9,
                        AVPacket *VAR_10)
{
    IVI45DecContext *VAR_11 = VAR_7->priv_data;
    const uint8_t *VAR_12 = VAR_10->data;
    AVFrame *VAR_13 = VAR_8;
    int VAR_14 = VAR_10->size;
    int VAR_15, VAR_16, VAR_17;

    VAR_15 = FUNC_11(&VAR_11->gb, VAR_12, VAR_14);
    if (VAR_15 < 0)
        return VAR_15;
    VAR_11->frame_data = VAR_12;
    VAR_11->frame_size = VAR_14;

    VAR_15 = VAR_11->decode_pic_hdr(VAR_11, VAR_7);
    if (VAR_15) {
        FUNC_1(VAR_7, VAR_3,
               "Error while decoding picture header: %d\n", VAR_15);
        return VAR_15;
    }
    if (VAR_11->gop_invalid)
        return VAR_0;

    if (VAR_11->is_indeo4 && VAR_11->frame_type == VAR_5) {
        if (VAR_11->got_p_frame) {
            FUNC_0(VAR_8, VAR_11->p_frame);
            *VAR_9 = 1;
            VAR_11->got_p_frame = 0;
        } else {
            *VAR_9 = 0;
        }
        return VAR_14;
    }

    if (VAR_11->gop_flags & VAR_6) {
        FUNC_2(VAR_7, "Password-protected clip");
        return VAR_1;
    }

    if (!VAR_11->planes[0].bands) {
        FUNC_1(VAR_7, VAR_3, "Color planes not initialized yet\n");
        return VAR_0;
    }

    VAR_11->switch_buffers(VAR_11);



    if (VAR_11->is_nonnull_frame(VAR_11)) {
        VAR_11->buf_invalid[VAR_11->dst_buf] = 1;
        for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
            for (VAR_17 = 0; VAR_17 < VAR_11->planes[VAR_16].num_bands; VAR_17++) {
                VAR_15 = FUNC_3(VAR_11, &VAR_11->planes[VAR_16].bands[VAR_17], VAR_7);
                if (VAR_15 < 0) {
                    FUNC_1(VAR_7, VAR_3,
                           "Error while decoding band: %d, plane: %d\n", VAR_17, VAR_16);
                    return VAR_15;
                }
            }
        }
        VAR_11->buf_invalid[VAR_11->dst_buf] = 0;
    } else {
        if (VAR_11->is_scalable)
            return VAR_0;

        for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
            if (!VAR_11->planes[VAR_16].bands[0].buf)
                return VAR_0;
        }
    }
    if (VAR_11->buf_invalid[VAR_11->dst_buf])
        return -1;



    if (!VAR_11->is_nonnull_frame(VAR_11))
        return VAR_14;

    VAR_15 = FUNC_7(VAR_7, VAR_11->planes[0].width, VAR_11->planes[0].height);
    if (VAR_15 < 0)
        return VAR_15;

    if ((VAR_15 = FUNC_4(VAR_7, VAR_13, 0)) < 0)
        return VAR_15;

    if (VAR_11->is_scalable) {
        if (VAR_11->is_indeo4)
            FUNC_6(&VAR_11->planes[0], VAR_13->data[0], VAR_13->linesize[0]);
        else
            FUNC_5 (&VAR_11->planes[0], VAR_13->data[0], VAR_13->linesize[0]);
    } else {
        FUNC_12(&VAR_11->planes[0], VAR_13->data[0], VAR_13->linesize[0]);
    }

    FUNC_12(&VAR_11->planes[2], VAR_13->data[1], VAR_13->linesize[1]);
    FUNC_12(&VAR_11->planes[1], VAR_13->data[2], VAR_13->linesize[2]);

    *VAR_9 = 1;






    if (VAR_11->is_indeo4 && VAR_11->frame_type == VAR_4) {
        int VAR_18;


        while (FUNC_8(&VAR_11->gb, 8)) {
            if (FUNC_10(&VAR_11->gb) < 8)
                return VAR_0;
        }
        VAR_18 = FUNC_9(&VAR_11->gb) & 0x18;
        FUNC_14(&VAR_11->gb, 64 - VAR_18);
        if (FUNC_10(&VAR_11->gb) > 18 &&
            FUNC_13(&VAR_11->gb, 21) == 0xBFFF8) {
            AVPacket VAR_19;
            VAR_19.data = VAR_10->data + (FUNC_9(&VAR_11->gb) >> 3);
            VAR_19.size = FUNC_10(&VAR_11->gb) >> 3;
            FUNC_19(VAR_7, VAR_11->p_frame, &VAR_11->got_p_frame, &VAR_19);
        }
    }

    if (VAR_11->show_indeo4_info) {
        if (VAR_11->is_scalable)
            FUNC_1(VAR_7, VAR_2, "This video uses scalability mode\n");
        if (VAR_11->uses_tiling)
            FUNC_1(VAR_7, VAR_2, "This video uses local decoding\n");
        if (VAR_11->has_b_frames)
            FUNC_1(VAR_7, VAR_2, "This video contains B-frames\n");
        if (VAR_11->has_transp)
            FUNC_1(VAR_7, VAR_2, "Transparency mode is enabled\n");
        if (VAR_11->uses_haar)
            FUNC_1(VAR_7, VAR_2, "This video uses Haar transform\n");
        if (VAR_11->uses_fullpel)
            FUNC_1(VAR_7, VAR_2, "This video uses fullpel motion vectors\n");
        VAR_11->show_indeo4_info = 0;
    }

    return VAR_14;
}
