
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {int sample_rate; int channels; int codec_id; int block_align; int bits_per_coded_sample; scalar_t__ extradata; scalar_t__ codec_tag; int codec_type; } ;
struct TYPE_13__ {TYPE_1__* internal; int * pb; } ;
struct TYPE_12__ {int duration; TYPE_4__* codecpar; } ;
struct TYPE_11__ {int data_offset; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


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
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,char*,unsigned int) ;
 int FUNC_12 (TYPE_2__*,int,int,int) ;
 int FUNC_13 (TYPE_4__*,int) ;
 int FUNC_14 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_9)
{
    AVIOContext *VAR_10 = VAR_9->pb;
    unsigned VAR_11, VAR_12, VAR_13;
    int64_t VAR_14;
    AVCodecParameters *VAR_15;
    AVStream *VAR_16 = FUNC_2(VAR_9, ((void*)0));

    FUNC_9(VAR_10, 3);
    VAR_12 = FUNC_3(VAR_10) - '0';
    if (VAR_12 != 4 && VAR_12 != 3) {
        FUNC_11(VAR_9, "version %d", VAR_12);
        return VAR_1;
    }

    FUNC_9(VAR_10, 4);

    if (!VAR_16)
        return FUNC_0(VAR_6);
    VAR_15 = VAR_16->codecpar;
    VAR_15->codec_type = VAR_2;
    VAR_15->codec_tag = 0;

    if (VAR_12 == 3) {
        VAR_14 = FUNC_7(VAR_10) + 0x18;
        FUNC_9(VAR_10, 44);
        VAR_16->duration = FUNC_7(VAR_10);
        FUNC_9(VAR_10, 12);
        VAR_11 = FUNC_7(VAR_10);
        VAR_15->sample_rate = FUNC_7(VAR_10);
        if (VAR_15->sample_rate <= 0)
            return VAR_0;
        FUNC_9(VAR_10, 6);
        VAR_15->channels = FUNC_6(VAR_10);
        if (!VAR_15->channels)
            return VAR_0;

        if (VAR_11 & 0x00000100) {
            VAR_15->codec_id = VAR_5;
            VAR_15->block_align = 4096 * VAR_15->channels;
        } else if (VAR_11 & 0x00400000) {
            VAR_15->bits_per_coded_sample = 4;
            VAR_15->codec_id = VAR_3;
            VAR_15->block_align = 36 * VAR_15->channels;
        } else if (VAR_11 & 0x00800000) {
            VAR_15->codec_id = VAR_4;
            VAR_15->block_align = 16 * VAR_15->channels;
        } else if (VAR_11 & 0x02000000) {
            VAR_15->codec_id = 129;
            VAR_15->block_align = 8 * VAR_15->channels;
            if (VAR_15->channels > VAR_7 / 32)
                return VAR_0;
            FUNC_13(VAR_15, 32 * VAR_15->channels);
            if (!VAR_15->extradata)
                return FUNC_0(VAR_6);
            FUNC_8(VAR_10, 0x68, VAR_8);
            for (VAR_13 = 0; VAR_13 < VAR_15->channels; VAR_13++) {
                FUNC_5(VAR_10, VAR_15->extradata + 32 * VAR_13, 32);
                FUNC_9(VAR_10, 14);
            }
        } else {
            FUNC_11(VAR_9, "format 0x%X", VAR_11);
            return VAR_1;
        }
    } else if (VAR_12 == 4) {
        VAR_14 = FUNC_7(VAR_10) + 0x30;
        FUNC_9(VAR_10, 80);
        VAR_16->duration = FUNC_7(VAR_10);

        VAR_11 = FUNC_4(VAR_10);
        switch(VAR_11) {
        case 0x40001001:
        case 0x00001005:
        case 0x40001081:
        case 0x40200001:
            VAR_15->codec_id = 128;
            break;
        case 0x40000802:
            VAR_15->codec_id = 129;
            break;
        default:
            FUNC_11(VAR_9, "format 0x%X", VAR_11);
            return VAR_1;
        }

        VAR_15->sample_rate = FUNC_7(VAR_10);
        if (VAR_15->sample_rate <= 0)
            return VAR_0;
        FUNC_9(VAR_10, 6);

        VAR_15->channels = FUNC_6(VAR_10);
        if (!VAR_15->channels)
            return VAR_0;

        switch (VAR_15->codec_id) {
        case 128:
            FUNC_13(VAR_15, 34);
            if (!VAR_15->extradata)
                return FUNC_0(VAR_6);
            FUNC_14(VAR_15->extradata, 0, 34);
            VAR_15->block_align = 2048;
            break;
        case 129:
            if (VAR_15->channels > VAR_7 / 32)
                return VAR_0;
            FUNC_13(VAR_15, 32 * VAR_15->channels);
            if (!VAR_15->extradata)
                return FUNC_0(VAR_6);
            FUNC_8(VAR_10, 0x80, VAR_8);
            for (VAR_13 = 0; VAR_13 < VAR_15->channels; VAR_13++) {
                FUNC_5(VAR_10, VAR_15->extradata + 32 * VAR_13, 32);
                FUNC_9(VAR_10, 14);
            }
            VAR_15->block_align = 8 * VAR_15->channels;
            break;
        }
    } else {
        FUNC_1(0);
    }

    FUNC_9(VAR_10, VAR_14 - FUNC_10(VAR_10));
    VAR_9->internal->data_offset = FUNC_10(VAR_10);

    FUNC_12(VAR_16, 64, 1, VAR_15->sample_rate);

    return 0;
}
