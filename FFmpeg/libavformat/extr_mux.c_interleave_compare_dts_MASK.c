
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_15__ {int num; int den; } ;
struct TYPE_14__ {int audio_preload; TYPE_2__** streams; } ;
struct TYPE_13__ {size_t stream_index; scalar_t__ dts; } ;
struct TYPE_12__ {TYPE_8__ time_base; TYPE_1__* codecpar; } ;
struct TYPE_11__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,TYPE_8__,scalar_t__,TYPE_8__) ;
 int FUNC_1 (scalar_t__,TYPE_8__,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, const AVPacket *VAR_4,
                                                      const AVPacket *VAR_5)
{
    AVStream *VAR_6 = VAR_3->streams[VAR_5->stream_index];
    AVStream *VAR_7 = VAR_3->streams[VAR_4->stream_index];
    int VAR_8 = FUNC_0(VAR_4->dts, VAR_7->time_base, VAR_5->dts,
                                  VAR_6->time_base);
    if (VAR_3->audio_preload) {
        int VAR_9 = VAR_6 ->codecpar->codec_type == VAR_0;
        int VAR_10 = VAR_7->codecpar->codec_type == VAR_0;
        if (VAR_9 != VAR_10) {
            int64_t VAR_11, VAR_12;
            VAR_9 *= VAR_3->audio_preload;
            VAR_10 *= VAR_3->audio_preload;
            VAR_11 = FUNC_1(VAR_5 ->dts, VAR_6 ->time_base, VAR_2) - VAR_9;
            VAR_12= FUNC_1(VAR_4->dts, VAR_7->time_base, VAR_2) - VAR_10;
            if (VAR_11 == VAR_12) {
                VAR_11 = ((uint64_t)VAR_5 ->dts*VAR_6 ->time_base.num*VAR_1 - (uint64_t)VAR_9 *VAR_6 ->time_base.den)*VAR_7->time_base.den
                    - ((uint64_t)VAR_4->dts*VAR_7->time_base.num*VAR_1 - (uint64_t)VAR_10*VAR_7->time_base.den)*VAR_6 ->time_base.den;
                VAR_12 = 0;
            }
            VAR_8 = (VAR_12 > VAR_11) - (VAR_12 < VAR_11);
        }
    }

    if (VAR_8 == 0)
        return VAR_5->stream_index < VAR_4->stream_index;
    return VAR_8 > 0;
}
