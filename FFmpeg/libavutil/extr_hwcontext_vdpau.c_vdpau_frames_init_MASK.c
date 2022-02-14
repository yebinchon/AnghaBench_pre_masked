
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VdpVideoSurface ;
struct TYPE_15__ {int chroma_idx; int nb_pix_fmts; int put_data; int get_data; int pix_fmts; int chroma_type; } ;
typedef TYPE_4__ VDPAUFramesContext ;
struct TYPE_16__ {int* nb_pix_fmts; int put_data; int get_data; int * pix_fmts; } ;
typedef TYPE_5__ VDPAUDeviceContext ;
struct TYPE_18__ {scalar_t__ frames_sw_format; int chroma_type; } ;
struct TYPE_17__ {scalar_t__ sw_format; TYPE_3__* internal; int pool; TYPE_2__* device_ctx; } ;
struct TYPE_14__ {int pool_internal; TYPE_4__* priv; } ;
struct TYPE_13__ {TYPE_1__* internal; } ;
struct TYPE_12__ {TYPE_5__* priv; } ;
typedef TYPE_6__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int,TYPE_6__*,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_6__*,int ,char*,int ) ;
 TYPE_7__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(AVHWFramesContext *VAR_5)
{
    VDPAUDeviceContext *VAR_6 = VAR_5->device_ctx->internal->priv;
    VDPAUFramesContext *VAR_7 = VAR_5->internal->priv;

    int VAR_8;

    for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_3); VAR_8++) {
        if (VAR_3[VAR_8].frames_sw_format == VAR_5->sw_format) {
            VAR_7->chroma_type = VAR_3[VAR_8].chroma_type;
            VAR_7->chroma_idx = VAR_8;
            VAR_7->pix_fmts = VAR_6->pix_fmts[VAR_8];
            VAR_7->nb_pix_fmts = VAR_6->nb_pix_fmts[VAR_8];
            break;
        }
    }
    if (VAR_7->nb_pix_fmts < 2) {
        FUNC_4(VAR_5, VAR_0, "Unsupported sw format: %s\n",
               FUNC_3(VAR_5->sw_format));
        return FUNC_0(VAR_2);
    }

    if (!VAR_5->pool) {
        VAR_5->internal->pool_internal = FUNC_2(sizeof(VdpVideoSurface), VAR_5,
                                                            VAR_4, ((void*)0));
        if (!VAR_5->internal->pool_internal)
            return FUNC_0(VAR_1);
    }

    VAR_7->get_data = VAR_6->get_data;
    VAR_7->put_data = VAR_6->put_data;

    return 0;
}
