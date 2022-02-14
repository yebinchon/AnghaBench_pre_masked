
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int done; int start; TYPE_2__* data; } ;
typedef TYPE_1__ task_arg_t ;
struct TYPE_4__ {int num; int id; int base; int loop; } ;
typedef TYPE_2__ post_event_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void* VAR_2)
{
    task_arg_t* VAR_3 = (task_arg_t*) VAR_2;
    post_event_data_t* VAR_4 = VAR_3->data;

    FUNC_5(VAR_3->start, VAR_1);

    for (int VAR_5 = 0; VAR_5 < VAR_4->num; VAR_5++) {
        FUNC_0(VAR_0, FUNC_1(VAR_4->loop, VAR_4->base, VAR_4->id, ((void*)0), 0, VAR_1));
        FUNC_2(1);
    }

    FUNC_4(VAR_3->done);

    FUNC_3(((void*)0));
}
