
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* src; } ;
struct TYPE_6__ {scalar_t__ eof_left; scalar_t__ S; scalar_t__ K; int H; int fifo; } ;
typedef TYPE_1__ AudioNLMeansContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    AudioNLMeansContext *VAR_4 = VAR_3->priv;
    int VAR_5;

    VAR_5 = FUNC_3(VAR_3->inputs[0]);

    if (VAR_5 == VAR_0 && VAR_4->eof_left != 0) {
        AVFrame *VAR_6;

        if (VAR_4->eof_left < 0)
            VAR_4->eof_left = FUNC_1(VAR_4->fifo) - (VAR_4->S + VAR_4->K);
        if (VAR_4->eof_left <= 0)
            return VAR_0;
        VAR_6 = FUNC_2(VAR_2, VAR_4->H);
        if (!VAR_6)
            return FUNC_0(VAR_1);

        return FUNC_4(VAR_3->inputs[0], VAR_6);
    }

    return VAR_5;
}
