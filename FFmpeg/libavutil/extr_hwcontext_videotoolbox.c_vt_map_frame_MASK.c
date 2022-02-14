
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {int format; int hw_frames_ctx; int * linesize; int * data; } ;
struct TYPE_9__ {scalar_t__ width; scalar_t__ height; } ;
typedef int OSType ;
typedef scalar_t__ CVReturn ;
typedef int CVPixelBufferRef ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int ,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_2__*,TYPE_2__ const*,int ,void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_15(AVHWFramesContext *VAR_6, AVFrame *VAR_7, const AVFrame *VAR_8,
                        int VAR_9)
{
    CVPixelBufferRef VAR_10 = (CVPixelBufferRef)VAR_8->data[3];
    OSType VAR_11 = FUNC_5(VAR_10);
    CVReturn VAR_12;
    uint32_t VAR_13 = 0;
    int VAR_14;
    int VAR_15;
    enum AVPixelFormat VAR_16;

    VAR_16 = FUNC_13(VAR_11);
    if (VAR_7->format != VAR_16) {
        FUNC_12(VAR_6, VAR_2, "Unsupported or mismatching pixel format: %s\n",
               FUNC_11(VAR_11));
        return VAR_0;
    }

    if (FUNC_7(VAR_10) != VAR_6->width ||
        FUNC_4(VAR_10) != VAR_6->height) {
        FUNC_12(VAR_6, VAR_2, "Inconsistent frame dimensions.\n");
        return VAR_0;
    }

    if (VAR_9 == VAR_1)
        VAR_13 = VAR_3;

    VAR_12 = FUNC_9(VAR_10, VAR_13);
    if (VAR_12 != VAR_4) {
        FUNC_12(VAR_6, VAR_2, "Error locking the pixel buffer.\n");
        return VAR_0;
    }

    if (FUNC_8(VAR_10)) {
        int VAR_17 = FUNC_6(VAR_10);
        for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
            VAR_7->data[VAR_15] = FUNC_1(VAR_10, VAR_15);
            VAR_7->linesize[VAR_15] = FUNC_3(VAR_10, VAR_15);
        }
    } else {
        VAR_7->data[0] = FUNC_0(VAR_10);
        VAR_7->linesize[0] = FUNC_2(VAR_10);
    }

    VAR_14 = FUNC_14(VAR_8->hw_frames_ctx, VAR_7, VAR_8, VAR_5,
                                (void *)(uintptr_t)VAR_13);
    if (VAR_14 < 0)
        goto unlock;

    return 0;

unlock:
    FUNC_10(VAR_10, VAR_13);
    return VAR_14;
}
