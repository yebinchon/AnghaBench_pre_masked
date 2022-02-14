
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* priv_data; TYPE_1__* filter; } ;
struct TYPE_3__ {scalar_t__ priv_class; } ;
typedef TYPE_2__ AVBSFContext ;



__attribute__((used)) static void *FUNC_0(void *VAR_0, void *VAR_1)
{
    AVBSFContext *VAR_2 = VAR_0;
    if (!VAR_1 && VAR_2->filter->priv_class)
        return VAR_2->priv_data;
    return ((void*)0);
}
