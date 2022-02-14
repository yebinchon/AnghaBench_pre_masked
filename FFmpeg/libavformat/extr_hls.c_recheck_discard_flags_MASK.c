
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eof_reached; } ;
struct playlist {int needed; scalar_t__ seek_timestamp; int seek_stream_index; scalar_t__ input_next_requested; int input_next; int parent; scalar_t__ input_read_done; int input; int cur_seq_no; int seek_flags; TYPE_1__ pb; scalar_t__ broken; } ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {int n_playlists; scalar_t__ cur_timestamp; struct playlist** playlists; } ;
typedef TYPE_2__ HLSContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct playlist*) ;
 int FUNC_3 (TYPE_2__*,struct playlist*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, int VAR_4)
{
    HLSContext *VAR_5 = VAR_3->priv_data;
    int VAR_6, VAR_7 = 0;
    int VAR_8;


    for (VAR_6 = 0; VAR_6 < VAR_5->n_playlists; VAR_6++) {
        struct playlist *VAR_9 = VAR_5->playlists[VAR_6];

        VAR_8 = FUNC_2(VAR_5->playlists[VAR_6]);

        if (VAR_9->broken) {
            continue;
        }
        if (VAR_8 && !VAR_9->needed) {
            VAR_9->needed = 1;
            VAR_7 = 1;
            VAR_9->cur_seq_no = FUNC_3(VAR_5, VAR_9);
            VAR_9->pb.eof_reached = 0;
            if (VAR_5->cur_timestamp != VAR_2) {

                VAR_9->seek_timestamp = VAR_5->cur_timestamp;
                VAR_9->seek_flags = VAR_0;
                VAR_9->seek_stream_index = -1;
            }
            FUNC_0(VAR_3, VAR_1, "Now receiving playlist %d, segment %d\n", VAR_6, VAR_9->cur_seq_no);
        } else if (VAR_4 && !VAR_8 && VAR_9->needed) {
            FUNC_1(VAR_9->parent, &VAR_9->input);
            VAR_9->input_read_done = 0;
            FUNC_1(VAR_9->parent, &VAR_9->input_next);
            VAR_9->input_next_requested = 0;
            VAR_9->needed = 0;
            VAR_7 = 1;
            FUNC_0(VAR_3, VAR_1, "No longer receiving playlist %d\n", VAR_6);
        }
    }
    return VAR_7;
}
