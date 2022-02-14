
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * swresample; int * list; struct TYPE_8__* input_buf; struct TYPE_8__* output_buf; TYPE_3__* context; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_9__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;
struct TYPE_10__ {int * codec; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int **) ;

__attribute__((used)) static void FUNC_7(hb_work_object_t * VAR_0)
{
    hb_work_private_t * VAR_1 = VAR_0->private_data;

    if (VAR_1 != ((void*)0))
    {
        if (VAR_1->context != ((void*)0))
        {
            FUNC_0(VAR_0);
            FUNC_4(2, "encavcodecaudio: closing libavcodec");
            if (VAR_1->context->codec != ((void*)0)) {
                FUNC_1(VAR_1->context);
            }
            FUNC_3(&VAR_1->context);
        }

        if (VAR_1->output_buf != ((void*)0))
        {
            FUNC_2(VAR_1->output_buf);
        }
        if (VAR_1->input_buf != ((void*)0) && VAR_1->input_buf != VAR_1->output_buf)
        {
            FUNC_2(VAR_1->input_buf);
        }
        VAR_1->output_buf = VAR_1->input_buf = ((void*)0);

        if (VAR_1->list != ((void*)0))
        {
            FUNC_5(&VAR_1->list);
        }

        if (VAR_1->swresample != ((void*)0))
        {
            FUNC_6(&VAR_1->swresample);
        }

        FUNC_2(VAR_1);
        VAR_0->private_data = ((void*)0);
    }
}
