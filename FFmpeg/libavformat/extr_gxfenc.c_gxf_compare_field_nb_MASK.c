
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {TYPE_5__** streams; TYPE_4__* priv_data; } ;
struct TYPE_16__ {size_t stream_index; int dts; } ;
struct TYPE_15__ {TYPE_1__* codecpar; TYPE_3__* priv_data; } ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_14__ {TYPE_2__ time_base; } ;
struct TYPE_13__ {scalar_t__ order; } ;
struct TYPE_11__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ GXFStreamContext ;
typedef TYPE_4__ GXFContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVPacket ;
typedef TYPE_7__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_2, const AVPacket *VAR_3,
                                                    const AVPacket *VAR_4)
{
    GXFContext *VAR_5 = VAR_2->priv_data;
    const AVPacket *VAR_6[2] = { VAR_4, VAR_3 };
    int VAR_7, VAR_8[2];
    GXFStreamContext *VAR_9[2];

    for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
        AVStream *VAR_10 = VAR_2->streams[VAR_6[VAR_7]->stream_index];
        VAR_9[VAR_7] = VAR_10->priv_data;
        if (VAR_10->codecpar->codec_type == VAR_0) {
            VAR_8[VAR_7] = FUNC_0(VAR_6[VAR_7]->dts, VAR_5->time_base.den,
                                         (int64_t)48000*VAR_5->time_base.num, VAR_1);
            VAR_8[VAR_7] &= ~1;
        } else
            VAR_8[VAR_7] = VAR_6[VAR_7]->dts;
    }

    return VAR_8[1] > VAR_8[0] ||
        (VAR_8[1] == VAR_8[0] && VAR_9[1]->order > VAR_9[0]->order);
}
