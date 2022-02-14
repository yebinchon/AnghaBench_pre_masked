
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* parent; } ;
struct TYPE_6__ {int nb_inputs; int * frames; int fs; } ;
typedef TYPE_1__ ProgramOpenCLContext ;
typedef TYPE_2__ FFFrameSync ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(FFFrameSync *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->parent;
    ProgramOpenCLContext *VAR_2 = VAR_1->priv;
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->nb_inputs; VAR_4++) {
        VAR_3 = FUNC_0(&VAR_2->fs, VAR_4, &VAR_2->frames[VAR_4], 0);
        if (VAR_3 < 0)
            return VAR_3;
    }

    return FUNC_1(VAR_1);
}
