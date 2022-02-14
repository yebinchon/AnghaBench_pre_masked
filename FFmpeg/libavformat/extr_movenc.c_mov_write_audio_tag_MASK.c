
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_22__ {scalar_t__ encryption_scheme; int encryption_kid; } ;
struct TYPE_21__ {scalar_t__ tag; scalar_t__ mode; int timescale; int sample_size; scalar_t__ vos_len; TYPE_1__* par; scalar_t__ audio_vbr; } ;
struct TYPE_20__ {int channels; scalar_t__ codec_id; int sample_rate; int bits_per_coded_sample; int bits_per_raw_sample; int frame_size; scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ MOVMuxContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,int *,TYPE_2__*) ;
 int FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (int *,int *,TYPE_2__*) ;
 int FUNC_18 (int *,TYPE_2__*) ;
 int FUNC_19 (int *,int *,TYPE_2__*) ;
 int FUNC_20 (int *,int *,TYPE_2__*) ;
 int FUNC_21 (int *,int *,TYPE_2__*) ;
 int FUNC_22 (int *,TYPE_2__*) ;
 int FUNC_23 (int *,TYPE_2__*) ;
 int FUNC_24 (int *,TYPE_2__*) ;
 int FUNC_25 (int *,int *,TYPE_2__*) ;
 int FUNC_26 (int *,int *,TYPE_2__*) ;
 int FUNC_27 (int *,int ) ;

