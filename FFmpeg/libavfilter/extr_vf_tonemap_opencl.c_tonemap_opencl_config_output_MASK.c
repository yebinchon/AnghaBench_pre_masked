
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ output_format; } ;
struct TYPE_9__ {scalar_t__ format; TYPE_1__ ocf; } ;
typedef TYPE_2__ TonemapOpenCLContext ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {TYPE_4__* src; } ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->src;
    TonemapOpenCLContext *VAR_8 = VAR_7->priv;
    int VAR_9;
    if (VAR_8->format == VAR_2)
        FUNC_1(VAR_7, VAR_1, "format not set, use default format NV12\n");
    else {
      if (VAR_8->format != VAR_4 &&
          VAR_8->format != VAR_3) {
        FUNC_1(VAR_7, VAR_0, "unsupported output format,"
               "only p010/nv12 supported now\n");
        return FUNC_0(VAR_5);
      }
    }

    VAR_8->ocf.output_format = VAR_8->format == VAR_2 ? VAR_3 : VAR_8->format;
    VAR_9 = FUNC_2(VAR_6);
    if (VAR_9 < 0)
        return VAR_9;

    return 0;
}
