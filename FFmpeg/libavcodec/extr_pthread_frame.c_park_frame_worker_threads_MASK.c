
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* threads; } ;
struct TYPE_6__ {scalar_t__ got_frame; int progress_mutex; int output_cond; int state; } ;
typedef TYPE_1__ PerThreadContext ;
typedef TYPE_2__ FrameThreadContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(FrameThreadContext *VAR_1, int VAR_2)
{
    int VAR_3;

    FUNC_1(VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        PerThreadContext *VAR_4 = &VAR_1->threads[VAR_3];

        if (FUNC_2(&VAR_4->state) != VAR_0) {
            FUNC_4(&VAR_4->progress_mutex);
            while (FUNC_2(&VAR_4->state) != VAR_0)
                FUNC_3(&VAR_4->output_cond, &VAR_4->progress_mutex);
            FUNC_5(&VAR_4->progress_mutex);
        }
        VAR_4->got_frame = 0;
    }

    FUNC_0(VAR_1);
}
