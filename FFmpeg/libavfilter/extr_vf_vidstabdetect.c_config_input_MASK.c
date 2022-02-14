
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int VSMotionDetect ;
struct TYPE_15__ {int bytesPerPixel; scalar_t__ log2ChromaW; scalar_t__ log2ChromaH; } ;
typedef TYPE_1__ VSFrameInfo ;
struct TYPE_20__ {int algo; char* modName; int show; int virtualTripod; int contrastThreshold; int stepSize; int accuracy; int shakiness; } ;
struct TYPE_19__ {TYPE_2__* priv; } ;
struct TYPE_18__ {int format; int h; int w; TYPE_5__* dst; } ;
struct TYPE_17__ {int flags; scalar_t__ log2_chroma_w; scalar_t__ log2_chroma_h; } ;
struct TYPE_16__ {int result; int * f; TYPE_6__ conf; int md; } ;
typedef TYPE_2__ StabData ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_5__*,int ,char*,...) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_8 (int *,TYPE_6__*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    StabData *VAR_7 = VAR_6->priv;

    VSMotionDetect* VAR_8 = &(VAR_7->md);
    VSFrameInfo VAR_9;
    const AVPixFmtDescriptor *VAR_10 = FUNC_3(VAR_5->format);
    int VAR_11 = VAR_10->flags & VAR_2;

    FUNC_6(&VAR_9, VAR_5->w, VAR_5->h,
                    FUNC_4(VAR_6, VAR_5->format));
    if (!VAR_11 && VAR_9.bytesPerPixel != FUNC_1(VAR_10)/8) {
        FUNC_2(VAR_6, VAR_0, "pixel-format error: wrong bits/per/pixel, please report a BUG");
        return FUNC_0(VAR_3);
    }
    if (VAR_9.log2ChromaW != VAR_10->log2_chroma_w) {
        FUNC_2(VAR_6, VAR_0, "pixel-format error: log2_chroma_w, please report a BUG");
        return FUNC_0(VAR_3);
    }

    if (VAR_9.log2ChromaH != VAR_10->log2_chroma_h) {
        FUNC_2(VAR_6, VAR_0, "pixel-format error: log2_chroma_h, please report a BUG");
        return FUNC_0(VAR_3);
    }


    VAR_7->conf.algo = 1;
    VAR_7->conf.modName = "vidstabdetect";
    if (FUNC_8(VAR_8, &VAR_7->conf, &VAR_9) != VAR_4) {
        FUNC_2(VAR_6, VAR_0, "initialization of Motion Detection failed, please report a BUG");
        return FUNC_0(VAR_3);
    }

    FUNC_7(&VAR_7->conf, VAR_8);
    FUNC_2(VAR_6, VAR_1, "Video stabilization settings (pass 1/2):\n");
    FUNC_2(VAR_6, VAR_1, "     shakiness = %d\n", VAR_7->conf.shakiness);
    FUNC_2(VAR_6, VAR_1, "      accuracy = %d\n", VAR_7->conf.accuracy);
    FUNC_2(VAR_6, VAR_1, "      stepsize = %d\n", VAR_7->conf.stepSize);
    FUNC_2(VAR_6, VAR_1, "   mincontrast = %f\n", VAR_7->conf.contrastThreshold);
    FUNC_2(VAR_6, VAR_1, "        tripod = %d\n", VAR_7->conf.virtualTripod);
    FUNC_2(VAR_6, VAR_1, "          show = %d\n", VAR_7->conf.show);
    FUNC_2(VAR_6, VAR_1, "        result = %s\n", VAR_7->result);

    VAR_7->f = FUNC_5(VAR_7->result, "w");
    if (VAR_7->f == ((void*)0)) {
        FUNC_2(VAR_6, VAR_0, "cannot open transform file %s\n", VAR_7->result);
        return FUNC_0(VAR_3);
    } else {
        if (FUNC_9(VAR_8, VAR_7->f) != VAR_4) {
            FUNC_2(VAR_6, VAR_0, "cannot write to transform file %s\n", VAR_7->result);
            return FUNC_0(VAR_3);
        }
    }
    return 0;
}
