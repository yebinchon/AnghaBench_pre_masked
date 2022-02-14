
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


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_16__ {TYPE_1__* internal; TYPE_4__** streams; int * pb; TYPE_3__* priv_data; } ;
struct TYPE_15__ {int duration; scalar_t__ pts; scalar_t__ stream_index; scalar_t__ pos; int * data; } ;
struct TYPE_14__ {TYPE_2__* codecpar; } ;
struct TYPE_13__ {scalar_t__ data_end; scalar_t__ data_size; scalar_t__ audio_size; } ;
struct TYPE_12__ {int block_align; int channels; } ;
struct TYPE_11__ {scalar_t__ data_offset; } ;
typedef TYPE_3__ DSFContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    DSFContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;
    AVStream *VAR_7 = VAR_3->streams[0];
    int64_t VAR_8 = FUNC_6(VAR_6);
    int VAR_9;

    if (VAR_8 >= VAR_5->data_end)
        return VAR_0;

    if (VAR_5->data_size > VAR_5->audio_size) {
        int VAR_10 = VAR_8 == (VAR_5->data_end - VAR_7->codecpar->block_align);

        if (VAR_10) {
            int64_t VAR_11 = VAR_8 - VAR_3->internal->data_offset;
            int64_t VAR_12 = VAR_5->audio_size - VAR_11;
            int64_t VAR_13 = VAR_5->data_size - VAR_11 - VAR_12;
            uint8_t *VAR_14;
            int VAR_15, VAR_16;

            if (VAR_12 <= 0 || VAR_13 <= 0)
                return VAR_1;

            if (FUNC_3(VAR_4, VAR_12) < 0)
                return FUNC_0(VAR_2);
            VAR_14 = VAR_4->data;
            for (VAR_15 = 0; VAR_15 < VAR_7->codecpar->channels; VAR_15++) {
                VAR_16 = FUNC_4(VAR_6, VAR_14, VAR_12 / VAR_7->codecpar->channels);
                if (VAR_16 < VAR_12 / VAR_7->codecpar->channels)
                    return VAR_0;

                VAR_14 += VAR_16;
                FUNC_5(VAR_6, VAR_13 / VAR_7->codecpar->channels);
            }

            VAR_4->pos = VAR_8;
            VAR_4->stream_index = 0;
            VAR_4->pts = (VAR_8 - VAR_3->internal->data_offset) / VAR_7->codecpar->channels;
            VAR_4->duration = VAR_12 / VAR_7->codecpar->channels;
            return 0;
        }
    }
    VAR_9 = FUNC_2(VAR_6, VAR_4, FUNC_1(VAR_5->data_end - VAR_8, VAR_7->codecpar->block_align));
    if (VAR_9 < 0)
        return VAR_9;

    VAR_4->stream_index = 0;
    VAR_4->pts = (VAR_8 - VAR_3->internal->data_offset) / VAR_7->codecpar->channels;
    VAR_4->duration = VAR_7->codecpar->block_align / VAR_7->codecpar->channels;

    return 0;
}
