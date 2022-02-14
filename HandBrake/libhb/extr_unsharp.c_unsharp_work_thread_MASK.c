
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int unsharp_thread_context_t ;
typedef int unsharp_plane_context_t ;
struct TYPE_13__ {int color_range; int color_matrix; int color_transfer; int color_prim; int pix_fmt; } ;
struct TYPE_16__ {int ** thread_ctx; int * plane_ctx; TYPE_2__ output; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_17__ {TYPE_5__* private_data; } ;
typedef TYPE_6__ hb_filter_object_t ;
struct TYPE_15__ {int flags; } ;
struct TYPE_12__ {int color_range; int color_matrix; int color_transfer; int color_prim; int height; int width; } ;
struct TYPE_18__ {TYPE_4__ s; TYPE_3__* plane; TYPE_1__ f; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_14__ {int stride; int height; int width; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(hb_filter_object_t *VAR_3,
                               hb_buffer_t ** VAR_4,
                               hb_buffer_t ** VAR_5, int VAR_6)
{
    hb_filter_private_t *VAR_7 = VAR_3->private_data;
    hb_buffer_t *VAR_8 = *VAR_4, *VAR_9;

    if (VAR_8->s.flags & VAR_0)
    {
        *VAR_5 = VAR_8;
        *VAR_4 = ((void*)0);
        return VAR_1;
    }

    VAR_9 = FUNC_0(VAR_7->output.pix_fmt, VAR_8->f.width, VAR_8->f.height);
    VAR_9->f.color_prim = VAR_7->output.color_prim;
    VAR_9->f.color_transfer = VAR_7->output.color_transfer;
    VAR_9->f.color_matrix = VAR_7->output.color_matrix;
    VAR_9->f.color_range = VAR_7->output.color_range ;

    int VAR_10;
    for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
    {
        unsharp_plane_context_t * VAR_11 = &VAR_7->plane_ctx[VAR_10];
        unsharp_thread_context_t * VAR_12 = &VAR_7->thread_ctx[VAR_6][VAR_10];
        FUNC_1(VAR_8->plane[VAR_10].data,
                VAR_9->plane[VAR_10].data,
                VAR_8->plane[VAR_10].width,
                VAR_8->plane[VAR_10].height,
                VAR_8->plane[VAR_10].stride,
                VAR_11, VAR_12);
    }

    VAR_9->s = VAR_8->s;
    *VAR_5 = VAR_9;

    return VAR_2;
}
