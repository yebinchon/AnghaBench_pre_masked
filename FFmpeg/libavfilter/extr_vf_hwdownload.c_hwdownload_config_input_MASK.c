
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int hw_frames_ctx; TYPE_3__* dst; } ;
struct TYPE_8__ {TYPE_6__* hwframes_ref; int * hwframes; } ;
typedef TYPE_1__ HWDownloadContext ;
typedef int AVHWFramesContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__**) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    HWDownloadContext *VAR_5 = VAR_4->priv;

    FUNC_2(&VAR_5->hwframes_ref);

    if (!VAR_3->hw_frames_ctx) {
        FUNC_3(VAR_5, VAR_0, "The input must have a hardware frame "
               "reference.\n");
        return FUNC_0(VAR_1);
    }

    VAR_5->hwframes_ref = FUNC_1(VAR_3->hw_frames_ctx);
    if (!VAR_5->hwframes_ref)
        return FUNC_0(VAR_2);

    VAR_5->hwframes = (AVHWFramesContext*)VAR_5->hwframes_ref->data;

    return 0;
}
