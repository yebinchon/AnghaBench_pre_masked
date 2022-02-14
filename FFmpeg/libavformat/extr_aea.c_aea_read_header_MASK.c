
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int channels; int sample_rate; int bit_rate; int block_align; int channel_layout; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_8)
{
    AVStream *VAR_9 = FUNC_2(VAR_8, ((void*)0));
    if (!VAR_9)
        return FUNC_0(VAR_7);


    FUNC_4(VAR_8->pb, 264);
    VAR_9->codecpar->channels = FUNC_3(VAR_8->pb);
    FUNC_4(VAR_8->pb, 1783);


    VAR_9->codecpar->codec_type = VAR_2;
    VAR_9->codecpar->codec_id = VAR_5;
    VAR_9->codecpar->sample_rate = 44100;
    VAR_9->codecpar->bit_rate = 292000;

    if (VAR_9->codecpar->channels != 1 && VAR_9->codecpar->channels != 2) {
        FUNC_1(VAR_8, VAR_6, "Channels %d not supported!\n", VAR_9->codecpar->channels);
        return VAR_1;
    }

    VAR_9->codecpar->channel_layout = (VAR_9->codecpar->channels == 1) ? VAR_3 : VAR_4;

    VAR_9->codecpar->block_align = VAR_0 * VAR_9->codecpar->channels;
    return 0;
}
