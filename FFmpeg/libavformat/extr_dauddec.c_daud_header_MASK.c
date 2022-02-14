
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {int channels; int sample_rate; int bit_rate; int block_align; int bits_per_coded_sample; int channel_layout; int codec_tag; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char,char,unsigned char,char) ;
 TYPE_2__* FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4) {
    AVStream *VAR_5 = FUNC_2(VAR_4, ((void*)0));
    if (!VAR_5)
        return FUNC_0(VAR_3);
    VAR_5->codecpar->codec_type = VAR_0;
    VAR_5->codecpar->codec_id = VAR_2;
    VAR_5->codecpar->codec_tag = FUNC_1('d', 'a', 'u', 'd');
    VAR_5->codecpar->channels = 6;
    VAR_5->codecpar->channel_layout = VAR_1;
    VAR_5->codecpar->sample_rate = 96000;
    VAR_5->codecpar->bit_rate = 3 * 6 * 96000 * 8;
    VAR_5->codecpar->block_align = 3 * 6;
    VAR_5->codecpar->bits_per_coded_sample = 24;
    return 0;
}
