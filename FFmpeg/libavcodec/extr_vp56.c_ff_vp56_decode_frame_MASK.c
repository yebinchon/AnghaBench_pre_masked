
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {void** frames; int (* parse_header ) (TYPE_1__*,int const*,int) ;scalar_t__ discard_frame; TYPE_6__* alpha_context; scalar_t__ has_alpha; } ;
typedef TYPE_1__ VP56Context ;
struct TYPE_16__ {void* const* frames; int (* parse_header ) (TYPE_6__*,int const*,int) ;} ;
struct TYPE_15__ {scalar_t__ pix_fmt; int width; int height; int coded_width; int coded_height; int (* execute2 ) (TYPE_3__*,int ,int ,int ,int) ;TYPE_1__* priv_data; } ;
struct TYPE_14__ {int size; int * data; } ;
typedef TYPE_2__ AVPacket ;
typedef void AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,void* const) ;
 int FUNC_1 (void* const) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (int const**) ;
 int FUNC_4 (TYPE_3__*,void* const,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,int const*,int) ;
 int FUNC_7 (TYPE_6__*,int const*,int) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

int FUNC_10(AVCodecContext *VAR_7, void *VAR_8, int *VAR_9,
                         AVPacket *VAR_10)
{
    const uint8_t *VAR_11 = VAR_10->data;
    VP56Context *VAR_12 = VAR_7->priv_data;
    AVFrame *const VAR_13 = VAR_12->frames[VAR_4];
    int VAR_14 = VAR_10->size;
    int VAR_15 = VAR_14;
    int VAR_16, VAR_17;
    int VAR_18;

    if (VAR_12->has_alpha) {
        if (VAR_14 < 3)
            return VAR_0;
        VAR_15 = FUNC_3(&VAR_11);
        VAR_14 -= 3;
        if (VAR_14 < VAR_15)
            return VAR_0;
    }

    VAR_17 = VAR_12->parse_header(VAR_12, VAR_11, VAR_15);
    if (VAR_17 < 0)
        return VAR_17;

    if (VAR_17 == VAR_5) {
        for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
            FUNC_1(VAR_12->frames[VAR_16]);
            if (VAR_12->alpha_context)
                FUNC_1(VAR_12->alpha_context->frames[VAR_16]);
        }
    }

    VAR_18 = FUNC_4(VAR_7, VAR_13, VAR_1);
    if (VAR_18 < 0) {
        if (VAR_17 == VAR_5)
            FUNC_5(VAR_7, 0, 0);
        return VAR_18;
    }

    if (VAR_7->pix_fmt == VAR_3) {
        FUNC_1(VAR_12->alpha_context->frames[VAR_4]);
        if ((VAR_18 = FUNC_0(VAR_12->alpha_context->frames[VAR_4], VAR_13)) < 0) {
            FUNC_1(VAR_13);
            if (VAR_17 == VAR_5)
                FUNC_5(VAR_7, 0, 0);
            return VAR_18;
        }
    }

    if (VAR_17 == VAR_5) {
        if (FUNC_9(VAR_12)) {
            FUNC_1(VAR_13);
            return VAR_0;
        }
    }

    if (VAR_7->pix_fmt == VAR_3) {
        int VAR_19 = VAR_7->width;
        int VAR_20 = VAR_7->height;
        int VAR_21 = VAR_7->coded_width;
        int VAR_22 = VAR_7->coded_height;
        VAR_11 += VAR_15;
        VAR_14 -= VAR_15;

        VAR_17 = VAR_12->alpha_context->parse_header(VAR_12->alpha_context, VAR_11, VAR_14);
        if (VAR_17 != 0) {
            if(VAR_17==VAR_5) {
                FUNC_2(VAR_7, VAR_2, "Alpha reconfiguration\n");
                VAR_7->width = VAR_19;
                VAR_7->height = VAR_20;
                VAR_7->coded_width = VAR_21;
                VAR_7->coded_height = VAR_22;
            }
            FUNC_1(VAR_13);
            return VAR_0;
        }
    }

    VAR_12->discard_frame = 0;
    VAR_7->execute2(VAR_7, VAR_6, 0, 0, (VAR_7->pix_fmt == VAR_3) + 1);

    if (VAR_12->discard_frame)
        return VAR_0;

    if ((VAR_17 = FUNC_0(VAR_8, VAR_13)) < 0)
        return VAR_17;
    *VAR_9 = 1;

    return VAR_10->size;
}
