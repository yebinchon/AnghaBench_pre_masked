
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int sample_rate; int channels; scalar_t__ bits_per_coded_sample; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3)
{
    AVStream *VAR_4;

    VAR_4 = FUNC_3(VAR_3, ((void*)0));
    if (!VAR_4)
        return FUNC_0(VAR_2);

    VAR_4->codecpar->codec_type = VAR_0;
    VAR_4->codecpar->codec_id = VAR_1;
    VAR_4->codecpar->sample_rate = 16000;
    VAR_4->codecpar->channels = 1;

    VAR_4->codecpar->bits_per_coded_sample =
        FUNC_2(VAR_4->codecpar->codec_id);

    FUNC_1(VAR_4->codecpar->bits_per_coded_sample > 0);

    FUNC_4(VAR_4, 64, 1, VAR_4->codecpar->sample_rate);
    return 0;
}
