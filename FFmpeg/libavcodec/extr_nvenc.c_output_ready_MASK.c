
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ max_b_frames; TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__* initial_pts; int async_depth; int output_surface_queue; int output_surface_ready_queue; } ;
typedef int NvencSurface ;
typedef TYPE_1__ NvencContext ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, int VAR_2)
{
    NvencContext *VAR_3 = VAR_1->priv_data;
    int VAR_4, VAR_5;



    if (!VAR_2 && VAR_1->max_b_frames > 0 &&
        (VAR_3->initial_pts[0] == VAR_0 || VAR_3->initial_pts[1] == VAR_0))
        return 0;

    VAR_4 = FUNC_0(VAR_3->output_surface_ready_queue) / sizeof(NvencSurface*);
    VAR_5 = FUNC_0(VAR_3->output_surface_queue) / sizeof(NvencSurface*);
    if (VAR_2)
        return VAR_4 > 0;
    return (VAR_4 > 0) && (VAR_4 + VAR_5 >= VAR_3->async_depth);
}
