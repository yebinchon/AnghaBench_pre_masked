
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {long long bit_rate; int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_16__ {int duration; int size; int data; scalar_t__ stream_index; int pos; } ;
struct TYPE_15__ {TYPE_1__* codecpar; } ;
struct TYPE_14__ {int counter; int packet_size; scalar_t__ dss_sp_swap_byte; scalar_t__ dss_sp_buf; scalar_t__ swap; } ;
struct TYPE_13__ {long long sample_rate; } ;
typedef TYPE_2__ DSSDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    DSSDemuxContext *VAR_5 = VAR_3->priv_data;
    AVStream *VAR_6 = VAR_3->streams[0];
    int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;
    int64_t VAR_11 = FUNC_4(VAR_3->pb);

    if (VAR_5->counter == 0)
        FUNC_5(VAR_3, VAR_4);

    if (VAR_5->swap) {
        VAR_7 = VAR_1 - 2;
        VAR_10 = 3;
    } else
        VAR_7 = VAR_1;

    VAR_5->counter -= VAR_7;
    VAR_5->packet_size = VAR_1 - 1;

    VAR_8 = FUNC_1(VAR_4, VAR_1);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_4->duration = 264;
    VAR_4->pos = VAR_11;
    VAR_4->stream_index = 0;
    VAR_3->bit_rate = 8LL * VAR_5->packet_size * VAR_6->codecpar->sample_rate * 512 / (506 * VAR_4->duration);

    if (VAR_5->counter < 0) {
        int VAR_12 = VAR_5->counter + VAR_7;

        VAR_8 = FUNC_3(VAR_3->pb, VAR_5->dss_sp_buf + VAR_9 + VAR_10,
                        VAR_12 - VAR_9);
        if (VAR_8 < VAR_12 - VAR_9)
            goto error_eof;

        FUNC_5(VAR_3, VAR_4);
        VAR_9 = VAR_12;
    }

    VAR_8 = FUNC_3(VAR_3->pb, VAR_5->dss_sp_buf + VAR_9 + VAR_10,
                    VAR_7 - VAR_9);
    if (VAR_8 < VAR_7 - VAR_9)
        goto error_eof;

    FUNC_6(VAR_5, VAR_4->data, VAR_5->dss_sp_buf);

    if (VAR_5->dss_sp_swap_byte < 0) {
        VAR_8 = FUNC_0(VAR_2);
        goto error_eof;
    }

    return VAR_4->size;

error_eof:
    FUNC_2(VAR_4);
    return VAR_8 < 0 ? VAR_8 : VAR_0;
}
