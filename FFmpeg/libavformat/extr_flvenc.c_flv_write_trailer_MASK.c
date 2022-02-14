
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef double int64_t ;
struct TYPE_16__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
struct TYPE_15__ {int nb_streams; TYPE_1__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_14__ {int flags; double videosize_offset; double videosize; double audiosize_offset; double audiosize; double lasttimestamp_offset; double lasttimestamp; double lastkeyframetimestamp_offset; double lastkeyframetimestamp; double lastkeyframelocation_offset; double lastkeyframelocation; double keyframe_index_size; double keyframes_info_offset; double datasize; double datastart_offset; double datasize_offset; double duration_offset; double duration; double filesize_offset; TYPE_3__* head_filepositions; int filepositions_count; } ;
struct TYPE_13__ {double keyframe_position; double keyframe_timestamp; struct TYPE_13__* next; } ;
struct TYPE_12__ {int last_ts; } ;
struct TYPE_11__ {TYPE_2__* priv_data; TYPE_6__* codecpar; } ;
typedef TYPE_2__ FLVStreamContext ;
typedef TYPE_3__ FLVFileposition ;
typedef TYPE_4__ FLVContext ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 scalar_t__ FUNC_2 (int *,double,int ) ;
 double FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,double) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_11)
{
    int64_t VAR_12;
    AVIOContext *VAR_13 = VAR_11->pb;
    FLVContext *VAR_14 = VAR_11->priv_data;
    int VAR_15 = VAR_14->flags & VAR_6;
    int VAR_16, VAR_17;
    int64_t VAR_18 = FUNC_3(VAR_11->pb);

    if (VAR_15) {
        FLVFileposition *VAR_19, *VAR_20;

        FUNC_2(VAR_13, VAR_14->videosize_offset, VAR_10);
        FUNC_5(VAR_13, VAR_14->videosize);

        FUNC_2(VAR_13, VAR_14->audiosize_offset, VAR_10);
        FUNC_5(VAR_13, VAR_14->audiosize);

        FUNC_2(VAR_13, VAR_14->lasttimestamp_offset, VAR_10);
        FUNC_5(VAR_13, VAR_14->lasttimestamp);

        FUNC_2(VAR_13, VAR_14->lastkeyframetimestamp_offset, VAR_10);
        FUNC_5(VAR_13, VAR_14->lastkeyframetimestamp);

        FUNC_2(VAR_13, VAR_14->lastkeyframelocation_offset, VAR_10);
        FUNC_5(VAR_13, VAR_14->lastkeyframelocation + VAR_14->keyframe_index_size);
        FUNC_2(VAR_13, VAR_18, VAR_10);

        VAR_17 = FUNC_9(VAR_11);
        if (VAR_17 < 0) {
             goto end;
        }
        FUNC_2(VAR_13, VAR_14->keyframes_info_offset, VAR_10);
        FUNC_7(VAR_13, "filepositions");
        FUNC_6(VAR_13, VAR_14->filepositions_count);
        for (VAR_19 = VAR_14->head_filepositions; VAR_19; VAR_19 = VAR_19->next) {
            FUNC_5(VAR_13, VAR_19->keyframe_position + VAR_14->keyframe_index_size);
        }

        FUNC_7(VAR_13, "times");
        FUNC_6(VAR_13, VAR_14->filepositions_count);
        for (VAR_19 = VAR_14->head_filepositions; VAR_19; VAR_19 = VAR_19->next) {
            FUNC_5(VAR_13, VAR_19->keyframe_timestamp);
        }

        VAR_19 = VAR_14->head_filepositions;
        while (VAR_19) {
            VAR_20 = VAR_19->next;
            if (VAR_20) {
                VAR_19->next = VAR_20->next;
                FUNC_0(VAR_20);
                VAR_20 = ((void*)0);
            } else {
                FUNC_0(VAR_19);
                VAR_19 = ((void*)0);
            }
        }

        FUNC_7(VAR_13, "");
        FUNC_4(VAR_13, VAR_0);

        FUNC_2(VAR_13, VAR_18 + VAR_14->keyframe_index_size, VAR_10);
    }

end:
    if (VAR_14->flags & VAR_9) {
        FUNC_1(VAR_11, VAR_4, "FLV no sequence end mode open\n");
    } else {

        for (VAR_16 = 0; VAR_16 < VAR_11->nb_streams; VAR_16++) {
            AVCodecParameters *VAR_21 = VAR_11->streams[VAR_16]->codecpar;
            FLVStreamContext *VAR_22 = VAR_11->streams[VAR_16]->priv_data;
            if (VAR_21->codec_type == VAR_1 &&
                    (VAR_21->codec_id == VAR_2 || VAR_21->codec_id == VAR_3))
                FUNC_8(VAR_13, VAR_22->last_ts);
        }
    }

    VAR_12 = FUNC_3(VAR_13);

    if (VAR_15) {
        VAR_14->datasize = VAR_12 - VAR_14->datastart_offset;
        FUNC_2(VAR_13, VAR_14->datasize_offset, VAR_10);
        FUNC_5(VAR_13, VAR_14->datasize);
    }
    if (!(VAR_14->flags & VAR_8)) {
        if (!(VAR_14->flags & VAR_7)) {

            if (FUNC_2(VAR_13, VAR_14->duration_offset, VAR_10) < 0) {
                FUNC_1(VAR_11, VAR_5, "Failed to update header with correct duration.\n");
            } else {
                FUNC_5(VAR_13, VAR_14->duration / (double)1000);
            }
            if (FUNC_2(VAR_13, VAR_14->filesize_offset, VAR_10) < 0) {
                FUNC_1(VAR_11, VAR_5, "Failed to update header with correct filesize.\n");
            } else {
                FUNC_5(VAR_13, VAR_12);
            }
        }
    }

    return 0;
}
