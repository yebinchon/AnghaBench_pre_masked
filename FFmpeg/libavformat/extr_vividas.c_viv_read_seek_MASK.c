
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {int n_sb_blocks; int current_sb; scalar_t__ current_sb_entry; void* audio_sample; TYPE_1__* sb_blocks; scalar_t__ sb_offset; scalar_t__ n_audio_subpackets; scalar_t__ current_audio_subpacket; } ;
typedef TYPE_4__ VividasDemuxContext ;
struct TYPE_13__ {TYPE_3__** streams; int pb; TYPE_4__* priv_data; } ;
struct TYPE_11__ {TYPE_2__* codecpar; int time_base; } ;
struct TYPE_10__ {scalar_t__ sample_rate; } ;
struct TYPE_9__ {scalar_t__ packet_offset; scalar_t__ n_packets; scalar_t__ byte_offset; } ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 void* FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    VividasDemuxContext *VAR_5 = VAR_1->priv_data;
    int64_t VAR_6;

    if (VAR_2 == 0)
        VAR_6 = VAR_3;
    else
        VAR_6 = FUNC_2(VAR_3, VAR_1->streams[0]->time_base, VAR_1->streams[VAR_2]->time_base);

    for (int VAR_7 = 0; VAR_7 < VAR_5->n_sb_blocks; VAR_7++) {
        if (VAR_6 >= VAR_5->sb_blocks[VAR_7].packet_offset && VAR_6 < VAR_5->sb_blocks[VAR_7].packet_offset + VAR_5->sb_blocks[VAR_7].n_packets) {

            VAR_5->current_audio_subpacket = 0;
            VAR_5->n_audio_subpackets = 0;
            VAR_5->current_sb = VAR_7;

            FUNC_3(VAR_1->pb, VAR_5->sb_offset + VAR_5->sb_blocks[VAR_7].byte_offset, VAR_0);

            FUNC_4(VAR_1, VAR_5, 0);

            VAR_5->audio_sample = FUNC_2(VAR_5->sb_blocks[VAR_7].packet_offset, FUNC_1(VAR_1->streams[1]->codecpar->sample_rate, 1), FUNC_0(VAR_1->streams[0]->time_base));

            VAR_5->audio_sample += VAR_1->streams[1]->codecpar->sample_rate;
            VAR_5->current_sb_entry = 0;
            return 1;
        }
    }
    return 0;
}
