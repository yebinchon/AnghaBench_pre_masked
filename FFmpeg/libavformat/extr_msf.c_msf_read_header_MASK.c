
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int channels; int block_align; void* sample_rate; int codec_id; int extradata; int extradata_size; int codec_type; } ;
struct TYPE_11__ {int pb; } ;
struct TYPE_10__ {TYPE_4__* codecpar; int duration; int need_parsing; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_4__*,unsigned int) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_8 (TYPE_1__*,int,int,void*) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_11)
{
    unsigned VAR_12, VAR_13;
    AVStream *VAR_14;
    int VAR_15;

    FUNC_5(VAR_11->pb, 4);

    VAR_14 = FUNC_3(VAR_11, ((void*)0));
    if (!VAR_14)
        return FUNC_0(VAR_9);

    VAR_14->codecpar->codec_type = VAR_2;
    VAR_12 = FUNC_4(VAR_11->pb);
    VAR_14->codecpar->channels = FUNC_4(VAR_11->pb);
    if (VAR_14->codecpar->channels <= 0 || VAR_14->codecpar->channels >= VAR_10 / 1024)
        return VAR_0;
    VAR_13 = FUNC_4(VAR_11->pb);
    VAR_14->codecpar->sample_rate = FUNC_4(VAR_11->pb);
    if (VAR_14->codecpar->sample_rate <= 0)
        return VAR_0;

    switch (VAR_12) {
    case 0: VAR_14->codecpar->codec_id = VAR_7; break;
    case 1: VAR_14->codecpar->codec_id = VAR_8; break;
    case 3: VAR_14->codecpar->block_align = 16 * VAR_14->codecpar->channels;
            VAR_14->codecpar->codec_id = VAR_4; break;
    case 4:
    case 5:
    case 6: VAR_14->codecpar->block_align = (VAR_12 == 4 ? 96 : VAR_12 == 5 ? 152 : 192) * VAR_14->codecpar->channels;
            VAR_15 = FUNC_9(VAR_14->codecpar, 14);
            if (VAR_15 < 0)
                return VAR_15;
            FUNC_10(VAR_14->codecpar->extradata, 0, VAR_14->codecpar->extradata_size);
            FUNC_1(VAR_14->codecpar->extradata, 1);
            FUNC_1(VAR_14->codecpar->extradata+2, 2048 * VAR_14->codecpar->channels);
            FUNC_1(VAR_14->codecpar->extradata+6, VAR_12 == 4 ? 1 : 0);
            FUNC_1(VAR_14->codecpar->extradata+8, VAR_12 == 4 ? 1 : 0);
            FUNC_1(VAR_14->codecpar->extradata+10, 1);
            VAR_14->codecpar->codec_id = VAR_5; break;
    case 7: VAR_14->need_parsing = VAR_3;
            VAR_14->codecpar->codec_id = VAR_6; break;
    default:
            FUNC_7(VAR_11, "Codec %d", VAR_12);
            return VAR_1;
    }
    VAR_14->duration = FUNC_2(VAR_14->codecpar, VAR_13);
    FUNC_5(VAR_11->pb, 0x40 - FUNC_6(VAR_11->pb));
    FUNC_8(VAR_14, 64, 1, VAR_14->codecpar->sample_rate);

    return 0;
}
