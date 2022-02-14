
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ cache_size; int dts; scalar_t__ buffer_size; scalar_t__ buffer; scalar_t__ buffer_ptr; scalar_t__ soi_ptr; } ;
struct TYPE_9__ {int channels; int sample_rate; int bits_per_coded_sample; int block_align; int channel_layout; int codec_id; int codec_type; } ;
typedef TYPE_2__ MXGContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_7)
{
    AVStream *VAR_8, *VAR_9;
    MXGContext *VAR_10 = VAR_7->priv_data;


    VAR_8 = FUNC_1(VAR_7, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_6);
    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_3;
    FUNC_2(VAR_8, 64, 1, 1000000);

    VAR_9 = FUNC_1(VAR_7, ((void*)0));
    if (!VAR_9)
        return FUNC_0(VAR_6);
    VAR_9->codecpar->codec_type = VAR_0;
    VAR_9->codecpar->codec_id = VAR_4;
    VAR_9->codecpar->channels = 1;
    VAR_9->codecpar->channel_layout = VAR_2;
    VAR_9->codecpar->sample_rate = 8000;
    VAR_9->codecpar->bits_per_coded_sample = 8;
    VAR_9->codecpar->block_align = 1;
    FUNC_2(VAR_9, 64, 1, 1000000);

    VAR_10->soi_ptr = VAR_10->buffer_ptr = VAR_10->buffer = 0;
    VAR_10->buffer_size = 0;
    VAR_10->dts = VAR_5;
    VAR_10->cache_size = 0;

    return 0;
}
