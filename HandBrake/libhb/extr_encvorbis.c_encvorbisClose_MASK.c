
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* buf; scalar_t__ list; int vd; int vi; int vb; int vc; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(hb_work_object_t * VAR_0)
{
    hb_work_private_t *VAR_1 = VAR_0->private_data;

    FUNC_3(&VAR_1->vc);
    FUNC_2(&VAR_1->vb);
    FUNC_5(&VAR_1->vi);
    FUNC_4(&VAR_1->vd);

    if (VAR_1->list)
    {
        FUNC_1(&VAR_1->list);
    }

    FUNC_0(VAR_1->buf);
    FUNC_0(VAR_1);
    VAR_0->private_data = ((void*)0);
}
