
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {TYPE_2__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_12__ {int hw_frames_ctx; } ;
struct TYPE_10__ {int * ringbuffers; } ;
struct TYPE_11__ {int eof; int smooth_window; int duration; int curr_frame; int read_buf_time; int crop_upscale_time; int transform_time; int match_descriptors_time; int brief_descriptors_time; int refine_features_time; int harris_response_time; int grayscale_time; scalar_t__ debug_on; int fq; TYPE_1__ abs_motion; int initialized; } ;
typedef TYPE_2__ DeshakeOpenCLContext ;
typedef TYPE_3__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int*,int *) ;
 int FUNC_11 (int *,TYPE_3__**) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_15(AVFilterContext *VAR_6)
{
    AVFilterLink *VAR_7 = VAR_6->inputs[0];
    AVFilterLink *VAR_8 = VAR_6->outputs[0];
    DeshakeOpenCLContext *VAR_9 = VAR_6->priv;
    AVFrame *VAR_10 = ((void*)0);
    int VAR_11, VAR_12;
    int64_t VAR_13;

    FUNC_1(VAR_8, VAR_7);

    if (!VAR_9->eof) {
        VAR_11 = FUNC_11(VAR_7, &VAR_10);
        if (VAR_11 < 0)
            return VAR_11;
        if (VAR_11 > 0) {
            if (!VAR_10->hw_frames_ctx)
                return FUNC_0(VAR_2);

            if (!VAR_9->initialized) {
                VAR_11 = FUNC_7(VAR_6);
                if (VAR_11 < 0)
                    return VAR_11;
            }



            if (FUNC_4(VAR_9->abs_motion.ringbuffers[VAR_5]) == 0) {
                for (int VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
                    FUNC_3(VAR_9->abs_motion.ringbuffers[VAR_14], sizeof(float));
                }
            }
            VAR_11 = FUNC_14(VAR_7, VAR_10);
            if (VAR_11 < 0)
                return VAR_11;
            if (VAR_11 >= 0) {



                if (FUNC_8(&VAR_9->fq) >= VAR_9->smooth_window / 2) {
                    return FUNC_13(VAR_7, FUNC_9(&VAR_9->fq));
                }
            }
        }
    }

    if (!VAR_9->eof && FUNC_10(VAR_7, &VAR_12, &VAR_13)) {
        if (VAR_12 == VAR_0) {
            VAR_9->eof = 1;
        }
    }

    if (VAR_9->eof) {

        while(FUNC_8(&VAR_9->fq) != 0) {
            for (int VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
                FUNC_3(VAR_9->abs_motion.ringbuffers[VAR_15], sizeof(float));
            }

            VAR_11 = FUNC_13(VAR_7, FUNC_9(&VAR_9->fq));
            if (VAR_11 < 0) {
                return VAR_11;
            }
        }

        if (VAR_9->debug_on) {
            FUNC_5(VAR_6, VAR_1,
                "Average kernel execution times:\n"
                "\t        grayscale: %0.3f ms\n"
                "\t  harris_response: %0.3f ms\n"
                "\t  refine_features: %0.3f ms\n"
                "\tbrief_descriptors: %0.3f ms\n"
                "\tmatch_descriptors: %0.3f ms\n"
                "\t        transform: %0.3f ms\n"
                "\t     crop_upscale: %0.3f ms\n"
                "Average buffer read times:\n"
                "\t     features buf: %0.3f ms\n",
                FUNC_6(VAR_9->grayscale_time, VAR_9->curr_frame),
                FUNC_6(VAR_9->harris_response_time, VAR_9->curr_frame),
                FUNC_6(VAR_9->refine_features_time, VAR_9->curr_frame),
                FUNC_6(VAR_9->brief_descriptors_time, VAR_9->curr_frame),
                FUNC_6(VAR_9->match_descriptors_time, VAR_9->curr_frame),
                FUNC_6(VAR_9->transform_time, VAR_9->curr_frame),
                FUNC_6(VAR_9->crop_upscale_time, VAR_9->curr_frame),
                FUNC_6(VAR_9->read_buf_time, VAR_9->curr_frame)
            );
        }

        FUNC_12(VAR_8, VAR_0, VAR_9->duration);
        return 0;
    }

    if (!VAR_9->eof) {
        FUNC_2(VAR_8, VAR_7);
    }

    return VAR_3;
}
