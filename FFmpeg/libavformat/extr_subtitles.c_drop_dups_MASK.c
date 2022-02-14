
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pts; scalar_t__ duration; scalar_t__ stream_index; int data; } ;
struct TYPE_6__ {int nb_subs; TYPE_2__* subs; } ;
typedef TYPE_1__ FFDemuxSubtitlesQueue ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, FFDemuxSubtitlesQueue *VAR_2)
{
    int VAR_3, VAR_4 = 0;

    for (VAR_3 = 1; VAR_3 < VAR_2->nb_subs; VAR_3++) {
        const int VAR_5 = VAR_3 - 1 - VAR_4;
        const AVPacket *VAR_6 = &VAR_2->subs[VAR_5];

        if (VAR_2->subs[VAR_3].pts == VAR_6->pts &&
            VAR_2->subs[VAR_3].duration == VAR_6->duration &&
            VAR_2->subs[VAR_3].stream_index == VAR_6->stream_index &&
            !FUNC_3(VAR_2->subs[VAR_3].data, VAR_6->data)) {

            FUNC_1(&VAR_2->subs[VAR_3]);
            VAR_4++;
        } else if (VAR_4) {
            VAR_2->subs[VAR_5 + 1] = VAR_2->subs[VAR_3];
            FUNC_2(&VAR_2->subs[VAR_3], 0, sizeof(VAR_2->subs[VAR_3]));
        }
    }

    if (VAR_4) {
        VAR_2->nb_subs -= VAR_4;
        FUNC_0(VAR_1, VAR_0, "Dropping %d duplicated subtitle events\n", VAR_4);
    }
}
