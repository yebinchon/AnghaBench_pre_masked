
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVHWFrameTransferDirection { ____Placeholder_AVHWFrameTransferDirection } AVHWFrameTransferDirection ;
struct TYPE_7__ {int nb_pix_fmts; int pix_fmts; } ;
typedef TYPE_2__ VDPAUFramesContext ;
struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_3__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(AVHWFramesContext *VAR_3,
                                      enum AVHWFrameTransferDirection VAR_4,
                                      enum AVPixelFormat **VAR_5)
{
    VDPAUFramesContext *VAR_6 = VAR_3->internal->priv;

    enum AVPixelFormat *VAR_7;

    if (VAR_6->nb_pix_fmts == 1) {
        FUNC_1(VAR_3, VAR_0,
               "No target formats are supported for this chroma type\n");
        return FUNC_0(VAR_2);
    }

    VAR_7 = FUNC_2(VAR_6->nb_pix_fmts, sizeof(*VAR_7));
    if (!VAR_7)
        return FUNC_0(VAR_1);

    FUNC_3(VAR_7, VAR_6->pix_fmts, sizeof(*VAR_7) * (VAR_6->nb_pix_fmts));
    *VAR_5 = VAR_7;

    return 0;
}
