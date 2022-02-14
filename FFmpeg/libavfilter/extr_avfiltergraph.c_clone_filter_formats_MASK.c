
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nb_formats; struct TYPE_6__* formats; int * refs; scalar_t__ refcount; } ;
typedef TYPE_1__ AVFilterFormats ;


 int FUNC_0 (TYPE_1__**) ;
 void* FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static AVFilterFormats *FUNC_2(AVFilterFormats *VAR_0)
{
    AVFilterFormats *VAR_1 = FUNC_1(VAR_0, sizeof(*VAR_0));
    if (VAR_1) {
        VAR_1->refcount = 0;
        VAR_1->refs = ((void*)0);
        VAR_1->formats = FUNC_1(VAR_1->formats, sizeof(*VAR_1->formats) * VAR_1->nb_formats);
        if (!VAR_1->formats && VAR_0->formats)
            FUNC_0(&VAR_1);
    }
    return VAR_1;
}
