
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int channels; } ;
struct TYPE_13__ {int pb; TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int duration; scalar_t__ stream_index; } ;
struct TYPE_11__ {scalar_t__ samples_count; } ;
struct TYPE_10__ {scalar_t__ duration; TYPE_5__* codecpar; } ;
typedef TYPE_2__ RedSparkContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    AVCodecParameters *VAR_4 = VAR_2->streams[0]->codecpar;
    RedSparkContext *VAR_5 = VAR_2->priv_data;
    uint32_t VAR_6 = 8 * VAR_4->channels;
    int VAR_7;

    if (FUNC_3(VAR_2->pb) || VAR_5->samples_count == VAR_2->streams[0]->duration)
        return VAR_0;

    VAR_7 = FUNC_1(VAR_2->pb, VAR_3, VAR_6);
    if (VAR_7 != VAR_6) {
        FUNC_2(VAR_3);
        return FUNC_0(VAR_1);
    }

    VAR_3->duration = 14;
    VAR_5->samples_count += VAR_3->duration;
    VAR_3->stream_index = 0;

    return VAR_7;
}
