
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_13__ {TYPE_2__** streams; int * pb; TYPE_3__* priv_data; } ;
struct TYPE_12__ {int duration; scalar_t__ pos; int stream_index; int flags; } ;
struct TYPE_11__ {scalar_t__ body_end; scalar_t__ body_pos; scalar_t__ body_size; scalar_t__ is_64bit; } ;
struct TYPE_10__ {long long duration; TYPE_1__* codecpar; } ;
struct TYPE_9__ {int sample_rate; } ;
typedef TYPE_3__ IffDemuxContext ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 long long FUNC_2 (int *) ;
 long long FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    IffDemuxContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    uint32_t VAR_8;
    uint64_t VAR_9, VAR_10, VAR_11;
    int VAR_12 = VAR_0;

    while (!FUNC_1(VAR_7)) {
        VAR_9 = FUNC_7(VAR_7);
        if (VAR_9 >= VAR_6->body_end)
            return VAR_0;

        VAR_8 = FUNC_4(VAR_7);
        VAR_11 = VAR_6->is_64bit ? FUNC_3(VAR_7) : FUNC_2(VAR_7);
        VAR_10 = FUNC_7(VAR_7);

        if (VAR_11 < 1)
            return VAR_1;

        switch (VAR_8) {
        case 129:
            if (!VAR_5) {
                VAR_6->body_pos = FUNC_7(VAR_7) - (VAR_6->is_64bit ? 12 : 8);
                VAR_6->body_size = VAR_6->body_end - VAR_6->body_pos;
                return 0;
            }
            VAR_12 = FUNC_0(VAR_7, VAR_5, VAR_11);
            if (VAR_12 < 0)
                return VAR_12;
            if (VAR_11 & 1)
                FUNC_6(VAR_7, 1);
            VAR_5->flags |= VAR_2;
            VAR_5->stream_index = 0;
            VAR_5->duration = 588 * VAR_4->streams[0]->codecpar->sample_rate / 44100;
            VAR_5->pos = VAR_9;

            VAR_9 = FUNC_7(VAR_7);
            if (VAR_9 >= VAR_6->body_end)
                return 0;

            FUNC_5(VAR_7, VAR_9, VAR_3);
            return 0;

        case 128:
            if (VAR_11 < 4)
                return VAR_1;
            VAR_4->streams[0]->duration = FUNC_2(VAR_7) * 588LL * VAR_4->streams[0]->codecpar->sample_rate / 44100;
            break;
        }

        FUNC_6(VAR_7, VAR_11 - (FUNC_7(VAR_7) - VAR_10) + (VAR_11 & 1));
    }

    return VAR_12;
}
