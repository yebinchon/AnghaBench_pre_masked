
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int widths ;
typedef int strides ;
typedef int heights ;
struct TYPE_12__ {int * session; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_14__ {scalar_t__ pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_13__ {scalar_t__ format; int color_range; scalar_t__* data; } ;
typedef scalar_t__ OSStatus ;
typedef int * CVPixelBufferRef ;
typedef scalar_t__ CVPixelBufferPoolRef ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int ,char*,...) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__ const*,int *,size_t*,size_t*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__ const*,int*,int*,size_t*,size_t*,size_t*,size_t*) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (size_t*,int ,int) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_6,
                                  const AVFrame *VAR_7,
                                  CVPixelBufferRef *VAR_8)
{
    int VAR_9;
    int VAR_10;
    size_t VAR_11 [VAR_3];
    size_t VAR_12[VAR_3];
    size_t VAR_13[VAR_3];
    int VAR_14;
    size_t VAR_15;
    CVPixelBufferPoolRef VAR_16;
    VTEncContext* VAR_17 = VAR_6->priv_data;

    if (VAR_6->pix_fmt == VAR_4) {
        FUNC_5(VAR_7->format == VAR_4);

        *VAR_8 = (CVPixelBufferRef)VAR_7->data[3];
        FUNC_5(*VAR_8);

        FUNC_1(*VAR_8);
        return 0;
    }

    FUNC_9(VAR_11, 0, sizeof(VAR_11));
    FUNC_9(VAR_12, 0, sizeof(VAR_12));
    FUNC_9(VAR_13, 0, sizeof(VAR_13));

    VAR_14 = FUNC_8(
        VAR_6,
        VAR_7,
        &VAR_10,
        &VAR_9,
        VAR_11,
        VAR_12,
        VAR_13,
        &VAR_15
    );

    if (VAR_14) {
        FUNC_6(
            VAR_6,
            VAR_1,
            "Error: Cannot convert format %d color_range %d: %d\n",
            VAR_7->format,
            VAR_7->color_range,
            VAR_14
        );

        return VAR_0;
    }

    VAR_16 = FUNC_3(VAR_17->session);
    if (!VAR_16) {




        OSStatus VAR_18;

        VAR_18 = FUNC_4(VAR_17->session);
        if (VAR_18 == VAR_5) {
            FUNC_0(VAR_17->session);
            VAR_17->session = ((void*)0);
            VAR_14 = FUNC_10(VAR_6);
            if (VAR_14 == 0)
                VAR_16 = FUNC_3(VAR_17->session);
        }
        if (!VAR_16) {
            FUNC_6(VAR_6, VAR_1, "Could not get pixel buffer pool.\n");
            return VAR_0;
        }
        else
            FUNC_6(VAR_6, VAR_2, "VT session restarted because of a "
                   "kVTInvalidSessionErr error.\n");
    }

    VAR_14 = FUNC_2(((void*)0),
                                                VAR_16,
                                                VAR_8);


    if (VAR_14) {
        FUNC_6(VAR_6, VAR_1, "Could not create pixel buffer from pool: %d.\n", VAR_14);
        return VAR_0;
    }

    VAR_14 = FUNC_7(VAR_6, VAR_7, *VAR_8, VAR_13, VAR_12);
    if (VAR_14) {
        FUNC_0(*VAR_8);
        *VAR_8 = ((void*)0);
        return VAR_14;
    }

    return 0;
}
