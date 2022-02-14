
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int lapsharp_plane_context_t ;
struct TYPE_14__ {int color_range; int color_matrix; int color_transfer; int color_prim; int pix_fmt; } ;
struct TYPE_17__ {int * plane_ctx; TYPE_2__ output; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_18__ {TYPE_5__* private_data; } ;
typedef TYPE_6__ hb_filter_object_t ;
struct TYPE_16__ {int flags; } ;
struct TYPE_13__ {int color_range; int color_matrix; int color_transfer; int color_prim; int height; int width; } ;
struct TYPE_19__ {TYPE_4__ s; TYPE_3__* plane; TYPE_1__ f; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_15__ {int stride; int height; int width; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(hb_filter_object_t *VAR_3,
                           hb_buffer_t ** VAR_4,
                           hb_buffer_t ** VAR_5)
{
    hb_filter_private_t *VAR_6 = VAR_3->private_data;
    hb_buffer_t *VAR_7 = *VAR_4, *VAR_8;

    if (VAR_7->s.flags & VAR_0)
    {
        *VAR_5 = VAR_7;
        *VAR_4 = ((void*)0);
        return VAR_1;
    }

    FUNC_1(VAR_7);
    VAR_8 = FUNC_0(VAR_6->output.pix_fmt, VAR_7->f.width, VAR_7->f.height);
    VAR_8->f.color_prim = VAR_6->output.color_prim;
    VAR_8->f.color_transfer = VAR_6->output.color_transfer;
    VAR_8->f.color_matrix = VAR_6->output.color_matrix;
    VAR_8->f.color_range = VAR_6->output.color_range ;

    int VAR_9;
    for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
    {
        lapsharp_plane_context_t * VAR_10 = &VAR_6->plane_ctx[VAR_9];
        FUNC_2(VAR_7->plane[VAR_9].data,
                    VAR_8->plane[VAR_9].data,
                    VAR_7->plane[VAR_9].width,
                    VAR_7->plane[VAR_9].height,
                    VAR_7->plane[VAR_9].stride,
                    VAR_10);
    }

    VAR_8->s = VAR_7->s;
    *VAR_5 = VAR_8;

    return VAR_2;
}
