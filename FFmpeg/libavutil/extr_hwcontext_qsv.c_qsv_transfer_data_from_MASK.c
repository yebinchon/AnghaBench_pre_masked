
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int * mfxSyncPoint ;
typedef scalar_t__ mfxStatus ;
struct TYPE_20__ {int member_0; } ;
struct TYPE_21__ {int Info; TYPE_2__ member_0; } ;
typedef TYPE_3__ mfxFrameSurface1 ;
struct TYPE_24__ {scalar_t__* data; } ;
struct TYPE_23__ {TYPE_1__* internal; } ;
struct TYPE_22__ {int session_download_init; scalar_t__ session_download; scalar_t__ child_frames_ref; int session_lock; int session_cond; } ;
struct TYPE_19__ {TYPE_4__* priv; } ;
typedef TYPE_4__ QSVFramesContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef TYPE_6__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_3__*,TYPE_3__*,int *,int **) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_5__*,scalar_t__*,int ) ;
 int FUNC_12 (TYPE_5__*,TYPE_6__*,TYPE_6__ const*) ;

__attribute__((used)) static int FUNC_13(AVHWFramesContext *VAR_5, AVFrame *VAR_6,
                                  const AVFrame *VAR_7)
{
    QSVFramesContext *VAR_8 = VAR_5->internal->priv;
    mfxFrameSurface1 VAR_9 = { 0 };
    mfxFrameSurface1 *VAR_10 = (mfxFrameSurface1*)VAR_7->data[3];

    mfxSyncPoint VAR_11 = ((void*)0);
    mfxStatus VAR_12;
    int VAR_13 = 0;

    while (!VAR_8->session_download_init && !VAR_8->session_download && !VAR_13) {



            if (!VAR_8->session_download_init) {
                VAR_13 = FUNC_11(VAR_5, &VAR_8->session_download, 0);
                if (VAR_8->session_download)
                    VAR_8->session_download_init = 1;
            }
    }

    if (VAR_13 < 0)
        return VAR_13;

    if (!VAR_8->session_download) {
        if (VAR_8->child_frames_ref)
            return FUNC_12(VAR_5, VAR_6, VAR_7);

        FUNC_3(VAR_5, VAR_1, "Surface download not possible\n");
        return FUNC_0(VAR_2);
    }

    VAR_9.Info = VAR_10->Info;
    FUNC_5(VAR_6, &VAR_9);

    do {
        VAR_12 = FUNC_2(VAR_8->session_download, VAR_10, &VAR_9, ((void*)0), &VAR_11);
        if (VAR_12 == VAR_3)
            FUNC_4(1);
    } while (VAR_12 == VAR_3);

    if (VAR_12 < 0 || !VAR_11) {
        FUNC_3(VAR_5, VAR_1, "Error downloading the surface\n");
        return VAR_0;
    }

    do {
        VAR_12 = FUNC_1(VAR_8->session_download, VAR_11, 1000);
    } while (VAR_12 == VAR_4);
    if (VAR_12 < 0) {
        FUNC_3(VAR_5, VAR_1, "Error synchronizing the operation: %d\n", VAR_12);
        return VAR_0;
    }

    return 0;
}
