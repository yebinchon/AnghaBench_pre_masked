
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Program {unsigned int id; } ;
struct TYPE_3__ {int nb_prg; struct Program* prg; } ;
typedef TYPE_1__ MpegTSContext ;



__attribute__((used)) static struct Program * FUNC_0(MpegTSContext *VAR_0, unsigned int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->nb_prg; VAR_2++) {
        if (VAR_0->prg[VAR_2].id == VAR_1) {
            return &VAR_0->prg[VAR_2];
        }
    }
    return ((void*)0);
}
