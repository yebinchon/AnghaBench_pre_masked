
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int sample_rate; int channels; int bits_per_coded_sample; int bit_rate; int block_align; int channel_layout; int codec_id; int codec_type; } ;
struct TYPE_9__ {int * pb; } ;
struct TYPE_8__ {TYPE_4__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5)
{
    AVIOContext *VAR_6 = VAR_5->pb;
    AVStream *VAR_7;

    FUNC_2(VAR_6);
    FUNC_2(VAR_6);
    FUNC_2(VAR_6);

    VAR_7 = FUNC_1(VAR_5, ((void*)0));
    if (!VAR_7)
        return FUNC_0(VAR_4);

    VAR_7->codecpar->codec_type = VAR_0;
    VAR_7->codecpar->codec_id = VAR_3;

    FUNC_2(VAR_6);
    VAR_7->codecpar->sample_rate = FUNC_2(VAR_6);


    if (FUNC_3(VAR_5, VAR_7->codecpar, VAR_6, 2 * 4) < 0)
        return FUNC_0(VAR_4);

    if (FUNC_2(VAR_6)) {
        VAR_7->codecpar->channels = 2;
        VAR_7->codecpar->channel_layout = VAR_2;
    } else {
        VAR_7->codecpar->channels = 1;
        VAR_7->codecpar->channel_layout = VAR_1;
    }

    VAR_7->codecpar->bits_per_coded_sample = 4;
    VAR_7->codecpar->bit_rate = (int64_t)VAR_7->codecpar->bits_per_coded_sample * VAR_7->codecpar->channels
                          * VAR_7->codecpar->sample_rate;
    VAR_7->codecpar->block_align = 1;

    return 0;
}
