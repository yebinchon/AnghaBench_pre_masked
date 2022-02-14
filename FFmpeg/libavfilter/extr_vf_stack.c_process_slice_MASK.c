
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int nb_inputs; int nb_planes; TYPE_1__* items; TYPE_3__** frames; } ;
struct TYPE_6__ {int* y; int * height; int * linesize; scalar_t__* x; } ;
typedef TYPE_1__ StackItem ;
typedef TYPE_2__ StackContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (scalar_t__,int,scalar_t__,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    StackContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    AVFrame **VAR_6 = VAR_4->frames;
    const int VAR_7 = (VAR_4->nb_inputs * VAR_2 ) / VAR_3;
    const int VAR_8 = (VAR_4->nb_inputs * (VAR_2+1)) / VAR_3;

    for (int VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
        StackItem *VAR_10 = &VAR_4->items[VAR_9];

        for (int VAR_11 = 0; VAR_11 < VAR_4->nb_planes; VAR_11++) {
            FUNC_0(VAR_5->data[VAR_11] + VAR_5->linesize[VAR_11] * VAR_10->y[VAR_11] + VAR_10->x[VAR_11],
                                VAR_5->linesize[VAR_11],
                                VAR_6[VAR_9]->data[VAR_11],
                                VAR_6[VAR_9]->linesize[VAR_11],
                                VAR_10->linesize[VAR_11], VAR_10->height[VAR_11]);
        }
    }

    return 0;
}
