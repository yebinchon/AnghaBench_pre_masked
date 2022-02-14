
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_6__ {TYPE_3__* src; } ;
struct TYPE_5__ {int eof; int next; int analyze_interlaced_flag_done; scalar_t__ cur; } ;
typedef TYPE_1__ IDETContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    IDETContext *VAR_4 = VAR_3->priv;
    int VAR_5;

    if (VAR_4->eof)
        return VAR_0;

    VAR_5 = FUNC_2(VAR_2->src->inputs[0]);

    if (VAR_5 == VAR_0 && VAR_4->cur && !VAR_4->analyze_interlaced_flag_done) {
        AVFrame *VAR_6 = FUNC_1(VAR_4->next);

        if (!VAR_6)
            return FUNC_0(VAR_1);

        VAR_5 = FUNC_3(VAR_2->src->inputs[0], VAR_6);
        VAR_4->eof = 1;
    }

    return VAR_5;
}
