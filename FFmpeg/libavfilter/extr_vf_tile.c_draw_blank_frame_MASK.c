
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int current; int blank; int draw; } ;
typedef TYPE_1__ TileContext ;
struct TYPE_11__ {TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_10__ {int h; int w; } ;
struct TYPE_9__ {int linesize; int data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int *,int *,int ,int ,unsigned int,unsigned int,int ,int ) ;
 int FUNC_1 (TYPE_4__*,unsigned int*,unsigned int*,int ) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_0, AVFrame *VAR_1)
{
    TileContext *VAR_2 = VAR_0->priv;
    AVFilterLink *VAR_3 = VAR_0->inputs[0];
    unsigned VAR_4, VAR_5;

    FUNC_1(VAR_0, &VAR_4, &VAR_5, VAR_2->current);
    FUNC_0(&VAR_2->draw, &VAR_2->blank,
                      VAR_1->data, VAR_1->linesize,
                      VAR_4, VAR_5, VAR_3->w, VAR_3->h);
    VAR_2->current++;
}
