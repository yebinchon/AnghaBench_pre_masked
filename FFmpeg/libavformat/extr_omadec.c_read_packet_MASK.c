
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_15__ {int pb; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_14__ {int data; int dts; int pts; scalar_t__ stream_index; int flags; } ;
struct TYPE_11__ {scalar_t__ num; int den; } ;
struct TYPE_13__ {TYPE_2__ time_base; TYPE_1__* codecpar; } ;
struct TYPE_12__ {scalar_t__ content_start; int iv; int av_des; scalar_t__ encrypted; } ;
struct TYPE_10__ {int block_align; int bit_rate; } ;
typedef TYPE_3__ OMAContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ,int) ;
 int FUNC_1 (int ,TYPE_5__*,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    OMAContext *VAR_4 = VAR_2->priv_data;
    AVStream *VAR_5 = VAR_2->streams[0];
    int VAR_6 = VAR_5->codecpar->block_align;
    int VAR_7 = VAR_5->codecpar->bit_rate >> 3;
    int64_t VAR_8 = FUNC_3(VAR_2->pb);
    int VAR_9 = FUNC_1(VAR_2->pb, VAR_3, VAR_6);

    if (VAR_9 < VAR_6)
        VAR_3->flags |= VAR_1;

    if (VAR_9 < 0)
        return VAR_9;
    if (!VAR_9)
        return VAR_0;

    VAR_3->stream_index = 0;

    if (VAR_8 >= VAR_4->content_start && VAR_7 > 0) {
        VAR_3->pts =
        VAR_3->dts = FUNC_2(VAR_8 - VAR_4->content_start, VAR_5->time_base.den,
                              VAR_7 * (int64_t)VAR_5->time_base.num);
    }

    if (VAR_4->encrypted) {


        if (VAR_9 == VAR_6)
            FUNC_0(VAR_4->av_des, VAR_3->data, VAR_3->data,
                         (VAR_6 >> 3), VAR_4->iv, 1);
        else
            FUNC_4(VAR_4->iv, 0, 8);
    }

    return VAR_9;
}
