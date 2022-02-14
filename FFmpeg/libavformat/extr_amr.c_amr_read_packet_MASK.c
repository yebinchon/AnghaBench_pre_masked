
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {int cumulated_size; int block_count; } ;
struct TYPE_13__ {scalar_t__ codec_id; int bit_rate; } ;
struct TYPE_12__ {int pb; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_11__ {int* data; int duration; int pos; scalar_t__ stream_index; } ;
struct TYPE_10__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ AMRContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_7, AVPacket *VAR_8)
{
    AVCodecParameters *VAR_9 = VAR_7->streams[0]->codecpar;
    int VAR_10, VAR_11 = 0, VAR_12, VAR_13;
    int64_t VAR_14 = FUNC_6(VAR_7->pb);
    AMRContext *VAR_15 = VAR_7->priv_data;

    if (FUNC_3(VAR_7->pb)) {
        return VAR_0;
    }


    VAR_12 = FUNC_4(VAR_7->pb);
    VAR_13 = (VAR_12 >> 3) & 0x0F;

    if (VAR_9->codec_id == VAR_1) {
        VAR_11 = VAR_5[VAR_13];
    } else if (VAR_9->codec_id == VAR_2) {
        VAR_11 = VAR_6[VAR_13];
    }

    if (!VAR_11 || FUNC_1(VAR_8, VAR_11))
        return FUNC_0(VAR_3);

    if (VAR_15->cumulated_size < VAR_4 - VAR_11) {
        VAR_15->cumulated_size += VAR_11;

        VAR_7->streams[0]->codecpar->bit_rate = VAR_15->cumulated_size / ++VAR_15->block_count * 8 * 50;
    }

    VAR_8->stream_index = 0;
    VAR_8->pos = VAR_14;
    VAR_8->data[0] = VAR_12;
    VAR_8->duration = VAR_9->codec_id == VAR_1 ? 160 : 320;
    VAR_10 = FUNC_5(VAR_7->pb, VAR_8->data + 1, VAR_11 - 1);

    if (VAR_10 != VAR_11 - 1) {
        FUNC_2(VAR_8);
        if (VAR_10 < 0)
            return VAR_10;
        return FUNC_0(VAR_3);
    }

    return 0;
}
