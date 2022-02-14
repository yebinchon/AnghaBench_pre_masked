
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {int coded_width; int coded_height; int sw_pix_fmt; int codec_id; } ;
struct TYPE_12__ {int width; int height; int initial_pool_size; void* sw_format; int pool; int free; int format; } ;
struct TYPE_11__ {TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_6(AVCodecContext *VAR_14,
                          AVBufferRef *VAR_15,
                          int VAR_16,
                          int VAR_17)
{
    AVHWFramesContext *VAR_18 = (AVHWFramesContext*)VAR_15->data;
    const AVPixFmtDescriptor *VAR_19;
    int VAR_20, VAR_21, VAR_22;

    VAR_19 = FUNC_3(VAR_14->sw_pix_fmt);
    if (!VAR_19)
        return VAR_0;

    VAR_20 = FUNC_4(VAR_14->codec_id);
    if (VAR_20 < 0) {
        FUNC_2(VAR_14, VAR_1, "Unsupported codec ID\n");
        return VAR_0;
    }

    VAR_21 = FUNC_5(VAR_14->sw_pix_fmt);
    if (VAR_21 < 0) {
        FUNC_2(VAR_14, VAR_2, "Unsupported chroma format\n");
        return FUNC_0(VAR_9);
    }
    VAR_22 = VAR_17 && VAR_21 == VAR_11;

    VAR_18->format = VAR_3;
    VAR_18->width = (VAR_14->coded_width + 1) & ~1;
    VAR_18->height = (VAR_14->coded_height + 1) & ~1;




    VAR_18->initial_pool_size = VAR_16 + 2;

    VAR_18->free = VAR_13;
    VAR_18->pool = FUNC_1(0, VAR_12);

    if (!VAR_18->pool)
        return FUNC_0(VAR_10);

    switch (VAR_19->comp[0].depth) {
    case 8:
        VAR_18->sw_format = VAR_22 ? VAR_7 : VAR_4;
        break;
    case 10:
        VAR_18->sw_format = VAR_22 ? VAR_8 : VAR_5;
        break;
    case 12:
        VAR_18->sw_format = VAR_22 ? VAR_8 : VAR_6;
        break;
    default:
        return FUNC_0(VAR_9);
    }

    return 0;
}
