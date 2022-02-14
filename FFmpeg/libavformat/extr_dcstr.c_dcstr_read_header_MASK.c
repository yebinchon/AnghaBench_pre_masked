
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pb; } ;
struct TYPE_11__ {TYPE_1__* codecpar; void* duration; } ;
struct TYPE_10__ {int channels; unsigned int block_align; void* sample_rate; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,char*,unsigned int) ;
 int FUNC_7 (TYPE_2__*,int,int,void*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_8)
{
    unsigned VAR_9, VAR_10;
    int VAR_11;
    AVStream *VAR_12;

    VAR_12 = FUNC_2(VAR_8, ((void*)0));
    if (!VAR_12)
        return FUNC_0(VAR_6);

    VAR_12->codecpar->codec_type = VAR_2;
    VAR_12->codecpar->channels = FUNC_3(VAR_8->pb);
    VAR_12->codecpar->sample_rate = FUNC_3(VAR_8->pb);
    VAR_9 = FUNC_3(VAR_8->pb);
    VAR_10 = FUNC_3(VAR_8->pb);
    FUNC_4(VAR_8->pb, 4);
    VAR_12->duration = FUNC_3(VAR_8->pb);
    VAR_11 = FUNC_3(VAR_8->pb);
    if (VAR_12->codecpar->channels <= 0 || VAR_11 <= 0 || VAR_11 > VAR_7 / VAR_12->codecpar->channels) {
        FUNC_1(VAR_8, VAR_5, "invalid number of channels %d x %d\n", VAR_12->codecpar->channels, VAR_11);
        return VAR_0;
    }
    VAR_12->codecpar->channels *= VAR_11;
    if (!VAR_10 || VAR_10 > VAR_7 / VAR_12->codecpar->channels)
        return VAR_0;
    VAR_12->codecpar->block_align = VAR_10 * VAR_12->codecpar->channels;

    switch (VAR_9) {
    case 4: VAR_12->codecpar->codec_id = VAR_3; break;
    case 16: VAR_12->codecpar->codec_id = VAR_4; break;
    default: FUNC_6(VAR_8, "codec %X", VAR_9);
             return VAR_1;
    }

    FUNC_4(VAR_8->pb, 0x800 - FUNC_5(VAR_8->pb));
    FUNC_7(VAR_12, 64, 1, VAR_12->codecpar->sample_rate);

    return 0;
}
