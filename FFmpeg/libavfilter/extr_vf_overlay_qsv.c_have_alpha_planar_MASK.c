
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {int format; TYPE_1__* hw_frames_ctx; } ;
struct TYPE_9__ {int sw_format; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVFilterLink ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_2)
{
    enum AVPixelFormat VAR_3 = VAR_2->format;
    const AVPixFmtDescriptor *VAR_4;
    AVHWFramesContext *VAR_5;

    if (VAR_2->format == VAR_1) {
        VAR_5 = (AVHWFramesContext *)VAR_2->hw_frames_ctx->data;
        VAR_3 = VAR_5->sw_format;
    }

    VAR_4 = FUNC_0(VAR_3);
    if (!VAR_4)
        return 0;

    return !!(VAR_4->flags & VAR_0);
}
