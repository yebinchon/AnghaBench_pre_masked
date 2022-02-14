
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int segment; int out; TYPE_2__* pv; } ;
typedef TYPE_1__ mt_frame_thread_arg_t ;
struct TYPE_6__ {int taskset; int ** buf; TYPE_3__* sub_filter; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_7__ {int (* work ) (TYPE_3__*,int **,int *) ;int (* work_thread ) (TYPE_3__*,int **,int *,int) ;} ;


 int FUNC_0 (int **) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_3__*,int **,int *,int) ;
 int FUNC_3 (TYPE_3__*,int **,int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
    mt_frame_thread_arg_t *VAR_1 = VAR_0;
    hb_filter_private_t *VAR_2 = VAR_1->pv;
    int VAR_3 = VAR_1->segment;

    FUNC_1("MTFrame thread started for segment %d", VAR_3);

    while (1)
    {

        FUNC_6(&VAR_2->taskset, VAR_3);

        if (FUNC_5(&VAR_2->taskset, VAR_3))
        {
            break;
        }

        if (VAR_2->sub_filter->work_thread != ((void*)0))
        {
            VAR_2->sub_filter->work_thread(VAR_2->sub_filter,
                                 &VAR_2->buf[VAR_3], &VAR_1->out, VAR_3);
        }
        else
        {
            VAR_2->sub_filter->work(VAR_2->sub_filter,
                                 &VAR_2->buf[VAR_3], &VAR_1->out);
        }
        if (VAR_2->buf[VAR_3] != ((void*)0))
        {
            FUNC_0(&VAR_2->buf[VAR_3]);
        }


        FUNC_4(&VAR_2->taskset, VAR_3);
    }
    FUNC_4(&VAR_2->taskset, VAR_3);
}
