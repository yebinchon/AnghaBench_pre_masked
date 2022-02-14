
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Program {int nb_pids; unsigned int* pids; scalar_t__ id; } ;
struct TYPE_7__ {int nb_prg; TYPE_2__* stream; struct Program* prg; } ;
struct TYPE_6__ {int nb_programs; TYPE_1__** programs; } ;
struct TYPE_5__ {scalar_t__ discard; scalar_t__ id; } ;
typedef TYPE_3__ MpegTSContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(MpegTSContext *VAR_1, unsigned int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    int VAR_6 = 0, VAR_7 = 0;
    struct Program *VAR_8;



    for (VAR_5 = 0; VAR_5 < VAR_1->stream->nb_programs; VAR_5++)
        if (VAR_1->stream->programs[VAR_5]->discard == VAR_0)
            break;
    if (VAR_5 == VAR_1->stream->nb_programs)
        return 0;

    for (VAR_3 = 0; VAR_3 < VAR_1->nb_prg; VAR_3++) {
        VAR_8 = &VAR_1->prg[VAR_3];
        for (VAR_4 = 0; VAR_4 < VAR_8->nb_pids; VAR_4++) {
            if (VAR_8->pids[VAR_4] != VAR_2)
                continue;

            for (VAR_5 = 0; VAR_5 < VAR_1->stream->nb_programs; VAR_5++) {
                if (VAR_1->stream->programs[VAR_5]->id == VAR_8->id) {
                    if (VAR_1->stream->programs[VAR_5]->discard == VAR_0)
                        VAR_7++;
                    else
                        VAR_6++;
                }
            }
        }
    }

    return !VAR_6 && VAR_7;
}
