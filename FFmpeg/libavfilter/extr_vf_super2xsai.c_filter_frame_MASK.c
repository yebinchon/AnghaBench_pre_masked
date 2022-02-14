
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__** outputs; } ;
struct TYPE_14__ {int h; int w; TYPE_3__* dst; } ;
struct TYPE_13__ {int * linesize; int * data; int height; int width; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_1->dst->outputs[0];
    AVFrame *VAR_4 = FUNC_4(VAR_3, VAR_3->w, VAR_3->h);
    if (!VAR_4) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_4, VAR_2);
    VAR_4->width = VAR_3->w;
    VAR_4->height = VAR_3->h;

    FUNC_5(VAR_1->dst, VAR_2->data[0], VAR_2->linesize[0],
               VAR_4->data[0], VAR_4->linesize[0],
               VAR_1->w, VAR_1->h);

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_3, VAR_4);
}
