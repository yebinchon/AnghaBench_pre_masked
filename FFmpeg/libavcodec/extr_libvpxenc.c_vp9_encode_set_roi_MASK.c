
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int roi_map; int ref_frame; } ;
typedef TYPE_1__ vpx_roi_map_t ;
struct TYPE_11__ {scalar_t__ aq_mode; int cpu_used; scalar_t__ deadline; int roi_warned; int encoder; } ;
typedef TYPE_2__ VPxContext ;
struct TYPE_12__ {TYPE_2__* priv_data; } ;
typedef int AVFrameSideData ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (TYPE_3__*,int const*,int,int,TYPE_1__*,int const,int const) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_1__*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_5, int VAR_6, int VAR_7, const AVFrameSideData *VAR_8)
{
    VPxContext *VAR_9 = VAR_5->priv_data;
    if (!VAR_9->roi_warned) {
        VAR_9->roi_warned = 1;
        FUNC_5(VAR_5, VAR_1, "ROI is not supported, please upgrade libvpx to version >= 1.8.1. "
                                      "You may need to rebuild ffmpeg.\n");
    }
    return 0;
}
