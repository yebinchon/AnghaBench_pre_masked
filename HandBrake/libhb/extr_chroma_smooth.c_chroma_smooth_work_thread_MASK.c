
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int ** thread_ctx; int * plane_ctx; } ;
typedef TYPE_4__ hb_filter_private_t ;
struct TYPE_15__ {TYPE_4__* private_data; } ;
typedef TYPE_5__ hb_filter_object_t ;
struct TYPE_13__ {int flags; } ;
struct TYPE_11__ {int height; int width; int fmt; } ;
struct TYPE_16__ {TYPE_3__ s; TYPE_2__* plane; TYPE_1__ f; } ;
typedef TYPE_6__ hb_buffer_t ;
typedef int chroma_smooth_thread_context_t ;
typedef int chroma_smooth_plane_context_t ;
struct TYPE_12__ {int stride; int height; int width; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *) ;
 TYPE_6__* FUNC_1 (int ,int ,int ) ;

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

    VAR_9 = FUNC_1(VAR_8->f.fmt, VAR_8->f.width, VAR_8->f.height);

    int VAR_10;
    for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
    {
        chroma_smooth_plane_context_t * VAR_11 = &VAR_7->plane_ctx[VAR_10];
        chroma_smooth_thread_context_t * VAR_12 = &VAR_7->thread_ctx[VAR_6][VAR_10];

        FUNC_0(VAR_8->plane[VAR_10].data,
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
