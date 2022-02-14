
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ** inputs; TYPE_1__* priv; } ;
struct TYPE_4__ {int eof; int * got_frame; } ;
typedef TYPE_1__ DecimateContext ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    DecimateContext *VAR_4 = VAR_1->priv;

    if (!VAR_4->got_frame[VAR_2]) {
        AVFilterLink *VAR_5 = VAR_1->inputs[VAR_2];
        VAR_3 = FUNC_0(VAR_5);
        if (VAR_3 == VAR_0) {
            VAR_4->eof |= 1 << VAR_2;
            VAR_3 = FUNC_1(VAR_5, ((void*)0));
        }
    }
    return VAR_3;
}
