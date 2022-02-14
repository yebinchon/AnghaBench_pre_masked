
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Program {unsigned int id; scalar_t__ pmt_found; scalar_t__ nb_pids; } ;
struct TYPE_3__ {int nb_prg; struct Program* prg; } ;
typedef TYPE_1__ MpegTSContext ;


 scalar_t__ FUNC_0 (struct Program**,int,int) ;

__attribute__((used)) static void FUNC_1(MpegTSContext *VAR_0, unsigned int VAR_1)
{
    struct Program *VAR_2;
    if (FUNC_0(&VAR_0->prg, VAR_0->nb_prg + 1, sizeof(*VAR_0->prg)) < 0) {
        VAR_0->nb_prg = 0;
        return;
    }
    VAR_2 = &VAR_0->prg[VAR_0->nb_prg];
    VAR_2->id = VAR_1;
    VAR_2->nb_pids = 0;
    VAR_2->pmt_found = 0;
    VAR_0->nb_prg++;
}
