
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_33__ {int value; } ;
struct TYPE_32__ {int url; int nb_streams; int pb; TYPE_2__** streams; int metadata; TYPE_4__* priv_data; } ;
struct TYPE_31__ {int start; } ;
struct TYPE_29__ {int end_time; int start_time; struct TYPE_29__* next; struct TYPE_29__* filename; } ;
struct TYPE_30__ {scalar_t__ list_size; scalar_t__ list_type; scalar_t__ segment_count; TYPE_3__ cur_entry; scalar_t__ increment_tc; TYPE_6__* avf; int list_pb; scalar_t__ list; int temp_list_filename; scalar_t__ use_rename; TYPE_3__* segment_list_entries; TYPE_3__* segment_list_entries_end; } ;
struct TYPE_28__ {int metadata; int avg_frame_rate; TYPE_1__* codecpar; } ;
struct TYPE_27__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ SegmentListEntry ;
typedef TYPE_4__ SegmentContext ;
typedef TYPE_5__ AVTimecode ;
typedef int AVRational ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_7__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_6__*,int ,char*,...) ;
 TYPE_3__* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ,int ,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,char*,int ) ;
 int FUNC_10 (TYPE_6__*,int *) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (TYPE_6__*,int *) ;
 int FUNC_15 (int ,scalar_t__,TYPE_6__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (int ,scalar_t__,TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_19(AVFormatContext *VAR_8, int VAR_9, int VAR_10)
{
    SegmentContext *VAR_11 = VAR_8->priv_data;
    AVFormatContext *VAR_12 = VAR_11->avf;
    int VAR_13 = 0;
    AVTimecode VAR_14;
    AVRational VAR_15;
    AVDictionaryEntry *VAR_16;
    char VAR_17[VAR_4];
    int VAR_18;
    int VAR_19;

    if (!VAR_12 || !VAR_12->pb)
        return FUNC_0(VAR_5);

    FUNC_10(VAR_12, ((void*)0));
    if (VAR_9)
        VAR_13 = FUNC_11(VAR_12);

    if (VAR_13 < 0)
        FUNC_4(VAR_8, VAR_1, "Failure occurred when ending segment '%s'\n",
               VAR_12->url);

    if (VAR_11->list) {
        if (VAR_11->list_size || VAR_11->list_type == VAR_7) {
            SegmentListEntry *VAR_20 = FUNC_5(sizeof(*VAR_20));
            if (!VAR_20) {
                VAR_13 = FUNC_0(VAR_6);
                goto end;
            }


            FUNC_16(VAR_20, &VAR_11->cur_entry, sizeof(*VAR_20));
            VAR_20->filename = FUNC_7(VAR_20->filename);
            if (!VAR_11->segment_list_entries)
                VAR_11->segment_list_entries = VAR_11->segment_list_entries_end = VAR_20;
            else
                VAR_11->segment_list_entries_end->next = VAR_20;
            VAR_11->segment_list_entries_end = VAR_20;


            if (VAR_11->list_size && VAR_11->segment_count >= VAR_11->list_size) {
                VAR_20 = VAR_11->segment_list_entries;
                VAR_11->segment_list_entries = VAR_11->segment_list_entries->next;
                FUNC_3(&VAR_20->filename);
                FUNC_3(&VAR_20);
            }

            if ((VAR_13 = FUNC_17(VAR_8)) < 0)
                goto end;
            for (VAR_20 = VAR_11->segment_list_entries; VAR_20; VAR_20 = VAR_20->next)
                FUNC_18(VAR_11->list_pb, VAR_11->list_type, VAR_20, VAR_8);
            if (VAR_11->list_type == VAR_7 && VAR_10)
                FUNC_13(VAR_11->list_pb, "#EXT-X-ENDLIST\n");
            FUNC_14(VAR_8, &VAR_11->list_pb);
            if (VAR_11->use_rename)
                FUNC_15(VAR_11->temp_list_filename, VAR_11->list, VAR_8);
        } else {
            FUNC_18(VAR_11->list_pb, VAR_11->list_type, &VAR_11->cur_entry, VAR_8);
            FUNC_12(VAR_11->list_pb);
        }
    }

    FUNC_4(VAR_8, VAR_2, "segment:'%s' count:%d ended\n",
           VAR_11->avf->url, VAR_11->segment_count);
    VAR_11->segment_count++;

    if (VAR_11->increment_tc) {
        VAR_16 = FUNC_1(VAR_8->metadata, "timecode", ((void*)0), 0);
        if (VAR_16) {

            for (VAR_18 = 0; VAR_18 < VAR_8->nb_streams; VAR_18++) {
                if (VAR_8->streams[VAR_18]->codecpar->codec_type == VAR_0) {
                    VAR_15 = VAR_8->streams[VAR_18]->avg_frame_rate;
                    VAR_19 = FUNC_8(&VAR_14, VAR_15, VAR_16->value, VAR_8);
                    if (VAR_19 < 0) {
                        FUNC_4(VAR_8, VAR_3, "Could not increment global timecode, error occurred during timecode creation.\n");
                        break;
                    }
                    VAR_14.start += (int)((VAR_11->cur_entry.end_time - VAR_11->cur_entry.start_time) * FUNC_6(VAR_15));
                    FUNC_2(&VAR_8->metadata, "timecode",
                                FUNC_9(&VAR_14, VAR_17, 0), 0);
                    break;
                }
            }
        } else {
            FUNC_4(VAR_8, VAR_3, "Could not increment global timecode, no global timecode metadata found.\n");
        }
        for (VAR_18 = 0; VAR_18 < VAR_8->nb_streams; VAR_18++) {
            if (VAR_8->streams[VAR_18]->codecpar->codec_type == VAR_0) {
                char VAR_21[VAR_4];
                AVTimecode VAR_22;
                AVRational VAR_23 = VAR_8->streams[VAR_18]->avg_frame_rate;
                AVDictionaryEntry *VAR_24 = FUNC_1(VAR_8->streams[VAR_18]->metadata, "timecode", ((void*)0), 0);
                if (VAR_24) {
                    if ((FUNC_8(&VAR_22, VAR_23, VAR_24->value, VAR_8) < 0)) {
                        FUNC_4(VAR_8, VAR_3, "Could not increment stream %d timecode, error occurred during timecode creation.\n", VAR_18);
                        continue;
                    }
                VAR_22.start += (int)((VAR_11->cur_entry.end_time - VAR_11->cur_entry.start_time) * FUNC_6(VAR_23));
                FUNC_2(&VAR_8->streams[VAR_18]->metadata, "timecode", FUNC_9(&VAR_22, VAR_21, 0), 0);
                }
            }
        }
    }

end:
    FUNC_14(VAR_12, &VAR_12->pb);

    return VAR_13;
}
