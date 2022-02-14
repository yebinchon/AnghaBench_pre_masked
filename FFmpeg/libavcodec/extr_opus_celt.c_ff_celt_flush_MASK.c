
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float emph_coeff; int pf_gains_new; int pf_gains_old; int pf_gains; int buf; int energy; int ** prev_energy; } ;
struct TYPE_4__ {int flushed; scalar_t__ seed; TYPE_2__* block; } ;
typedef TYPE_1__ CeltFrame ;
typedef TYPE_2__ CeltBlock ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(CeltFrame *VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_3->flushed)
        return;

    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        CeltBlock *VAR_6 = &VAR_3->block[VAR_4];

        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
            VAR_6->prev_energy[0][VAR_5] = VAR_6->prev_energy[1][VAR_5] = VAR_1;

        FUNC_0(VAR_6->energy, 0, sizeof(VAR_6->energy));
        FUNC_0(VAR_6->buf, 0, sizeof(VAR_6->buf));

        FUNC_0(VAR_6->pf_gains, 0, sizeof(VAR_6->pf_gains));
        FUNC_0(VAR_6->pf_gains_old, 0, sizeof(VAR_6->pf_gains_old));
        FUNC_0(VAR_6->pf_gains_new, 0, sizeof(VAR_6->pf_gains_new));





        VAR_6->emph_coeff = 0.0f / VAR_0;
    }
    VAR_3->seed = 0;

    VAR_3->flushed = 1;
}
