
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {scalar_t__ format; int ** data; int * linesize; int hw_frames_ctx; } ;
struct TYPE_16__ {scalar_t__ pBits; int Pitch; } ;
struct TYPE_15__ {int Height; } ;
struct TYPE_14__ {scalar_t__ palette_dummy; } ;
typedef int IDirect3DSurface9 ;
typedef int HRESULT ;
typedef TYPE_1__ DXVA2Mapping ;
typedef TYPE_2__ D3DSURFACE_DESC ;
typedef TYPE_3__ D3DLOCKED_RECT ;
typedef int AVHWFramesContext ;
typedef TYPE_4__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_3__*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (int **,scalar_t__,int ,int *,int *) ;
 int FUNC_7 (int *,int ,char*) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (int ,TYPE_4__*,TYPE_4__ const*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(AVHWFramesContext *VAR_9, AVFrame *VAR_10, const AVFrame *VAR_11,
                           int VAR_12)
{
    IDirect3DSurface9 *VAR_13 = (IDirect3DSurface9*)VAR_11->data[3];
    DXVA2Mapping *VAR_14;
    D3DSURFACE_DESC VAR_15;
    D3DLOCKED_RECT VAR_16;
    HRESULT VAR_17;
    int VAR_18, VAR_19, VAR_20;
    int VAR_21 = 0;

    VAR_20 = FUNC_9(VAR_10->format);

    VAR_17 = FUNC_2(VAR_13, &VAR_15);
    if (FUNC_1(VAR_17)) {
        FUNC_7(VAR_9, VAR_3, "Error getting a surface description\n");
        return VAR_0;
    }

    if (!(VAR_12 & VAR_2))
        VAR_21 |= VAR_6;
    if (VAR_12 & VAR_1)
        VAR_21 |= VAR_5;

    VAR_17 = FUNC_3(VAR_13, &VAR_16, ((void*)0), VAR_21);
    if (FUNC_1(VAR_17)) {
        FUNC_7(VAR_9, VAR_3, "Unable to lock DXVA2 surface\n");
        return VAR_0;
    }

    VAR_14 = FUNC_8(sizeof(*VAR_14));
    if (!VAR_14) {
        VAR_19 = FUNC_0(VAR_7);
        goto fail;
    }

    VAR_19 = FUNC_10(VAR_11->hw_frames_ctx, VAR_10, VAR_11,
                                VAR_8, VAR_14);
    if (VAR_19 < 0) {
        FUNC_5(&VAR_14);
        goto fail;
    }

    for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
        VAR_10->linesize[VAR_18] = VAR_16.Pitch;

    FUNC_6(VAR_10->data, VAR_10->format, VAR_15.Height,
                           (uint8_t*)VAR_16.pBits, VAR_10->linesize);

    if (VAR_10->format == VAR_4)
        VAR_10->data[1] = (uint8_t*)VAR_14->palette_dummy;

    return 0;
fail:
    FUNC_4(VAR_13);
    return VAR_19;
}
