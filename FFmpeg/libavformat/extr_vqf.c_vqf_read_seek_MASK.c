
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int frame_bit_len; int remaining_bits; } ;
typedef TYPE_4__ VqfContext ;
struct TYPE_13__ {TYPE_3__* internal; int pb; TYPE_5__** streams; TYPE_4__* priv_data; } ;
struct TYPE_9__ {int den; scalar_t__ num; } ;
struct TYPE_12__ {TYPE_2__ time_base; TYPE_1__* codecpar; int cur_dts; } ;
struct TYPE_10__ {scalar_t__ data_offset; } ;
struct TYPE_8__ {int bit_rate; } ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,scalar_t__,int,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4,
                         int VAR_5, int64_t VAR_6, int VAR_7)
{
    VqfContext *VAR_8 = VAR_4->priv_data;
    AVStream *VAR_9;
    int64_t VAR_10;
    int64_t VAR_11;

    VAR_9 = VAR_4->streams[VAR_5];
    VAR_11 = FUNC_1(VAR_6 * VAR_9->codecpar->bit_rate,
                         VAR_9->time_base.num,
                         VAR_9->time_base.den * (int64_t)VAR_8->frame_bit_len,
                         (VAR_7 & VAR_0) ?
                                                   VAR_1 : VAR_2);
    VAR_11 *= VAR_8->frame_bit_len;

    VAR_9->cur_dts = FUNC_0(VAR_11, VAR_9->time_base.den,
                             VAR_9->codecpar->bit_rate * (int64_t)VAR_9->time_base.num);

    if ((VAR_10 = FUNC_2(VAR_4->pb, ((VAR_11-7) >> 3) + VAR_4->internal->data_offset, VAR_3)) < 0)
        return VAR_10;

    VAR_8->remaining_bits = -7 - ((VAR_11-7)&7);
    return 0;
}
