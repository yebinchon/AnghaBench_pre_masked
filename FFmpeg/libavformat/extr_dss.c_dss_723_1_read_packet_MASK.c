
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {long long bit_rate; int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int* data; int duration; int size; scalar_t__ stream_index; int pos; } ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {int counter; int packet_size; } ;
struct TYPE_12__ {long long sample_rate; } ;
typedef TYPE_2__ DSSDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    DSSDemuxContext *VAR_5 = VAR_3->priv_data;
    AVStream *VAR_6 = VAR_3->streams[0];
    int VAR_7, VAR_8, VAR_9, VAR_10;
    int64_t VAR_11 = FUNC_4(VAR_3->pb);

    if (VAR_5->counter == 0)
        FUNC_5(VAR_3, VAR_4);


    VAR_8 = FUNC_2(VAR_3->pb);
    if (VAR_8 == 0xff)
        return VAR_1;

    VAR_7 = VAR_2[VAR_8 & 3];

    VAR_5->packet_size = VAR_7;
    VAR_5->counter -= VAR_7;

    VAR_9 = FUNC_0(VAR_4, VAR_7);
    if (VAR_9 < 0)
        return VAR_9;
    VAR_4->pos = VAR_11;

    VAR_4->data[0] = VAR_8;
    VAR_10 = 1;
    VAR_4->duration = 240;
    VAR_3->bit_rate = 8LL * VAR_7 * VAR_6->codecpar->sample_rate * 512 / (506 * VAR_4->duration);

    VAR_4->stream_index = 0;

    if (VAR_5->counter < 0) {
        int VAR_12 = VAR_5->counter + VAR_7;

        VAR_9 = FUNC_3(VAR_3->pb, VAR_4->data + VAR_10,
                        VAR_12 - VAR_10);
        if (VAR_9 < VAR_12 - VAR_10) {
            FUNC_1(VAR_4);
            return VAR_9 < 0 ? VAR_9 : VAR_0;
        }

        FUNC_5(VAR_3, VAR_4);
        VAR_10 = VAR_12;
    }

    VAR_9 = FUNC_3(VAR_3->pb, VAR_4->data + VAR_10, VAR_7 - VAR_10);
    if (VAR_9 < VAR_7 - VAR_10) {
        FUNC_1(VAR_4);
        return VAR_9 < 0 ? VAR_9 : VAR_0;
    }

    return VAR_4->size;
}
