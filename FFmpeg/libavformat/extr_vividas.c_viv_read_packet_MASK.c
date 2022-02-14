
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_20__ {int current_audio_subpacket; int n_audio_subpackets; size_t current_sb; int audio_sample; size_t current_sb_entry; size_t n_sb_entries; int n_sb_blocks; TYPE_5__* sb_blocks; scalar_t__ sb_offset; TYPE_4__* audio_subpackets; TYPE_3__* sb_entries; int * sb_pb; } ;
typedef TYPE_6__ VividasDemuxContext ;
struct TYPE_23__ {TYPE_7__** streams; TYPE_6__* priv_data; } ;
struct TYPE_22__ {int stream_index; int pts; int* data; int flags; int pos; } ;
struct TYPE_15__ {int num; int den; } ;
struct TYPE_21__ {TYPE_2__* codecpar; TYPE_1__ time_base; } ;
struct TYPE_19__ {int packet_offset; scalar_t__ byte_offset; } ;
struct TYPE_18__ {int start; int pcm_bytes; } ;
struct TYPE_17__ {scalar_t__ flag; scalar_t__ size; } ;
struct TYPE_16__ {int sample_rate; int channels; } ;
typedef TYPE_7__ AVStream ;
typedef TYPE_8__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_9__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_8__*,int) ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_9__*,TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_6,
                           AVPacket *VAR_7)
{
    VividasDemuxContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9;
    int64_t VAR_10;
    int VAR_11;

    if (!VAR_8->sb_pb)
        return FUNC_0(VAR_3);
    if (FUNC_3(VAR_8->sb_pb))
        return VAR_0;

    if (VAR_8->current_audio_subpacket < VAR_8->n_audio_subpackets) {
        AVStream *VAR_12;
        int VAR_13 = VAR_8->audio_subpackets[VAR_8->current_audio_subpacket+1].start - VAR_8->audio_subpackets[VAR_8->current_audio_subpacket].start;

        VAR_9 = VAR_8->sb_pb;
        VAR_11 = FUNC_1(VAR_9, VAR_7, VAR_13);
        if (VAR_11 < 0)
            return VAR_11;
        VAR_7->pos += VAR_8->sb_offset + VAR_8->sb_blocks[VAR_8->current_sb].byte_offset;

        VAR_7->stream_index = 1;
        VAR_12 = VAR_6->streams[VAR_7->stream_index];

        VAR_7->pts = FUNC_2(VAR_8->audio_sample, VAR_12->time_base.den, VAR_12->time_base.num) / VAR_12->codecpar->sample_rate;
        VAR_8->audio_sample += VAR_8->audio_subpackets[VAR_8->current_audio_subpacket].pcm_bytes / 2 / VAR_12->codecpar->channels;
        VAR_7->flags |= VAR_2;
        VAR_8->current_audio_subpacket++;
        return 0;
    }

    if (VAR_8->current_sb_entry >= VAR_8->n_sb_entries) {
        if (VAR_8->current_sb+1 >= VAR_8->n_sb_blocks)
            return FUNC_0(VAR_3);
        VAR_8->current_sb++;

        FUNC_6(VAR_6, VAR_8, 0);
        VAR_8->current_sb_entry = 0;
    }

    VAR_9 = VAR_8->sb_pb;
    if (!VAR_9)
        return FUNC_0(VAR_3);
    VAR_10 = FUNC_4(VAR_9);
    VAR_10 += VAR_8->sb_entries[VAR_8->current_sb_entry].size;

    if (VAR_8->sb_entries[VAR_8->current_sb_entry].flag == 0) {
        uint64_t VAR_14 = FUNC_5(VAR_9);

        FUNC_5(VAR_9);
        if (VAR_14 > VAR_4)
            return VAR_1;
        VAR_11 = FUNC_1(VAR_9, VAR_7, VAR_14);
        if (VAR_11 < 0)
            return VAR_11;
        VAR_7->pos += VAR_8->sb_offset + VAR_8->sb_blocks[VAR_8->current_sb].byte_offset;

        VAR_7->pts = VAR_8->sb_blocks[VAR_8->current_sb].packet_offset + VAR_8->current_sb_entry;
        VAR_7->flags |= (VAR_7->data[0]&0x80)?0:VAR_2;
        VAR_7->stream_index = 0;

        for (int VAR_15 = 0; VAR_15 < VAR_5 - 1; VAR_15++) {
            int VAR_16, VAR_17;
            VAR_16 = FUNC_5(VAR_9);
            VAR_17 = FUNC_5(VAR_9);

            if (VAR_15 > 0 && VAR_16 == 0)
                break;

            VAR_8->n_audio_subpackets = VAR_15 + 1;
            VAR_8->audio_subpackets[VAR_15].start = VAR_16;
            VAR_8->audio_subpackets[VAR_15].pcm_bytes = VAR_17;
        }
        VAR_8->audio_subpackets[VAR_8->n_audio_subpackets].start = (int)(VAR_10 - FUNC_4(VAR_9));
        VAR_8->current_audio_subpacket = 0;

    } else {
        uint64_t VAR_18 = FUNC_5(VAR_9);

        if (VAR_18 > VAR_4)
            return VAR_1;
        VAR_11 = FUNC_1(VAR_9, VAR_7, VAR_18);
        if (VAR_11 < 0)
            return VAR_11;
        VAR_7->pos += VAR_8->sb_offset + VAR_8->sb_blocks[VAR_8->current_sb].byte_offset;
        VAR_7->pts = VAR_8->sb_blocks[VAR_8->current_sb].packet_offset + VAR_8->current_sb_entry;
        VAR_7->flags |= (VAR_7->data[0] & 0x80) ? 0 : VAR_2;
        VAR_7->stream_index = 0;
    }

    VAR_8->current_sb_entry++;

    return 0;
}
