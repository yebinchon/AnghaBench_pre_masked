
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int lock_ctx; int (* unlock ) (int ) ;int device_context; int (* lock ) (int ) ;} ;
struct TYPE_19__ {scalar_t__ format; int* linesize; int ** data; TYPE_3__* hw_frames_ctx; int height; int width; } ;
struct TYPE_18__ {scalar_t__ sw_format; TYPE_2__* internal; TYPE_1__* device_ctx; } ;
struct TYPE_17__ {scalar_t__ staging_texture; } ;
struct TYPE_16__ {int * data; } ;
struct TYPE_15__ {TYPE_4__* priv; } ;
struct TYPE_14__ {TYPE_7__* hwctx; } ;
typedef int ID3D11Texture2D ;
typedef int ID3D11Resource ;
typedef scalar_t__ HRESULT ;
typedef int D3D11_TEXTURE2D_DESC ;
typedef int D3D11_MAPPED_SUBRESOURCE ;
typedef TYPE_4__ D3D11VAFramesContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef TYPE_6__ const AVFrame ;
typedef TYPE_7__ AVD3D11VADeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int,int ,int ,int ,int *,int,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int **,int*,int const**,int*,scalar_t__,int,int) ;
 int FUNC_8 (TYPE_5__*,int ,char*,long) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (int **,int*,TYPE_5__*,int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(AVHWFramesContext *VAR_6, AVFrame *VAR_7,
                                 const AVFrame *VAR_8)
{
    AVD3D11VADeviceContext *VAR_9 = VAR_6->device_ctx->hwctx;
    D3D11VAFramesContext *VAR_10 = VAR_6->internal->priv;
    int VAR_11 = VAR_8->format == VAR_2;
    const AVFrame *VAR_12 = VAR_11 ? VAR_8 : VAR_7;
    const AVFrame *VAR_13 = VAR_11 ? VAR_7 : VAR_8;

    ID3D11Resource *VAR_14 = (ID3D11Resource *)(ID3D11Texture2D *)VAR_12->data[0];
    int VAR_15 = (intptr_t)VAR_12->data[1];
    ID3D11Resource *VAR_16;
    int VAR_17 = FUNC_2(VAR_7->width, VAR_8->width);
    int VAR_18 = FUNC_2(VAR_7->height, VAR_8->height);
    uint8_t *VAR_19[4];
    int VAR_20[4];
    D3D11_TEXTURE2D_DESC VAR_21;
    D3D11_MAPPED_SUBRESOURCE VAR_22;
    HRESULT VAR_23;

    if (VAR_12->hw_frames_ctx->data != (uint8_t *)VAR_6 || VAR_13->format != VAR_6->sw_format)
        return FUNC_0(VAR_5);

    VAR_9->lock(VAR_9->lock_ctx);

    if (!VAR_10->staging_texture) {
        int VAR_24 = FUNC_9(VAR_6);
        if (VAR_24 < 0)
            return VAR_24;
    }

    VAR_16 = (ID3D11Resource *)VAR_10->staging_texture;

    FUNC_6(VAR_10->staging_texture, &VAR_21);

    if (VAR_11) {
        FUNC_3(VAR_9->device_context,
                                                  VAR_16, 0, 0, 0, 0,
                                                  VAR_14, VAR_15, ((void*)0));

        VAR_23 = FUNC_4(VAR_9->device_context,
                                     VAR_16, 0, VAR_3, 0, &VAR_22);
        if (FUNC_1(VAR_23))
            goto map_failed;

        FUNC_10(VAR_19, VAR_20, VAR_6, &VAR_21, &VAR_22);

        FUNC_7(VAR_7->data, VAR_7->linesize, (const uint8_t **)VAR_19, VAR_20,
                      VAR_6->sw_format, VAR_17, VAR_18);

        FUNC_5(VAR_9->device_context, VAR_16, 0);
    } else {
        VAR_23 = FUNC_4(VAR_9->device_context,
                                     VAR_16, 0, VAR_4, 0, &VAR_22);
        if (FUNC_1(VAR_23))
            goto map_failed;

        FUNC_10(VAR_19, VAR_20, VAR_6, &VAR_21, &VAR_22);

        FUNC_7(VAR_19, VAR_20, (const uint8_t **)VAR_8->data, VAR_8->linesize,
                      VAR_6->sw_format, VAR_17, VAR_18);

        FUNC_5(VAR_9->device_context, VAR_16, 0);

        FUNC_3(VAR_9->device_context,
                                                  VAR_14, VAR_15, 0, 0, 0,
                                                  VAR_16, 0, ((void*)0));
    }

    VAR_9->unlock(VAR_9->lock_ctx);
    return 0;

map_failed:
    FUNC_8(VAR_6, VAR_1, "Unable to lock D3D11VA surface (%lx)\n", (long)VAR_23);
    VAR_9->unlock(VAR_9->lock_ctx);
    return VAR_0;
}
