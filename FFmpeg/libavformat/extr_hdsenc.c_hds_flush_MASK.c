
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int target_filename ;
typedef scalar_t__ int64_t ;
struct TYPE_24__ {int file; } ;
struct TYPE_23__ {char* url; TYPE_1__** streams; TYPE_4__* priv_data; } ;
struct TYPE_22__ {int window_size; int extra_window_size; scalar_t__ remove_at_exit; } ;
struct TYPE_21__ {size_t first_stream; int fragment_index; int nb_fragments; TYPE_8__** fragments; scalar_t__ frag_start_ts; int temp_filename; scalar_t__ packets_written; TYPE_2__* ctx; } ;
struct TYPE_20__ {int pb; } ;
struct TYPE_19__ {int id; } ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ HDSContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_8__**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_4 (int ,char*,TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,scalar_t__) ;
 int FUNC_6 (TYPE_8__**,TYPE_8__**,int) ;
 int FUNC_7 (char*,int,char*,char*,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_0, OutputStream *VAR_1, int VAR_2,
                     int64_t VAR_3)
{
    HDSContext *VAR_4 = VAR_0->priv_data;
    int VAR_5, VAR_6 = 0;
    char VAR_7[1024];
    int VAR_8 = VAR_0->streams[VAR_1->first_stream]->id;

    if (!VAR_1->packets_written)
        return 0;

    FUNC_2(VAR_1->ctx->pb);
    VAR_1->packets_written = 0;
    FUNC_3(VAR_0, VAR_1);

    FUNC_7(VAR_7, sizeof(VAR_7),
             "%s/stream%dSeg1-Frag%d", VAR_0->url, VAR_8, VAR_1->fragment_index);
    VAR_6 = FUNC_4(VAR_1->temp_filename, VAR_7, VAR_0);
    if (VAR_6 < 0)
        return VAR_6;
    FUNC_0(VAR_1, VAR_7, VAR_1->frag_start_ts, VAR_3 - VAR_1->frag_start_ts);

    if (!VAR_2) {
        VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_3);
        if (VAR_6 < 0)
            return VAR_6;
    }

    if (VAR_4->window_size || (VAR_2 && VAR_4->remove_at_exit)) {
        int VAR_9 = VAR_1->nb_fragments - VAR_4->window_size - VAR_4->extra_window_size;
        if (VAR_2 && VAR_4->remove_at_exit)
            VAR_9 = VAR_1->nb_fragments;
        if (VAR_9 > 0) {
            for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
                FUNC_8(VAR_1->fragments[VAR_5]->file);
                FUNC_1(&VAR_1->fragments[VAR_5]);
            }
            VAR_1->nb_fragments -= VAR_9;
            FUNC_6(VAR_1->fragments, VAR_1->fragments + VAR_9,
                    VAR_1->nb_fragments * sizeof(*VAR_1->fragments));
        }
    }

    if (VAR_6 >= 0)
        VAR_6 = FUNC_9(VAR_0, VAR_1, VAR_2);
    return VAR_6;
}
