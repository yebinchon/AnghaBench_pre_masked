
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int VSTransformData ;
typedef int VSManyLocalMotions ;
struct TYPE_16__ {int bytesPerPixel; scalar_t__ log2ChromaH; int log2ChromaW; } ;
typedef TYPE_1__ VSFrameInfo ;
struct TYPE_21__ {char* modName; scalar_t__ camPathAlgo; int optZoom; int interpolType; int zoomSpeed; int zoom; scalar_t__ invert; scalar_t__ relative; scalar_t__ crop; int maxAngle; int maxShift; int smoothing; scalar_t__ smoothZoom; scalar_t__ storeTransforms; scalar_t__ simpleMotionCalculation; scalar_t__ verbose; } ;
struct TYPE_17__ {int trans; int input; TYPE_6__ conf; scalar_t__ debug; scalar_t__ tripod; int td; } ;
typedef TYPE_2__ TransformContext ;
struct TYPE_20__ {TYPE_2__* priv; } ;
struct TYPE_19__ {int format; int h; int w; TYPE_5__* dst; } ;
struct TYPE_18__ {int flags; scalar_t__ log2_chroma_h; int log2_chroma_w; int name; } ;
typedef int FILE ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_5__*,int ,char*,...) ;
 TYPE_3__* FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_6__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_6__*,int *) ;

__attribute__((used)) static int FUNC_15(AVFilterLink *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_8->dst;
    TransformContext *VAR_10 = VAR_9->priv;
    FILE *VAR_11;

    const AVPixFmtDescriptor *VAR_12 = FUNC_3(VAR_8->format);
    int VAR_13 = VAR_12->flags & VAR_2;

    VSTransformData *VAR_14 = &(VAR_10->td);

    VSFrameInfo VAR_15;
    VSFrameInfo VAR_16;

    if (!FUNC_8(&VAR_15, VAR_8->w, VAR_8->h,
                         FUNC_5(VAR_9, VAR_8->format)) ||
        !FUNC_8(&VAR_16, VAR_8->w, VAR_8->h,
                         FUNC_5(VAR_9, VAR_8->format))) {
        FUNC_2(VAR_9, VAR_0, "unknown pixel format: %i (%s)",
               VAR_8->format, VAR_12->name);
        return FUNC_0(VAR_3);
    }

    if ((!VAR_13 && VAR_15.bytesPerPixel != FUNC_1(VAR_12)/8) ||
        VAR_15.log2ChromaW != VAR_12->log2_chroma_w ||
        VAR_15.log2ChromaH != VAR_12->log2_chroma_h) {
        FUNC_2(VAR_9, VAR_0, "pixel-format error: bpp %i<>%i  ",
               VAR_15.bytesPerPixel, FUNC_1(VAR_12)/8);
        FUNC_2(VAR_9, VAR_0, "chroma_subsampl: w: %i<>%i  h: %i<>%i\n",
               VAR_15.log2ChromaW, VAR_12->log2_chroma_w,
               VAR_15.log2ChromaH, VAR_12->log2_chroma_h);
        return FUNC_0(VAR_3);
    }


    VAR_10->conf.modName = "vidstabtransform";
    VAR_10->conf.verbose = 1 + VAR_10->debug;
    if (VAR_10->tripod) {
        FUNC_2(VAR_9, VAR_1, "Virtual tripod mode: relative=0, smoothing=0\n");
        VAR_10->conf.relative = 0;
        VAR_10->conf.smoothing = 0;
    }
    VAR_10->conf.simpleMotionCalculation = 0;
    VAR_10->conf.storeTransforms = VAR_10->debug;
    VAR_10->conf.smoothZoom = 0;

    if (FUNC_13(VAR_14, &VAR_10->conf, &VAR_15, &VAR_16) != VAR_6) {
        FUNC_2(VAR_9, VAR_0, "initialization of vid.stab transform failed, please report a BUG\n");
        return FUNC_0(VAR_3);
    }

    FUNC_14(&VAR_10->conf, VAR_14);
    FUNC_2(VAR_9, VAR_1, "Video transformation/stabilization settings (pass 2/2):\n");
    FUNC_2(VAR_9, VAR_1, "    input     = %s\n", VAR_10->input);
    FUNC_2(VAR_9, VAR_1, "    smoothing = %d\n", VAR_10->conf.smoothing);
    FUNC_2(VAR_9, VAR_1, "    optalgo   = %s\n",
           VAR_10->conf.camPathAlgo == VAR_5 ? "opt" :
           (VAR_10->conf.camPathAlgo == VAR_4 ? "gauss" : "avg"));
    FUNC_2(VAR_9, VAR_1, "    maxshift  = %d\n", VAR_10->conf.maxShift);
    FUNC_2(VAR_9, VAR_1, "    maxangle  = %f\n", VAR_10->conf.maxAngle);
    FUNC_2(VAR_9, VAR_1, "    crop      = %s\n", VAR_10->conf.crop ? "Black" : "Keep");
    FUNC_2(VAR_9, VAR_1, "    relative  = %s\n", VAR_10->conf.relative ? "True": "False");
    FUNC_2(VAR_9, VAR_1, "    invert    = %s\n", VAR_10->conf.invert ? "True" : "False");
    FUNC_2(VAR_9, VAR_1, "    zoom      = %f\n", VAR_10->conf.zoom);
    FUNC_2(VAR_9, VAR_1, "    optzoom   = %s\n",
           VAR_10->conf.optZoom == 1 ? "Static (1)" : (VAR_10->conf.optZoom == 2 ? "Dynamic (2)" : "Off (0)"));
    if (VAR_10->conf.optZoom == 2)
        FUNC_2(VAR_9, VAR_1, "    zoomspeed = %g\n", VAR_10->conf.zoomSpeed);
    FUNC_2(VAR_9, VAR_1, "    interpol  = %s\n", FUNC_7(VAR_10->conf.interpolType));

    VAR_11 = FUNC_6(VAR_10->input, "r");
    if (!VAR_11) {
        int VAR_17 = FUNC_0(VAR_7);
        FUNC_2(VAR_9, VAR_0, "cannot open input file %s\n", VAR_10->input);
        return VAR_17;
    } else {
        VSManyLocalMotions VAR_18;
        if (FUNC_11(VAR_11, &VAR_18) == VAR_6) {

            if (FUNC_9(VAR_14, &VAR_18, &VAR_10->trans) != VAR_6) {
                FUNC_2(VAR_9, VAR_0, "calculating transformations failed\n");
                return FUNC_0(VAR_3);
            }
        } else {
            if (!FUNC_12(VAR_14, VAR_11, &VAR_10->trans)) {
                FUNC_2(VAR_9, VAR_0, "error parsing input file %s\n", VAR_10->input);
                return FUNC_0(VAR_3);
            }
        }
    }
    FUNC_4(VAR_11);

    if (FUNC_10(VAR_14, &VAR_10->trans) != VAR_6) {
        FUNC_2(VAR_9, VAR_0, "error while preprocessing transforms\n");
        return FUNC_0(VAR_3);
    }


    return 0;
}
