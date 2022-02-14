
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ current_block; scalar_t__ block_count; unsigned int last_block_size; } ;
typedef TYPE_2__ VPKDemuxContext ;
struct TYPE_15__ {unsigned int channels; unsigned int block_align; } ;
struct TYPE_14__ {int pb; TYPE_2__* priv_data; TYPE_1__** streams; } ;
struct TYPE_13__ {scalar_t__ stream_index; scalar_t__ data; } ;
struct TYPE_11__ {TYPE_5__* codecpar; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*,unsigned int) ;
 int FUNC_2 (TYPE_3__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__,unsigned int) ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    AVCodecParameters *VAR_4 = VAR_2->streams[0]->codecpar;
    VPKDemuxContext *VAR_5 = VAR_2->priv_data;
    int VAR_6, VAR_7;

    VAR_5->current_block++;
    if (VAR_5->current_block == VAR_5->block_count) {
        unsigned VAR_8 = VAR_5->last_block_size / VAR_4->channels;
        unsigned VAR_9 = (VAR_4->block_align - VAR_5->last_block_size) / VAR_4->channels;

        VAR_6 = FUNC_2(VAR_3, VAR_5->last_block_size);
        if (VAR_6 < 0)
            return VAR_6;
        for (VAR_7 = 0; VAR_7 < VAR_4->channels; VAR_7++) {
            VAR_6 = FUNC_4(VAR_2->pb, VAR_3->data + VAR_7 * VAR_8, VAR_8);
            FUNC_5(VAR_2->pb, VAR_9);
            if (VAR_6 != VAR_8) {
                FUNC_3(VAR_3);
                VAR_6 = FUNC_0(VAR_1);
                break;
            }
        }
        VAR_3->stream_index = 0;
    } else if (VAR_5->current_block < VAR_5->block_count) {
        VAR_6 = FUNC_1(VAR_2->pb, VAR_3, VAR_4->block_align);
        VAR_3->stream_index = 0;
    } else {
        return VAR_0;
    }

    return VAR_6;
}
