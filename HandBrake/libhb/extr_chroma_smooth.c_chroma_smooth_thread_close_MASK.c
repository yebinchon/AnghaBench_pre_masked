
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int threads; TYPE_2__** thread_ctx; TYPE_3__* plane_ctx; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_7__ {struct TYPE_7__*** SC; } ;
typedef TYPE_2__ chroma_smooth_thread_context_t ;
struct TYPE_8__ {int steps; } ;
typedef TYPE_3__ chroma_smooth_plane_context_t ;


 int FUNC_0 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_1(hb_filter_private_t *VAR_0)
{
    int VAR_1, VAR_2;
    for (VAR_1 = 0; VAR_1 < 3; VAR_1++)
    {
        chroma_smooth_plane_context_t * VAR_3 = &VAR_0->plane_ctx[VAR_1];
        for (int VAR_4 = 0; VAR_4 < VAR_0->threads; VAR_4++)
        {
            chroma_smooth_thread_context_t * VAR_5 = &VAR_0->thread_ctx[VAR_4][VAR_1];

            if (VAR_1)
            {
                for (VAR_2 = 0; VAR_2 < 2 * VAR_3->steps; VAR_2++)
                {
                    FUNC_0(VAR_5->SC[VAR_2]);
                    VAR_5->SC[VAR_2] = ((void*)0);
                }
            }
        }
    }
    FUNC_0(VAR_0->thread_ctx);
}
