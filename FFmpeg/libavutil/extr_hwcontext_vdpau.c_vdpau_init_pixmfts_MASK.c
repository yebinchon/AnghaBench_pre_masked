
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ VdpStatus ;
typedef scalar_t__ VdpBool ;
struct TYPE_10__ {scalar_t__ pix_fmt; int vdpau_fmt; } ;
typedef TYPE_2__ VDPAUPixFmtMap ;
struct TYPE_11__ {scalar_t__** pix_fmts; scalar_t__ (* get_transfer_caps ) (int ,int ,int ,scalar_t__*) ;int* nb_pix_fmts; } ;
typedef TYPE_3__ VDPAUDeviceContext ;
struct TYPE_14__ {int chroma_type; TYPE_2__* map; } ;
struct TYPE_13__ {TYPE_1__* internal; TYPE_4__* hwctx; } ;
struct TYPE_12__ {int device; } ;
struct TYPE_9__ {TYPE_3__* priv; } ;
typedef TYPE_4__ AVVDPAUDeviceContext ;
typedef TYPE_5__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__**) ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__*) ;
 TYPE_6__* VAR_3 ;

__attribute__((used)) static int FUNC_5(AVHWDeviceContext *VAR_4)
{
    AVVDPAUDeviceContext *VAR_5 = VAR_4->hwctx;
    VDPAUDeviceContext *VAR_6 = VAR_4->internal->priv;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_6->pix_fmts); VAR_7++) {
        const VDPAUPixFmtMap *VAR_8 = VAR_3[VAR_7].map;
        int VAR_9;

        VAR_9 = FUNC_3(VAR_8);
        VAR_6->pix_fmts[VAR_7] = FUNC_2(VAR_9 + 1, sizeof(*VAR_6->pix_fmts[VAR_7]));
        if (!VAR_6->pix_fmts[VAR_7])
            return FUNC_0(VAR_1);

        VAR_9 = 0;
        while (VAR_8->pix_fmt != VAR_0) {
            VdpBool VAR_10;
            VdpStatus VAR_11 = VAR_6->get_transfer_caps(VAR_5->device, VAR_3[VAR_7].chroma_type,
                                                    VAR_8->vdpau_fmt, &VAR_10);
            if (VAR_11 == VAR_2 && VAR_10)
                VAR_6->pix_fmts[VAR_7][VAR_9++] = VAR_8->pix_fmt;
            VAR_8++;
        }
        VAR_6->pix_fmts[VAR_7][VAR_9++] = VAR_0;
        VAR_6->nb_pix_fmts[VAR_7] = VAR_9;
    }

    return 0;
}
