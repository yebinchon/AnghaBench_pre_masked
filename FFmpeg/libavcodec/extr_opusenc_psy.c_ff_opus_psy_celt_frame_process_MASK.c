
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int transient; int blocks; scalar_t__ silence; } ;
struct TYPE_14__ {int framesize; } ;
struct TYPE_15__ {int redo_analysis; TYPE_1__ p; int ** steps; } ;
typedef int OpusPsyStep ;
typedef TYPE_2__ OpusPsyContext ;
typedef TYPE_3__ CeltFrame ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int **,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int **,TYPE_3__*) ;

int FUNC_5(OpusPsyContext *VAR_1, CeltFrame *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_2->transient;
    OpusPsyStep **VAR_5 = &VAR_1->steps[VAR_3 * (1 << VAR_1->p.framesize)];

    if (VAR_2->silence)
        return 0;

    FUNC_1(VAR_1, VAR_5, VAR_2);
    FUNC_3(VAR_1, VAR_2);
    FUNC_2(VAR_1, VAR_2);
    FUNC_4(VAR_1, VAR_5, VAR_2);

    if (VAR_2->transient != VAR_4) {
        VAR_2->blocks = VAR_2->transient ? FUNC_0(VAR_1->p.framesize)/VAR_0 : 1;
        VAR_1->redo_analysis = 1;
        return 1;
    }

    VAR_1->redo_analysis = 0;

    return 0;
}
