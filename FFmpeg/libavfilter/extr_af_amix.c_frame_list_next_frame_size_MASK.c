
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
struct TYPE_4__ {int nb_samples; } ;
typedef TYPE_2__ FrameList ;



__attribute__((used)) static int FUNC_0(FrameList *VAR_0)
{
    if (!VAR_0->list)
        return 0;
    return VAR_0->list->nb_samples;
}
