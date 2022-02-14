
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list; int * remap; struct TYPE_5__* buf; scalar_t__ converter; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(hb_work_object_t *VAR_0)
{
    hb_work_private_t *VAR_1 = VAR_0->private_data;

    if (VAR_1 != ((void*)0))
    {
        if (VAR_1->converter)
        {
            FUNC_0(VAR_1->converter);
        }
        if (VAR_1->buf != ((void*)0))
        {
            FUNC_1(VAR_1->buf);
        }
        if (VAR_1->remap != ((void*)0))
        {
            FUNC_2(VAR_1->remap);
        }
        FUNC_3(&VAR_1->list);
        FUNC_1(VAR_1);
        VAR_0->private_data = ((void*)0);
    }
}
