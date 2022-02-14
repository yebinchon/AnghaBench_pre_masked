
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int url; TYPE_2__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int channels; int sample_rate; int codec_id; } ;
struct TYPE_10__ {int channels; int sample_rate; int codec_id; int codec_type; } ;
typedef TYPE_2__ OSSAudioData ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3)
{
    OSSAudioData *VAR_4 = VAR_3->priv_data;
    AVStream *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_1(VAR_3, ((void*)0));
    if (!VAR_5) {
        return FUNC_0(VAR_2);
    }

    VAR_6 = FUNC_3(VAR_3, 0, VAR_3->url);
    if (VAR_6 < 0) {
        return FUNC_0(VAR_1);
    }


    VAR_5->codecpar->codec_type = VAR_0;
    VAR_5->codecpar->codec_id = VAR_4->codec_id;
    VAR_5->codecpar->sample_rate = VAR_4->sample_rate;
    VAR_5->codecpar->channels = VAR_4->channels;

    FUNC_2(VAR_5, 64, 1, 1000000);
    return 0;
}
