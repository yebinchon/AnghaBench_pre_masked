
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {int hw_frames_ctx; } ;
struct TYPE_16__ {scalar_t__ hw_device_ctx; scalar_t__ hw_frames_ctx; TYPE_3__* hwaccel_context; } ;
struct TYPE_15__ {int session; } ;
struct TYPE_12__ {int session; } ;
struct TYPE_13__ {scalar_t__ IOPattern; } ;
struct TYPE_14__ {TYPE_11__ internal_qs; int session; int load_plugins; TYPE_8__ frames_ctx; TYPE_1__ param; } ;
typedef TYPE_2__ QSVEncContext ;
typedef TYPE_3__ AVQSVContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_11__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int *,scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int *,TYPE_8__*,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3, QSVEncContext *VAR_4)
{
    int VAR_5;

    if (VAR_3->hwaccel_context) {
        AVQSVContext *VAR_6 = VAR_3->hwaccel_context;
        VAR_4->session = VAR_6->session;
    } else if (VAR_3->hw_frames_ctx) {
        VAR_4->frames_ctx.hw_frames_ctx = FUNC_1(VAR_3->hw_frames_ctx);
        if (!VAR_4->frames_ctx.hw_frames_ctx)
            return FUNC_0(VAR_0);

        VAR_5 = FUNC_5(VAR_3, &VAR_4->internal_qs.session,
                                         &VAR_4->frames_ctx, VAR_4->load_plugins,
                                         VAR_4->param.IOPattern == VAR_2,
                                         VAR_1);
        if (VAR_5 < 0) {
            FUNC_2(&VAR_4->frames_ctx.hw_frames_ctx);
            return VAR_5;
        }

        VAR_4->session = VAR_4->internal_qs.session;
    } else if (VAR_3->hw_device_ctx) {
        VAR_5 = FUNC_4(VAR_3, &VAR_4->internal_qs.session,
                                         VAR_3->hw_device_ctx, VAR_4->load_plugins,
                                         VAR_1);
        if (VAR_5 < 0)
            return VAR_5;

        VAR_4->session = VAR_4->internal_qs.session;
    } else {
        VAR_5 = FUNC_3(VAR_3, &VAR_4->internal_qs,
                                           VAR_4->load_plugins, VAR_1);
        if (VAR_5 < 0)
            return VAR_5;

        VAR_4->session = VAR_4->internal_qs.session;
    }

    return 0;
}
