
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int sample_rate; int channels; int block_align; int frame_size; int bit_rate; int channel_layout; int format; int codec_id; int codec_type; int extradata; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_5, AVStream *VAR_6)
{
    int VAR_7 = FUNC_3(VAR_6->codecpar->extradata);

    VAR_6->codecpar->codec_type = VAR_1;
    VAR_6->codecpar->codec_id = VAR_3;
    VAR_6->codecpar->sample_rate = 8000;
    VAR_6->codecpar->channels = 1;
    VAR_6->codecpar->format = VAR_4;
    VAR_6->codecpar->channel_layout = VAR_2;
    VAR_6->codecpar->bit_rate = FUNC_0(VAR_5, VAR_7);
    VAR_6->codecpar->frame_size = FUNC_2(VAR_5, VAR_7);
    VAR_6->codecpar->block_align = FUNC_1(VAR_5, VAR_7);

    if (VAR_6->codecpar->bit_rate <= 0 ||
        VAR_6->codecpar->frame_size <= 0 ||
        VAR_6->codecpar->block_align <= 0) {
        return VAR_0;
    }

    FUNC_4(VAR_6, 64, 1, VAR_6->codecpar->sample_rate);

    return 0;
}
