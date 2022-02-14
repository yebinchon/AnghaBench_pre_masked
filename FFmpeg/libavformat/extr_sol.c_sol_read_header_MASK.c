
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_10__ {int * pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {unsigned int codec_tag; int codec_id; unsigned int channels; unsigned int sample_rate; int channel_layout; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (char,char,char,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*,int,int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 unsigned int FUNC_9 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_4)
{
    unsigned int VAR_5,VAR_6;
    AVIOContext *VAR_7 = VAR_4->pb;
    unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
    enum AVCodecID VAR_12;
    AVStream *VAR_13;


    VAR_5 = FUNC_3(VAR_7);
    VAR_6 = FUNC_4(VAR_7);
    if (VAR_6 != FUNC_0('S', 'O', 'L', 0))
        return -1;
    VAR_10 = FUNC_3(VAR_7);
    VAR_11 = FUNC_2(VAR_7);
    FUNC_5(VAR_7, 4);
    if (VAR_5 != 0x0B8D)
        FUNC_2(VAR_7);

    VAR_12 = FUNC_8(VAR_5, VAR_11);
    VAR_9 = FUNC_7(VAR_5, VAR_11);

    if (VAR_12 == VAR_3)
        VAR_8 = FUNC_9(VAR_5, VAR_11);
    else VAR_8 = 0;


    VAR_13 = FUNC_1(VAR_4, ((void*)0));
    if (!VAR_13)
        return -1;
    VAR_13->codecpar->codec_type = VAR_0;
    VAR_13->codecpar->codec_tag = VAR_8;
    VAR_13->codecpar->codec_id = VAR_12;
    VAR_13->codecpar->channels = VAR_9;
    VAR_13->codecpar->channel_layout = VAR_9 == 1 ? VAR_1 :
                                                   VAR_2;
    VAR_13->codecpar->sample_rate = VAR_10;
    FUNC_6(VAR_13, 64, 1, VAR_10);
    return 0;
}
