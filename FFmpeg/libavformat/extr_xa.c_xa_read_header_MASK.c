
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {scalar_t__ start_time; TYPE_1__* codecpar; } ;
struct TYPE_10__ {void* out_size; } ;
struct TYPE_9__ {long long channels; long long sample_rate; int bit_rate; int codec_id; int codec_type; } ;
typedef TYPE_2__ MaxisXADemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (long long,int ,int ) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 long long FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,int,int,long long) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5)
{
    MaxisXADemuxContext *VAR_6 = VAR_5->priv_data;
    AVIOContext *VAR_7 = VAR_5->pb;
    AVStream *VAR_8;


    VAR_8 = FUNC_2(VAR_5, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_3);

    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_2;
    FUNC_5(VAR_7, 4);
    VAR_6->out_size = FUNC_4(VAR_7);
    FUNC_5(VAR_7, 2);
    VAR_8->codecpar->channels = FUNC_3(VAR_7);
    VAR_8->codecpar->sample_rate = FUNC_4(VAR_7);
    FUNC_5(VAR_7, 4);
    FUNC_5(VAR_7, 2);
    FUNC_5(VAR_7, 2);

    if (!VAR_8->codecpar->channels || !VAR_8->codecpar->sample_rate)
        return VAR_0;

    VAR_8->codecpar->bit_rate = FUNC_1(15LL * VAR_8->codecpar->channels * 8 *
                                  VAR_8->codecpar->sample_rate / 28, 0, VAR_4);

    FUNC_6(VAR_8, 64, 1, VAR_8->codecpar->sample_rate);
    VAR_8->start_time = 0;

    return 0;
}
