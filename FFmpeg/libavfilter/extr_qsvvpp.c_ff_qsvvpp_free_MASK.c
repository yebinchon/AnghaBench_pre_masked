
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* frame_infos; struct TYPE_4__* ext_buffers; struct TYPE_4__* surface_ptrs_out; struct TYPE_4__* surface_ptrs_in; int out_frame_list; int in_frame_list; scalar_t__ session; } ;
typedef TYPE_1__ QSVVPPContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (int *) ;

int FUNC_4(QSVVPPContext **VAR_0)
{
    QSVVPPContext *VAR_1 = *VAR_0;

    if (!VAR_1)
        return 0;

    if (VAR_1->session) {
        FUNC_1(VAR_1->session);
        FUNC_0(VAR_1->session);
    }


    FUNC_3(&VAR_1->in_frame_list);
    FUNC_3(&VAR_1->out_frame_list);
    FUNC_2(&VAR_1->surface_ptrs_in);
    FUNC_2(&VAR_1->surface_ptrs_out);
    FUNC_2(&VAR_1->ext_buffers);
    FUNC_2(&VAR_1->frame_infos);
    FUNC_2(VAR_0);

    return 0;
}
