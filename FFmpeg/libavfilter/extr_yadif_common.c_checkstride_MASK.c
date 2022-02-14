
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* csp; } ;
typedef TYPE_2__ YADIFContext ;
struct TYPE_9__ {scalar_t__* linesize; } ;
struct TYPE_7__ {int nb_components; } ;
typedef TYPE_3__ AVFrame ;



__attribute__((used)) static int FUNC_0(YADIFContext *VAR_0, const AVFrame *VAR_1, const AVFrame *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0->csp->nb_components; VAR_3++)
        if (VAR_1->linesize[VAR_3] != VAR_2->linesize[VAR_3])
            return 1;
    return 0;
}
