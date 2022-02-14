
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid_ids; scalar_t__ nb_filter_buffers; void** filter_buffers; void* va_context; void* va_config; } ;
typedef TYPE_1__ VAAPIVPPContext ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 void* VAR_1 ;

void FUNC_0(AVFilterContext *VAR_2)
{
    int VAR_3;
    VAAPIVPPContext *VAR_4 = VAR_2->priv;

    VAR_4->va_config = VAR_1;
    VAR_4->va_context = VAR_1;
    VAR_4->valid_ids = 1;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        VAR_4->filter_buffers[VAR_3] = VAR_1;
    VAR_4->nb_filter_buffers = 0;
}
