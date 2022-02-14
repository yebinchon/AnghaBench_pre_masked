
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status_in; int fifo; scalar_t__ frame_blocked_in; scalar_t__ frame_wanted_out; scalar_t__ status_out; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

void FUNC_4(AVFilterLink *VAR_1, int VAR_2)
{
    if (VAR_1->status_out)
        return;
    VAR_1->frame_wanted_out = 0;
    VAR_1->frame_blocked_in = 0;
    FUNC_1(VAR_1, VAR_2, VAR_0);
    while (FUNC_2(&VAR_1->fifo)) {
           AVFrame *VAR_3 = FUNC_3(&VAR_1->fifo);
           FUNC_0(&VAR_3);
    }
    if (!VAR_1->status_in)
        VAR_1->status_in = VAR_2;
}
