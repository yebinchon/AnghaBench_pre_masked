
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_pool; int fifo; int partial_buf; } ;
typedef int FFFramePool ;
typedef TYPE_1__ AVFilterLink ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;

void FUNC_4(AVFilterLink **VAR_0)
{
    if (!*VAR_0)
        return;

    FUNC_0(&(*VAR_0)->partial_buf);
    FUNC_3(&(*VAR_0)->fifo);
    FUNC_2((FFFramePool**)&(*VAR_0)->frame_pool);

    FUNC_1(VAR_0);
}
