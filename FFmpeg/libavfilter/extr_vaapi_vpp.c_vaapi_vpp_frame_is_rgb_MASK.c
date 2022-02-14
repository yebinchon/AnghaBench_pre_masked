
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ format; TYPE_1__* hw_frames_ctx; } ;
struct TYPE_10__ {int sw_format; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVFrame ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const AVFrame *VAR_2)
{
    const AVHWFramesContext *VAR_3;
    const AVPixFmtDescriptor *VAR_4;
    FUNC_0(VAR_2->format == VAR_1 &&
               VAR_2->hw_frames_ctx);
    VAR_3 = (const AVHWFramesContext*)VAR_2->hw_frames_ctx->data;
    VAR_4 = FUNC_1(VAR_3->sw_format);
    FUNC_0(VAR_4);
    return !!(VAR_4->flags & VAR_0);
}
