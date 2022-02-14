
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pos; int buffer; int buf_ptr; int buf_end; scalar_t__ eof_reached; } ;
struct playlist {int n_main_streams; int cur_seq_no; int seek_stream_index; int seek_flags; scalar_t__ seek_timestamp; int ctx; TYPE_4__ pb; int pkt; scalar_t__ input_next_requested; int input_next; int parent; scalar_t__ input_read_done; int input; TYPE_3__** main_streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_14__ {scalar_t__ duration; TYPE_3__** streams; TYPE_5__* priv_data; } ;
struct TYPE_13__ {scalar_t__ first_timestamp; int n_playlists; scalar_t__ cur_timestamp; struct playlist** playlists; TYPE_1__* ctx; } ;
struct TYPE_10__ {int den; } ;
struct TYPE_11__ {TYPE_2__ time_base; } ;
struct TYPE_9__ {int ctx_flags; } ;
typedef TYPE_5__ HLSContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,struct playlist*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_10, int VAR_11,
                               int64_t VAR_12, int VAR_13)
{
    HLSContext *VAR_14 = VAR_10->priv_data;
    struct playlist *VAR_15 = ((void*)0);
    int VAR_16, VAR_17;
    int VAR_18;
    int VAR_19;
    int64_t VAR_20, VAR_21, VAR_22;

    if ((VAR_13 & VAR_3) || (VAR_14->ctx->ctx_flags & VAR_0))
        return FUNC_0(VAR_9);

    VAR_20 = VAR_14->first_timestamp == VAR_4 ?
                      0 : VAR_14->first_timestamp;

    VAR_21 = FUNC_2(VAR_12, VAR_7,
                                    VAR_10->streams[VAR_11]->time_base.den,
                                    VAR_13 & VAR_2 ?
                                    VAR_5 : VAR_6);

    VAR_22 = VAR_10->duration == VAR_4 ?
               0 : VAR_10->duration;

    if (0 < VAR_22 && VAR_22 < VAR_21 - VAR_20)
        return FUNC_0(VAR_8);


    for (VAR_16 = 0; VAR_16 < VAR_14->n_playlists; VAR_16++) {
        struct playlist *VAR_23 = VAR_14->playlists[VAR_16];
        for (VAR_18 = 0; VAR_18 < VAR_23->n_main_streams; VAR_18++) {
            if (VAR_23->main_streams[VAR_18] == VAR_10->streams[VAR_11]) {
                VAR_15 = VAR_23;
                VAR_19 = VAR_18;
                break;
            }
        }
    }


    if (!VAR_15 || !FUNC_5(VAR_14, VAR_15, VAR_21, &VAR_17))
        return FUNC_0(VAR_8);


    VAR_15->cur_seq_no = VAR_17;
    VAR_15->seek_stream_index = VAR_19;

    for (VAR_16 = 0; VAR_16 < VAR_14->n_playlists; VAR_16++) {

        struct playlist *VAR_24 = VAR_14->playlists[VAR_16];
        FUNC_3(VAR_24->parent, &VAR_24->input);
        VAR_24->input_read_done = 0;
        FUNC_3(VAR_24->parent, &VAR_24->input_next);
        VAR_24->input_next_requested = 0;
        FUNC_1(&VAR_24->pkt);
        VAR_24->pb.eof_reached = 0;

        VAR_24->pb.buf_end = VAR_24->pb.buf_ptr = VAR_24->pb.buffer;

        VAR_24->pb.pos = 0;

        FUNC_4(VAR_24->ctx);

        VAR_24->seek_timestamp = VAR_21;
        VAR_24->seek_flags = VAR_13;

        if (VAR_24 != VAR_15) {

            FUNC_5(VAR_14, VAR_24, VAR_21, &VAR_24->cur_seq_no);



            VAR_24->seek_stream_index = -1;
            VAR_24->seek_flags |= VAR_1;
        }
    }

    VAR_14->cur_timestamp = VAR_21;

    return 0;
}
