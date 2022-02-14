
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; TYPE_1__* codecpar; int need_parsing; } ;
struct TYPE_6__ {int channels; scalar_t__ codec_id; int sample_rate; int codec_type; int channel_layout; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_6 ;

__attribute__((used)) static AVStream *FUNC_3(AVFormatContext *VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    AVStream *VAR_12 = FUNC_0(VAR_7, ((void*)0));
    if (!VAR_12)
        return ((void*)0);
    VAR_12->id = VAR_8;
    if (VAR_9 & 1) {
        VAR_12->codecpar->channels = 2;
        VAR_12->codecpar->channel_layout = VAR_3;
    } else {
        VAR_12->codecpar->channels = 1;
        VAR_12->codecpar->channel_layout = VAR_2;
    }
    VAR_12->codecpar->codec_type = VAR_0;
    VAR_12->codecpar->codec_id = FUNC_2(VAR_6, VAR_9>>4 & 15);
    VAR_12->need_parsing = VAR_1;
    VAR_10 = VAR_9>>2 & 3;
    VAR_11 = VAR_9>>1 & 1;
    if (!VAR_11 && VAR_12->codecpar->codec_id == VAR_4)
        VAR_12->codecpar->codec_id = VAR_5;
    VAR_12->codecpar->sample_rate = 44100 >> (3 - VAR_10);
    FUNC_1(VAR_12, 64, 1, VAR_12->codecpar->sample_rate);
    return VAR_12;
}
