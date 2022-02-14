
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int url; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int channels; int sample_rate; } ;
struct TYPE_7__ {int channels; int sample_rate; } ;
typedef TYPE_2__ OSSAudioData ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1)
{
    OSSAudioData *VAR_2 = VAR_1->priv_data;
    AVStream *VAR_3;
    int VAR_4;

    VAR_3 = VAR_1->streams[0];
    VAR_2->sample_rate = VAR_3->codecpar->sample_rate;
    VAR_2->channels = VAR_3->codecpar->channels;
    VAR_4 = FUNC_1(VAR_1, 1, VAR_1->url);
    if (VAR_4 < 0) {
        return FUNC_0(VAR_0);
    } else {
        return 0;
    }
}
