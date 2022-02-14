
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * mfxSession ;
struct TYPE_7__ {int * session; } ;
struct TYPE_6__ {int hw_frames_ctx; } ;
struct TYPE_5__ {scalar_t__ gpu_copy; int iopattern; int * session; TYPE_4__ internal_qs; int load_plugins; TYPE_3__ frames_ctx; } ;
typedef TYPE_1__ QSVContext ;
typedef int AVCodecContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,TYPE_4__*,int ,scalar_t__) ;
 int FUNC_7 (int *,int **,int *,int ,scalar_t__) ;
 int FUNC_8 (int *,int **,TYPE_3__*,int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_5, QSVContext *VAR_6, mfxSession VAR_7,
                            AVBufferRef *VAR_8, AVBufferRef *VAR_9)
{
    int VAR_10;

    if (VAR_6->gpu_copy == VAR_2 &&
        !(VAR_6->iopattern & VAR_4))
        FUNC_5(VAR_5, VAR_0, "GPU-accelerated memory copy "
                        "only works in MFX_IOPATTERN_OUT_SYSTEM_MEMORY.\n");
    if (VAR_7) {
        VAR_6->session = VAR_7;
    } else if (VAR_8) {
        if (VAR_6->internal_qs.session) {
            FUNC_1(VAR_6->internal_qs.session);
            VAR_6->internal_qs.session = ((void*)0);
        }
        FUNC_4(&VAR_6->frames_ctx.hw_frames_ctx);

        VAR_6->frames_ctx.hw_frames_ctx = FUNC_3(VAR_8);
        if (!VAR_6->frames_ctx.hw_frames_ctx)
            return FUNC_0(VAR_1);

        VAR_10 = FUNC_8(VAR_5, &VAR_6->internal_qs.session,
                                         &VAR_6->frames_ctx, VAR_6->load_plugins,
                                         VAR_6->iopattern == VAR_3,
                                         VAR_6->gpu_copy);
        if (VAR_10 < 0) {
            FUNC_4(&VAR_6->frames_ctx.hw_frames_ctx);
            return VAR_10;
        }

        VAR_6->session = VAR_6->internal_qs.session;
    } else if (VAR_9) {
        if (VAR_6->internal_qs.session) {
            FUNC_1(VAR_6->internal_qs.session);
            VAR_6->internal_qs.session = ((void*)0);
        }

        VAR_10 = FUNC_7(VAR_5, &VAR_6->internal_qs.session,
                                         VAR_9, VAR_6->load_plugins, VAR_6->gpu_copy);
        if (VAR_10 < 0)
            return VAR_10;

        VAR_6->session = VAR_6->internal_qs.session;
    } else {
        if (!VAR_6->internal_qs.session) {
            VAR_10 = FUNC_6(VAR_5, &VAR_6->internal_qs,
                                               VAR_6->load_plugins, VAR_6->gpu_copy);
            if (VAR_10 < 0)
                return VAR_10;
        }

        VAR_6->session = VAR_6->internal_qs.session;
    }


    FUNC_2(VAR_6->session);

    return 0;
}
