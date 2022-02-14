
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int nb_samples; } ;
struct TYPE_8__ {scalar_t__ min_part_size; } ;
typedef TYPE_1__ AudioFIRContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, AVFrame *VAR_1, int VAR_2)
{
    AudioFIRContext *VAR_3 = VAR_0->priv;

    for (int VAR_4 = 0; VAR_4 < VAR_1->nb_samples; VAR_4 += VAR_3->min_part_size) {
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
    }

    return 0;
}
