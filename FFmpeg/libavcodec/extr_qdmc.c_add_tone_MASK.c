
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; int freq; int mode; int amplitude; int phase; } ;
struct TYPE_4__ {int* nb_tones; TYPE_3__** tones; int avctx; } ;
typedef TYPE_1__ QDMCContext ;


 int VAR_0 ;
 int const FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_2(QDMCContext *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    const int VAR_8 = VAR_1->nb_tones[VAR_2];

    if (VAR_8 >= FUNC_0(VAR_1->tones[VAR_2])) {
        FUNC_1(VAR_1->avctx, VAR_0, "Too many tones already in buffer, ignoring tone!\n");
        return;
    }

    VAR_1->tones[VAR_2][VAR_8].offset = VAR_3;
    VAR_1->tones[VAR_2][VAR_8].freq = VAR_4;
    VAR_1->tones[VAR_2][VAR_8].mode = VAR_5;
    VAR_1->tones[VAR_2][VAR_8].amplitude = VAR_6;
    VAR_1->tones[VAR_2][VAR_8].phase = VAR_7;
    VAR_1->nb_tones[VAR_2]++;
}
