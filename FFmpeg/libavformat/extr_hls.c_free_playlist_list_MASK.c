
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct playlist** buffer; } ;
struct playlist {TYPE_4__* ctx; scalar_t__ input_next_requested; int input_next; scalar_t__ input_read_done; int input; TYPE_1__ pb; int pkt; struct playlist** init_sec_buf; int id3_deferred_extra; int id3_initial; struct playlist** id3_buf; struct playlist** renditions; struct playlist** main_streams; } ;
struct TYPE_7__ {int * pb; } ;
struct TYPE_6__ {int n_playlists; struct playlist** playlists; int ctx; } ;
typedef TYPE_2__ HLSContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct playlist*) ;
 int FUNC_2 (struct playlist***) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct playlist*) ;
 int FUNC_8 (struct playlist*) ;

__attribute__((used)) static void FUNC_9(HLSContext *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->n_playlists; VAR_1++) {
        struct playlist *VAR_2 = VAR_0->playlists[VAR_1];
        FUNC_8(VAR_2);
        FUNC_7(VAR_2);
        FUNC_2(&VAR_2->main_streams);
        FUNC_2(&VAR_2->renditions);
        FUNC_2(&VAR_2->id3_buf);
        FUNC_0(&VAR_2->id3_initial);
        FUNC_6(&VAR_2->id3_deferred_extra);
        FUNC_2(&VAR_2->init_sec_buf);
        FUNC_3(&VAR_2->pkt);
        FUNC_2(&VAR_2->pb.buffer);
        FUNC_5(VAR_0->ctx, &VAR_2->input);
        VAR_2->input_read_done = 0;
        FUNC_5(VAR_0->ctx, &VAR_2->input_next);
        VAR_2->input_next_requested = 0;
        if (VAR_2->ctx) {
            VAR_2->ctx->pb = ((void*)0);
            FUNC_4(&VAR_2->ctx);
        }
        FUNC_1(VAR_2);
    }
    FUNC_2(&VAR_0->playlists);
    VAR_0->n_playlists = 0;
}
