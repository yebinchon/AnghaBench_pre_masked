
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_prg; TYPE_1__* prg; } ;
struct TYPE_5__ {unsigned int id; scalar_t__ pmt_found; scalar_t__ nb_pids; } ;
typedef TYPE_2__ MpegTSContext ;


 int FUNC_0 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_1(MpegTSContext *VAR_0, unsigned int VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_0, VAR_1);
    for (VAR_2 = 0; VAR_2 < VAR_0->nb_prg; VAR_2++)
        if (VAR_0->prg[VAR_2].id == VAR_1) {
            VAR_0->prg[VAR_2].nb_pids = 0;
            VAR_0->prg[VAR_2].pmt_found = 0;
        }
}