__attribute__((used)) static int FUNC_28(AVFormatContext *VAR_19, AVIOContext *VAR_20, MOVMuxContext *VAR_21, MOVTrack *VAR_22)
{
    int64_t VAR_23 = FUNC_4(VAR_20);
    int VAR_24 = 0;
    uint32_t VAR_25 = VAR_22->tag;
    int VAR_26 = 0;

    if (VAR_22->mode == VAR_16) {
        if (VAR_22->timescale > VAR_18 || !VAR_22->par->channels) {
            if (FUNC_12(VAR_22->par->codec_id))
                VAR_25 = FUNC_0("lpcm");
            VAR_24 = 2;
        } else if (VAR_22->audio_vbr || FUNC_14(VAR_22->par->codec_id) ||
                   FUNC_13(VAR_22->par->codec_id) ||
                   VAR_22->par->codec_id == VAR_5 ||
                   VAR_22->par->codec_id == VAR_4 ||
                   VAR_22->par->codec_id == VAR_13) {
            VAR_24 = 1;
        }
    }

    FUNC_6(VAR_20, 0);
    if (VAR_21->encryption_scheme != VAR_17) {
        FUNC_10(VAR_20, "enca");
    } else {
        FUNC_8(VAR_20, VAR_25);
    }
    FUNC_6(VAR_20, 0);
    FUNC_5(VAR_20, 0);
    FUNC_5(VAR_20, 1);


    FUNC_5(VAR_20, VAR_24);
    FUNC_5(VAR_20, 0);
    FUNC_6(VAR_20, 0);

    if (VAR_24 == 2) {
        FUNC_5(VAR_20, 3);
        FUNC_5(VAR_20, 16);
        FUNC_5(VAR_20, 0xfffe);
        FUNC_5(VAR_20, 0);
        FUNC_6(VAR_20, 0x00010000);
        FUNC_6(VAR_20, 72);
        FUNC_7(VAR_20, FUNC_2(VAR_22->par->sample_rate));
        FUNC_6(VAR_20, VAR_22->par->channels);
        FUNC_6(VAR_20, 0x7F000000);
        FUNC_6(VAR_20, FUNC_3(VAR_22->par->codec_id));
        FUNC_6(VAR_20, FUNC_12(VAR_22->par->codec_id));
        FUNC_6(VAR_20, VAR_22->sample_size);
        FUNC_6(VAR_20, FUNC_11(VAR_22));
    } else {
        if (VAR_22->mode == VAR_16) {
            FUNC_5(VAR_20, VAR_22->par->channels);
            if (VAR_22->par->codec_id == VAR_12 ||
                VAR_22->par->codec_id == VAR_11)
                FUNC_5(VAR_20, 8);
            else if (VAR_22->par->codec_id == VAR_3)
                FUNC_5(VAR_20, VAR_22->par->bits_per_coded_sample);
            else
                FUNC_5(VAR_20, 16);
            FUNC_5(VAR_20, VAR_22->audio_vbr ? -2 : 0);
        } else {
            if (VAR_22->par->codec_id == VAR_9 ||
                VAR_22->par->codec_id == VAR_6 ||
                VAR_22->par->codec_id == VAR_10) {
                FUNC_5(VAR_20, VAR_22->par->channels);
            } else {
                FUNC_5(VAR_20, 2);
            }
            if (VAR_22->par->codec_id == VAR_9 ||
                VAR_22->par->codec_id == VAR_6) {
                FUNC_5(VAR_20, VAR_22->par->bits_per_raw_sample);
            } else {
                FUNC_5(VAR_20, 16);
            }
            FUNC_5(VAR_20, 0);
        }

        FUNC_5(VAR_20, 0);
        if (VAR_22->par->codec_id == VAR_10)
            FUNC_5(VAR_20, 48000);
        else if (VAR_22->par->codec_id == VAR_14)
            FUNC_6(VAR_20, VAR_22->par->sample_rate);
        else
            FUNC_5(VAR_20, VAR_22->par->sample_rate <= VAR_18 ?
                          VAR_22->par->sample_rate : 0);

        if (VAR_22->par->codec_id != VAR_14)
            FUNC_5(VAR_20, 0);
    }

    if (VAR_24 == 1) {
        if (FUNC_14(VAR_22->par->codec_id) ||
            FUNC_13(VAR_22->par->codec_id))
            FUNC_6(VAR_20, 1);
        else
            FUNC_6(VAR_20, VAR_22->par->frame_size);
        FUNC_6(VAR_20, VAR_22->sample_size / VAR_22->par->channels);
        FUNC_6(VAR_20, VAR_22->sample_size);
        FUNC_6(VAR_20, 2);
    }

    if (VAR_22->mode == VAR_16 &&
        (VAR_22->par->codec_id == VAR_1 ||
         VAR_22->par->codec_id == VAR_2 ||
         VAR_22->par->codec_id == VAR_8 ||
         VAR_22->par->codec_id == VAR_7 ||
         VAR_22->par->codec_id == VAR_6 ||
         VAR_22->par->codec_id == VAR_5 ||
         VAR_22->par->codec_id == VAR_4 ||
         VAR_22->par->codec_id == VAR_13 ||
         (FUNC_14(VAR_22->par->codec_id) && VAR_24==1) ||
         (FUNC_13(VAR_22->par->codec_id) && VAR_24==1)))
        VAR_26 = FUNC_25(VAR_19, VAR_20, VAR_22);
    else if (VAR_22->tag == FUNC_1('m','p','4','a'))
        VAR_26 = FUNC_22(VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_7)
        VAR_26 = FUNC_16(VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_2)
        VAR_26 = FUNC_15(VAR_19, VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_8)
        VAR_26 = FUNC_21(VAR_19, VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_6)
        VAR_26 = FUNC_23(VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_15)
        VAR_26 = FUNC_26(VAR_19, VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_9)
        VAR_26 = FUNC_18(VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_10)
        VAR_26 = FUNC_20(VAR_19, VAR_20, VAR_22);
    else if (VAR_22->par->codec_id == VAR_14)
        VAR_26 = FUNC_19(VAR_19, VAR_20, VAR_22);
    else if (VAR_22->vos_len > 0)
        VAR_26 = FUNC_24(VAR_20, VAR_22);

    if (VAR_26 < 0)
        return VAR_26;

    if (VAR_22->mode == VAR_16 && VAR_22->par->codec_type == VAR_0
            && ((VAR_26 = FUNC_17(VAR_19, VAR_20, VAR_22)) < 0)) {
        return VAR_26;
    }

    if (VAR_21->encryption_scheme != VAR_17
            && ((VAR_26 = FUNC_9(VAR_22, VAR_20, VAR_21->encryption_kid)) < 0)) {
        return VAR_26;
    }

    VAR_26 = FUNC_27(VAR_20, VAR_23);
    return VAR_26;
}
