
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int difseg_size; int** audio_shuffle; int audio_stride; } ;
struct TYPE_9__ {int * audio_data; TYPE_6__* sys; TYPE_2__** ast; int frames; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int sample_rate; } ;
typedef TYPE_3__ DVMuxContext ;


 int * FUNC_0 (int ,int) ;
 int ** VAR_0 ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int *,int,int) ;

__attribute__((used)) static void FUNC_3(DVMuxContext *VAR_1, int VAR_2, uint8_t* VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    VAR_8 = 4 * FUNC_1(VAR_1->sys, VAR_1->frames, VAR_1->ast[VAR_2]->codecpar->sample_rate);
    VAR_3 += VAR_2 * VAR_1->sys->difseg_size * 150 * 80;
    for (VAR_4 = 0; VAR_4 < VAR_1->sys->difseg_size; VAR_4++) {
        VAR_3 += 6 * 80;
        for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
            FUNC_2(VAR_0[VAR_4][VAR_5], VAR_1, &VAR_3[3], VAR_2, VAR_4 >= VAR_1->sys->difseg_size/2);
            for (VAR_6 = 8; VAR_6 < 80; VAR_6+=2) {
                VAR_7 = VAR_1->sys->audio_shuffle[VAR_4][VAR_5] + (VAR_6 - 8)/2 * VAR_1->sys->audio_stride;
                if (VAR_7*2 >= VAR_8)
                    continue;

                VAR_3[VAR_6] = *FUNC_0(VAR_1->audio_data[VAR_2], VAR_7*2+1);
                VAR_3[VAR_6+1] = *FUNC_0(VAR_1->audio_data[VAR_2], VAR_7*2);
            }
            VAR_3 += 16 * 80;
        }
    }
}
