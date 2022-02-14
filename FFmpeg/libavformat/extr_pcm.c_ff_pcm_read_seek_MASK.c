
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {TYPE_3__* internal; int pb; TYPE_4__** streams; } ;
struct TYPE_8__ {int den; scalar_t__ num; } ;
struct TYPE_10__ {TYPE_2__ time_base; int cur_dts; TYPE_1__* codecpar; } ;
struct TYPE_9__ {scalar_t__ data_offset; } ;
struct TYPE_7__ {int block_align; int channels; int bit_rate; int sample_rate; int codec_id; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,scalar_t__,int,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;

int FUNC_4(AVFormatContext *VAR_4,
                     int VAR_5, int64_t VAR_6, int VAR_7)
{
    AVStream *VAR_8;
    int VAR_9, VAR_10;
    int64_t VAR_11, VAR_12;

    VAR_8 = VAR_4->streams[0];

    VAR_9 = VAR_8->codecpar->block_align ? VAR_8->codecpar->block_align :
        (FUNC_0(VAR_8->codecpar->codec_id) * VAR_8->codecpar->channels) >> 3;
    VAR_10 = VAR_8->codecpar->bit_rate ? VAR_8->codecpar->bit_rate >> 3 :
        VAR_9 * VAR_8->codecpar->sample_rate;

    if (VAR_9 <= 0 || VAR_10 <= 0)
        return -1;
    if (VAR_6 < 0) VAR_6 = 0;


    VAR_11 = FUNC_2(VAR_6 * VAR_10,
                         VAR_8->time_base.num,
                         VAR_8->time_base.den * (int64_t)VAR_9,
                         (VAR_7 & VAR_0) ? VAR_1 : VAR_2);
    VAR_11 *= VAR_9;


    VAR_8->cur_dts = FUNC_1(VAR_11, VAR_8->time_base.den, VAR_10 * (int64_t)VAR_8->time_base.num);
    if ((VAR_12 = FUNC_3(VAR_4->pb, VAR_11 + VAR_4->internal->data_offset, VAR_3)) < 0)
        return VAR_12;
    return 0;
}
