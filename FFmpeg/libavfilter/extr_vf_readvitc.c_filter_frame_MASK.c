
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_12__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_11__ {int metadata; int * linesize; int * data; } ;
struct TYPE_10__ {int line_data; int tcbuf; } ;
typedef TYPE_1__ ReadVitcContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    AVFilterLink *VAR_3 = VAR_2->outputs[0];
    ReadVitcContext *VAR_4 = VAR_2->priv;
    int VAR_5;

    VAR_5 = FUNC_3(VAR_4, VAR_1->data[0], VAR_1->linesize[0], VAR_0->w, VAR_0->h);
    FUNC_0(&VAR_1->metadata, "lavfi.readvitc.found", (VAR_5 ? "1" : "0"), 0);
    if (VAR_5)
        FUNC_0(&VAR_1->metadata, "lavfi.readvitc.tc_str", FUNC_2(VAR_4->tcbuf, VAR_4->line_data), 0);

    return FUNC_1(VAR_3, VAR_1);
}
