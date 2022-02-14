
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int par_out; int par_in; struct TYPE_8__* priv_data; struct TYPE_8__* internal; int buffer_pkt; TYPE_1__* filter; } ;
struct TYPE_7__ {scalar_t__ priv_class; int (* close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(AVBSFContext **VAR_0)
{
    AVBSFContext *VAR_1;

    if (!VAR_0 || !*VAR_0)
        return;
    VAR_1 = *VAR_0;

    if (VAR_1->filter->close)
        VAR_1->filter->close(VAR_1);
    if (VAR_1->filter->priv_class && VAR_1->priv_data)
        FUNC_1(VAR_1->priv_data);

    FUNC_1(VAR_1);

    if (VAR_1->internal)
        FUNC_2(&VAR_1->internal->buffer_pkt);
    FUNC_0(&VAR_1->internal);
    FUNC_0(&VAR_1->priv_data);

    FUNC_3(&VAR_1->par_in);
    FUNC_3(&VAR_1->par_out);

    FUNC_0(VAR_0);
}
