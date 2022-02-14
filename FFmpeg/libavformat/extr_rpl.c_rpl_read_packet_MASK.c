
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


typedef int uint32_t ;
struct TYPE_16__ {size_t nb_streams; TYPE_3__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int pos; scalar_t__ timestamp; int size; } ;
struct TYPE_14__ {int duration; scalar_t__ pts; size_t stream_index; int flags; } ;
struct TYPE_13__ {size_t nb_index_entries; TYPE_1__* codecpar; TYPE_5__* index_entries; } ;
struct TYPE_12__ {size_t chunk_part; size_t chunk_number; scalar_t__ frame_in_part; scalar_t__ frames_per_chunk; } ;
struct TYPE_11__ {scalar_t__ codec_type; int codec_tag; } ;
typedef TYPE_2__ RPLContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVIndexEntry ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    RPLContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9 = VAR_6->pb;
    AVStream* VAR_10;
    AVIndexEntry* VAR_11;
    int VAR_12;

    if (VAR_8->chunk_part == VAR_6->nb_streams) {
        VAR_8->chunk_number++;
        VAR_8->chunk_part = 0;
    }

    VAR_10 = VAR_6->streams[VAR_8->chunk_part];

    if (VAR_8->chunk_number >= VAR_10->nb_index_entries)
        return VAR_0;

    VAR_11 = &VAR_10->index_entries[VAR_8->chunk_number];

    if (VAR_8->frame_in_part == 0)
        if (FUNC_4(VAR_9, VAR_11->pos, VAR_5) < 0)
            return FUNC_0(VAR_3);

    if (VAR_10->codecpar->codec_type == VAR_1 &&
        VAR_10->codecpar->codec_tag == 124) {


        uint32_t VAR_13;

        FUNC_5(VAR_9, 4);
        VAR_13 = FUNC_3(VAR_9);
        if (FUNC_4(VAR_9, -8, VAR_4) < 0)
            return FUNC_0(VAR_3);

        VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_13);
        if (VAR_12 < 0)
            return VAR_12;
        if (VAR_12 != VAR_13) {
            FUNC_2(VAR_7);
            return FUNC_0(VAR_3);
        }
        VAR_7->duration = 1;
        VAR_7->pts = VAR_11->timestamp + VAR_8->frame_in_part;
        VAR_7->stream_index = VAR_8->chunk_part;

        VAR_8->frame_in_part++;
        if (VAR_8->frame_in_part == VAR_8->frames_per_chunk) {
            VAR_8->frame_in_part = 0;
            VAR_8->chunk_part++;
        }
    } else {
        VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_11->size);
        if (VAR_12 < 0)
            return VAR_12;
        if (VAR_12 != VAR_11->size) {
            FUNC_2(VAR_7);
            return FUNC_0(VAR_3);
        }

        if (VAR_10->codecpar->codec_type == VAR_1) {


            VAR_7->duration = VAR_8->frames_per_chunk;
        } else {


            VAR_7->duration = VAR_12 * 8;
        }
        VAR_7->pts = VAR_11->timestamp;
        VAR_7->stream_index = VAR_8->chunk_part;
        VAR_8->chunk_part++;
    }



    if (VAR_8->chunk_number == 0 && VAR_8->frame_in_part == 0)
        VAR_7->flags |= VAR_2;

    return VAR_12;
}
