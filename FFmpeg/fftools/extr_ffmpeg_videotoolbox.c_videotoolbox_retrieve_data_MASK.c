
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_3__* tmp_frame; } ;
typedef TYPE_1__ VTContext ;
struct TYPE_16__ {int codec_tag; TYPE_2__* opaque; } ;
struct TYPE_15__ {int height; int width; int format; int linesize; int * data; } ;
struct TYPE_14__ {TYPE_1__* hwaccel_ctx; } ;
typedef int OSType ;
typedef TYPE_2__ InputStream ;
typedef scalar_t__ CVReturn ;
typedef int CVPixelBufferRef ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *,int ,int const**,int*,int ,int ,int ) ;
 int FUNC_16 (int *,int ,char*,...) ;
 int VAR_8 ;







 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_11, AVFrame *VAR_12)
{
    InputStream *VAR_13 = VAR_11->opaque;
    VTContext *VAR_14 = VAR_13->hwaccel_ctx;
    CVPixelBufferRef VAR_15 = (CVPixelBufferRef)VAR_12->data[3];
    OSType VAR_16 = FUNC_5(VAR_15);
    CVReturn VAR_17;
    uint8_t *VAR_18[4] = { 0 };
    int VAR_19[4] = { 0 };
    int VAR_20, VAR_21, VAR_22;

    FUNC_14(VAR_14->tmp_frame);

    switch (VAR_16) {
    case 129: VAR_14->tmp_frame->format = VAR_6; break;
    case 128: VAR_14->tmp_frame->format = VAR_5; break;
    case 134: VAR_14->tmp_frame->format = VAR_2; break;
    default:
        FUNC_16(((void*)0), VAR_1,
               "%s: Unsupported pixel format: %s\n",
               FUNC_10(VAR_11->codec_tag), VAR_10);
        return FUNC_0(VAR_7);
    }

    VAR_14->tmp_frame->width = VAR_12->width;
    VAR_14->tmp_frame->height = VAR_12->height;
    VAR_21 = FUNC_12(VAR_14->tmp_frame, 32);
    if (VAR_21 < 0)
        return VAR_21;

    VAR_17 = FUNC_8(VAR_15, VAR_8);
    if (VAR_17 != VAR_9) {
        FUNC_16(((void*)0), VAR_1, "Error locking the pixel buffer.\n");
        return VAR_0;
    }

    if (FUNC_7(VAR_15)) {

        VAR_20 = FUNC_6(VAR_15);
        for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
            VAR_18[VAR_22] = FUNC_2(VAR_15, VAR_22);
            VAR_19[VAR_22] = FUNC_4(VAR_15, VAR_22);
        }
    } else {
        VAR_18[0] = FUNC_1(VAR_15);
        VAR_19[0] = FUNC_3(VAR_15);
    }

    FUNC_15(VAR_14->tmp_frame->data, VAR_14->tmp_frame->linesize,
                  (const uint8_t **)VAR_18, VAR_19, VAR_14->tmp_frame->format,
                  VAR_12->width, VAR_12->height);

    VAR_21 = FUNC_11(VAR_14->tmp_frame, VAR_12);
    FUNC_9(VAR_15, VAR_8);
    if (VAR_21 < 0)
        return VAR_21;

    FUNC_14(VAR_12);
    FUNC_13(VAR_12, VAR_14->tmp_frame);

    return 0;
}
