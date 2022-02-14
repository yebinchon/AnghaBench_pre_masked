
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {int nb_streams; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_17__ {scalar_t__ pos; int size; scalar_t__ timestamp; } ;
struct TYPE_16__ {int flags; int stream_index; } ;
struct TYPE_15__ {int id; int disposition; int nb_index_entries; scalar_t__ duration; int time_base; TYPE_6__* index_entries; int discard; TYPE_1__* codecpar; TYPE_5__ attached_pic; int index; TYPE_2__* priv_data; } ;
struct TYPE_14__ {int nb_chapter_tracks; int* chapter_tracks; } ;
struct TYPE_13__ {int pb; } ;
struct TYPE_12__ {scalar_t__ codec_type; int codec_id; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVIndexEntry ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__**) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int) ;
 int FUNC_3 (TYPE_7__*,int ,char*,...) ;
 scalar_t__* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,scalar_t__*,int) ;
 int FUNC_6 (int ,int,scalar_t__*,int) ;
 int FUNC_7 (int ,int,scalar_t__*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_7__*,int,int ,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_12(AVFormatContext *VAR_12)
{
    MOVContext *VAR_13 = VAR_12->priv_data;
    AVStream *VAR_14;
    MOVStreamContext *VAR_15;
    int64_t VAR_16;
    int VAR_17, VAR_18;
    int VAR_19;

    for (VAR_18 = 0; VAR_18 < VAR_13->nb_chapter_tracks; VAR_18++) {
        VAR_19 = VAR_13->chapter_tracks[VAR_18];
        VAR_14 = ((void*)0);
        for (VAR_17 = 0; VAR_17 < VAR_12->nb_streams; VAR_17++)
            if (VAR_12->streams[VAR_17]->id == VAR_19) {
                VAR_14 = VAR_12->streams[VAR_17];
                break;
            }
        if (!VAR_14) {
            FUNC_3(VAR_12, VAR_6, "Referenced QT chapter track not found\n");
            continue;
        }

        VAR_15 = VAR_14->priv_data;
        VAR_16 = FUNC_10(VAR_15->pb);

        if (VAR_14->codecpar->codec_type == VAR_2) {
            VAR_14->disposition |= VAR_4 | VAR_5;
            if (VAR_14->nb_index_entries) {

                AVPacket VAR_20;
                AVIndexEntry *VAR_21 = &VAR_14->index_entries[0];
                if (FUNC_9(VAR_15->pb, VAR_21->pos, VAR_11) != VAR_21->pos) {
                    FUNC_3(VAR_12, VAR_6, "Failed to retrieve first frame\n");
                    goto finish;
                }

                if (FUNC_2(VAR_15->pb, &VAR_20, VAR_21->size) < 0)
                    goto finish;

                VAR_14->attached_pic = VAR_20;
                VAR_14->attached_pic.stream_index = VAR_14->index;
                VAR_14->attached_pic.flags |= VAR_9;
            }
        } else {
            VAR_14->codecpar->codec_type = VAR_1;
            VAR_14->codecpar->codec_id = VAR_3;
            VAR_14->discard = VAR_0;
            for (VAR_17 = 0; VAR_17 < VAR_14->nb_index_entries; VAR_17++) {
                AVIndexEntry *VAR_22 = &VAR_14->index_entries[VAR_17];
                int64_t VAR_23 = VAR_17+1 < VAR_14->nb_index_entries ? VAR_14->index_entries[VAR_17+1].timestamp : VAR_14->duration;
                uint8_t *VAR_24;
                uint16_t VAR_25;
                int VAR_26, VAR_27;

                if (VAR_23 < VAR_22->timestamp) {
                    FUNC_3(VAR_12, VAR_7, "ignoring stream duration which is shorter than chapters\n");
                    VAR_23 = VAR_8;
                }

                if (FUNC_9(VAR_15->pb, VAR_22->pos, VAR_11) != VAR_22->pos) {
                    FUNC_3(VAR_12, VAR_6, "Chapter %d not found in file\n", VAR_17);
                    goto finish;
                }


                VAR_26 = FUNC_8(VAR_15->pb);
                if (VAR_26 > VAR_22->size-2)
                    continue;
                VAR_27 = 2*VAR_26 + 1;
                if (!(VAR_24 = FUNC_4(VAR_27)))
                    goto finish;




                if (!VAR_26) {
                    VAR_24[0] = 0;
                } else {
                    VAR_25 = FUNC_8(VAR_15->pb);
                    if (VAR_25 == 0xfeff)
                        FUNC_6(VAR_15->pb, VAR_26, VAR_24, VAR_27);
                    else if (VAR_25 == 0xfffe)
                        FUNC_7(VAR_15->pb, VAR_26, VAR_24, VAR_27);
                    else {
                        FUNC_0(VAR_24, VAR_25);
                        if (VAR_26 == 1 || VAR_26 == 2)
                            VAR_24[VAR_26] = 0;
                        else
                            FUNC_5(VAR_15->pb, VAR_10, VAR_24 + 2, VAR_26 - 1);
                    }
                }

                FUNC_11(VAR_12, VAR_17, VAR_14->time_base, VAR_22->timestamp, VAR_23, VAR_24);
                FUNC_1(&VAR_24);
            }
        }
finish:
        FUNC_9(VAR_15->pb, VAR_16, VAR_11);
    }
}
