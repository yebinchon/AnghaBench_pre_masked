
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int threads; TYPE_3__** thread_ctx; TYPE_4__* plane_ctx; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_10__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
struct TYPE_11__ {int ** SC; } ;
typedef TYPE_3__ chroma_smooth_thread_context_t ;
typedef int chroma_smooth_thread_context3_t ;
struct TYPE_12__ {int steps; int width; int pix_fmt; } ;
typedef TYPE_4__ chroma_smooth_plane_context_t ;


 TYPE_3__** FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;
 int * FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(hb_filter_object_t *VAR_0, int VAR_1)
{
    hb_filter_private_t * VAR_2 = VAR_0->private_data;

    FUNC_2(VAR_2);
    VAR_2->thread_ctx = FUNC_0(VAR_1, sizeof(chroma_smooth_thread_context3_t));
    VAR_2->threads = VAR_1;
    for (int VAR_3 = 0; VAR_3 < 3; VAR_3++)
    {
        chroma_smooth_plane_context_t * VAR_4 = &VAR_2->plane_ctx[VAR_3];
        int VAR_5 = FUNC_4(VAR_4->pix_fmt, VAR_4->width, VAR_3);

        for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        {
            chroma_smooth_thread_context_t * VAR_7 = &VAR_2->thread_ctx[VAR_6][VAR_3];

            if (VAR_3)
            {
                int VAR_8;
                for (VAR_8 = 0; VAR_8 < 2 * VAR_4->steps; VAR_8++)
                {
                    VAR_7->SC[VAR_8] = FUNC_5(sizeof(*(VAR_7->SC[VAR_8])) *
                                         (VAR_5 + 2 * VAR_4->steps));
                    if (VAR_7->SC[VAR_8] == ((void*)0))
                    {
                        FUNC_3("Chroma Smooth calloc failed");
                        FUNC_1(VAR_0);
                        return -1;
                    }
                }
            }
        }
    }
    return 0;
}
