
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int top_field_first; int pts; } ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {TYPE_3__* src; } ;
struct TYPE_8__ {TYPE_6__* second; int nb_planes; } ;
typedef TYPE_1__ SeparateFieldsContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_6__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, int64_t VAR_1, int64_t *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_0->src;
    SeparateFieldsContext *VAR_4 = VAR_3->priv;
    int VAR_5 = 0;

    if (VAR_4->second) {
        *VAR_2 = VAR_4->second->pts += VAR_1;
        FUNC_0(VAR_4->second, VAR_4->nb_planes, VAR_4->second->top_field_first);
        VAR_5 = FUNC_1(VAR_0, VAR_4->second);
        VAR_4->second = ((void*)0);
    }

    return VAR_5;
}
