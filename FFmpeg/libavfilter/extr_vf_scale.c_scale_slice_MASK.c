
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct SwsContext {int dummy; } ;
struct TYPE_11__ {TYPE_1__* dst; } ;
struct TYPE_10__ {int* linesize; int ** data; } ;
struct TYPE_9__ {int vsub; scalar_t__ output_is_pal; scalar_t__ input_is_pal; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ ScaleContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (struct SwsContext*,int const**,int*,int,int,int **,int*) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2, struct SwsContext *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    ScaleContext *VAR_8 = VAR_0->dst->priv;
    const uint8_t *VAR_9[4];
    uint8_t *VAR_10[4];
    int VAR_11[4],VAR_12[4];
    int VAR_13;

    for (VAR_13=0; VAR_13<4; VAR_13++) {
        int VAR_14= ((VAR_13+1)&2) ? VAR_8->vsub : 0;
         VAR_11[VAR_13] = VAR_2->linesize[VAR_13] * VAR_6;
        VAR_12[VAR_13] = VAR_1->linesize[VAR_13] * VAR_6;
         VAR_9[VAR_13] = VAR_2->data[VAR_13] + ((VAR_4>>VAR_14)+VAR_7) * VAR_2->linesize[VAR_13];
        VAR_10[VAR_13] = VAR_1->data[VAR_13] + VAR_7 * VAR_1->linesize[VAR_13];
    }
    if (VAR_8->input_is_pal)
         VAR_9[1] = VAR_2->data[1];
    if (VAR_8->output_is_pal)
        VAR_10[1] = VAR_1->data[1];

    return FUNC_0(VAR_3, VAR_9, VAR_11, VAR_4/VAR_6, VAR_5,
                         VAR_10,VAR_12);
}
