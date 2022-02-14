
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* cur_tone; int* nb_tones; TYPE_1__** tones; } ;
struct TYPE_6__ {int offset; int phase; int amplitude; int mode; int freq; } ;
typedef TYPE_1__ QDMCTone ;
typedef TYPE_2__ QDMCContext ;


 int FUNC_0 (TYPE_2__*,int,int ,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(QDMCContext *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        for (VAR_2 = VAR_0->cur_tone[VAR_3]; VAR_2 < VAR_0->nb_tones[VAR_3]; VAR_2++) {
            QDMCTone *VAR_4 = &VAR_0->tones[VAR_3][VAR_2];

            if (VAR_1 < VAR_4->offset)
                break;
            FUNC_0(VAR_0, VAR_4->offset, VAR_4->freq, VAR_3, VAR_4->mode, VAR_4->amplitude, VAR_4->phase);
        }
        VAR_0->cur_tone[VAR_3] = VAR_2;
    }
    for (VAR_2 = VAR_0->cur_tone[4]; VAR_2 < VAR_0->nb_tones[4]; VAR_2++) {
        QDMCTone *VAR_5 = &VAR_0->tones[4][VAR_2];

        if (VAR_1 < VAR_5->offset)
            break;
        FUNC_1(VAR_0, VAR_5->offset, VAR_5->freq, VAR_5->mode, VAR_5->amplitude, VAR_5->phase);
    }
    VAR_0->cur_tone[4] = VAR_2;
}
