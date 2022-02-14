
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int ch_mode; int channels; scalar_t__ frame_or_sample_num; int blocksize; int samplerate; int bps; scalar_t__ is_var_size; } ;
struct TYPE_10__ {int buffer; } ;
typedef TYPE_1__ GetBitContext ;
typedef TYPE_2__ FLACFrameInfo ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,char*,...) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int * VAR_8 ;
 int FUNC_7 (TYPE_1__*,int) ;

int FUNC_8(AVCodecContext *VAR_9, GetBitContext *VAR_10,
                                FLACFrameInfo *VAR_11, int VAR_12)
{
    int VAR_13, VAR_14, VAR_15;


    if ((FUNC_3(VAR_10, 15) & 0x7FFF) != 0x7FFC) {
        FUNC_2(VAR_9, VAR_2 + VAR_12, "invalid sync code\n");
        return VAR_0;
    }


    VAR_11->is_var_size = FUNC_4(VAR_10);


    VAR_13 = FUNC_3(VAR_10, 4);
    VAR_14 = FUNC_3(VAR_10, 4);


    VAR_11->ch_mode = FUNC_3(VAR_10, 4);
    if (VAR_11->ch_mode < VAR_5) {
        VAR_11->channels = VAR_11->ch_mode + 1;
        VAR_11->ch_mode = VAR_3;
    } else if (VAR_11->ch_mode < VAR_5 + VAR_4) {
        VAR_11->channels = 2;
        VAR_11->ch_mode -= VAR_5 - 1;
    } else {
        FUNC_2(VAR_9, VAR_2 + VAR_12,
               "invalid channel mode: %d\n", VAR_11->ch_mode);
        return VAR_0;
    }


    VAR_15 = FUNC_3(VAR_10, 3);
    if (VAR_15 == 3 || VAR_15 == 7) {
        FUNC_2(VAR_9, VAR_2 + VAR_12,
               "invalid sample size code (%d)\n",
               VAR_15);
        return VAR_0;
    }
    VAR_11->bps = VAR_8[VAR_15];


    if (FUNC_4(VAR_10)) {
        FUNC_2(VAR_9, VAR_2 + VAR_12,
               "broken stream, invalid padding\n");
        return VAR_0;
    }


    VAR_11->frame_or_sample_num = FUNC_6(VAR_10);
    if (VAR_11->frame_or_sample_num < 0) {
        FUNC_2(VAR_9, VAR_2 + VAR_12,
               "sample/frame number invalid; utf8 fscked\n");
        return VAR_0;
    }


    if (VAR_13 == 0) {
        FUNC_2(VAR_9, VAR_2 + VAR_12,
               "reserved blocksize code: 0\n");
        return VAR_0;
    } else if (VAR_13 == 6) {
        VAR_11->blocksize = FUNC_3(VAR_10, 8) + 1;
    } else if (VAR_13 == 7) {
        VAR_11->blocksize = FUNC_3(VAR_10, 16) + 1;
    } else {
        VAR_11->blocksize = VAR_6[VAR_13];
    }


    if (VAR_14 < 12) {
        VAR_11->samplerate = VAR_7[VAR_14];
    } else if (VAR_14 == 12) {
        VAR_11->samplerate = FUNC_3(VAR_10, 8) * 1000;
    } else if (VAR_14 == 13) {
        VAR_11->samplerate = FUNC_3(VAR_10, 16);
    } else if (VAR_14 == 14) {
        VAR_11->samplerate = FUNC_3(VAR_10, 16) * 10;
    } else {
        FUNC_2(VAR_9, VAR_2 + VAR_12,
               "illegal sample rate code %d\n",
               VAR_14);
        return VAR_0;
    }


    FUNC_7(VAR_10, 8);
    if (FUNC_0(FUNC_1(VAR_1), 0, VAR_10->buffer,
               FUNC_5(VAR_10)/8)) {
        FUNC_2(VAR_9, VAR_2 + VAR_12,
               "header crc mismatch\n");
        return VAR_0;
    }

    return 0;
}
