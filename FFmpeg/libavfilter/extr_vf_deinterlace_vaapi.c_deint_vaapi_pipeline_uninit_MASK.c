
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int queue_count; int * frame_queue; } ;
typedef TYPE_1__ DeintVAAPIContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_0)
{
    DeintVAAPIContext *VAR_1 = VAR_0->priv;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->queue_count; VAR_2++)
        FUNC_0(&VAR_1->frame_queue[VAR_2]);
    VAR_1->queue_count = 0;

    FUNC_1(VAR_0);
}
