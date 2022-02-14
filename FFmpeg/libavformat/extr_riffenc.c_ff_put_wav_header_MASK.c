
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_8__ {int codec_tag; int block_align; int channels; int channel_layout; int sample_rate; scalar_t__ codec_id; int bits_per_coded_sample; int bit_rate; int extradata_size; int * extradata; } ;
struct TYPE_7__ {scalar_t__ strict_std_compliance; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int **,int) ;
 int FUNC_10 (int **,int) ;
 int VAR_21 ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *,int ) ;

int FUNC_13(AVFormatContext *VAR_22, AVIOContext *VAR_23,
                      AVCodecParameters *VAR_24, int VAR_25)
{
    int VAR_26, VAR_27, VAR_28, VAR_29;
    int VAR_30;
    int64_t VAR_31 = FUNC_4(VAR_23);
    int VAR_32;
    uint8_t VAR_33[256];
    uint8_t *VAR_34 = VAR_33;
    uint8_t *VAR_35 = VAR_33;

    if (!VAR_24->codec_tag || VAR_24->codec_tag > 0xffff)
        return -1;




    VAR_29 = FUNC_1(VAR_24, VAR_24->block_align);

    VAR_32 = (VAR_24->channels > 2 && VAR_24->channel_layout) ||
                           VAR_24->channels == 1 && VAR_24->channel_layout && VAR_24->channel_layout != VAR_0 ||
                           VAR_24->channels == 2 && VAR_24->channel_layout && VAR_24->channel_layout != VAR_1 ||
                           VAR_24->sample_rate > 48000 ||
                           VAR_24->codec_id == VAR_6 ||
                           FUNC_2(VAR_24->codec_id) > 16;

    if (VAR_32)
        FUNC_6(VAR_23, 0xfffe);
    else
        FUNC_6(VAR_23, VAR_24->codec_tag);

    FUNC_6(VAR_23, VAR_24->channels);
    FUNC_7(VAR_23, VAR_24->sample_rate);
    if (VAR_24->codec_id == VAR_5 ||
        VAR_24->codec_id == VAR_7 ||
        VAR_24->codec_id == VAR_9 ||
        VAR_24->codec_id == VAR_10 ||
        VAR_24->codec_id == VAR_8) {
        VAR_26 = 0;
    } else {
        if (!(VAR_26 = FUNC_2(VAR_24->codec_id))) {
            if (VAR_24->bits_per_coded_sample)
                VAR_26 = VAR_24->bits_per_coded_sample;
            else
                VAR_26 = 16;
        }
    }
    if (VAR_26 != VAR_24->bits_per_coded_sample && VAR_24->bits_per_coded_sample) {
        FUNC_3(VAR_22, VAR_17,
               "requested bits_per_coded_sample (%d) "
               "and actually stored (%d) differ\n",
               VAR_24->bits_per_coded_sample, VAR_26);
    }

    if (VAR_24->codec_id == VAR_9) {
        VAR_27 = (144 * VAR_24->bit_rate - 1)/VAR_24->sample_rate + 1;
    } else if (VAR_24->codec_id == VAR_10) {
        VAR_27 = 576 * (VAR_24->sample_rate <= (24000 + 32000)/2 ? 1 : 2);
    } else if (VAR_24->codec_id == VAR_3) {
        VAR_27 = 3840;
    } else if (VAR_24->codec_id == VAR_2) {
        VAR_27 = 768 * VAR_24->channels;
    } else if (VAR_24->codec_id == VAR_7) {
        VAR_27 = 24;
    } else if (VAR_24->block_align != 0) {
        VAR_27 = VAR_24->block_align;
    } else
        VAR_27 = VAR_26 * VAR_24->channels / FUNC_0(8, VAR_26);
    if (VAR_24->codec_id == VAR_16 ||
        VAR_24->codec_id == VAR_14 ||
        VAR_24->codec_id == VAR_15 ||
        VAR_24->codec_id == VAR_11 ||
        VAR_24->codec_id == VAR_12 ||
        VAR_24->codec_id == VAR_13) {
        VAR_28 = VAR_24->sample_rate * VAR_27;
    } else if (VAR_24->codec_id == VAR_7) {
        VAR_28 = 800;
    } else {
        VAR_28 = VAR_24->bit_rate / 8;
    }
    FUNC_7(VAR_23, VAR_28);
    FUNC_6(VAR_23, VAR_27);
    FUNC_6(VAR_23, VAR_26);
    if (VAR_24->codec_id == VAR_10) {
        FUNC_9(&VAR_34, 1);
        FUNC_10(&VAR_34, 2);
        FUNC_9(&VAR_34, 1152);
        FUNC_9(&VAR_34, 1);
        FUNC_9(&VAR_34, 1393);
    } else if (VAR_24->codec_id == VAR_9) {

        FUNC_9(&VAR_34, 2);

        FUNC_10(&VAR_34, VAR_24->bit_rate);

        FUNC_9(&VAR_34, VAR_24->channels == 2 ? 1 : 8);

        FUNC_9(&VAR_34, 0);

        FUNC_9(&VAR_34, 1);

        FUNC_9(&VAR_34, 16);

        FUNC_10(&VAR_34, 0);

        FUNC_10(&VAR_34, 0);
    } else if (VAR_24->codec_id == VAR_7) {
        FUNC_10(&VAR_34, 0x9ace0002);
        FUNC_10(&VAR_34, 0xaea2f732);
        FUNC_9(&VAR_34, 0xacde);
    } else if (VAR_24->codec_id == VAR_8 ||
               VAR_24->codec_id == VAR_4) {

        FUNC_9(&VAR_34, VAR_29);
    } else if (VAR_24->extradata_size) {
        VAR_35 = VAR_24->extradata;
        VAR_34 = VAR_24->extradata + VAR_24->extradata_size;
    }

    if (VAR_32) {
        int VAR_36 = !(VAR_25 & VAR_20) &&
                                 (VAR_22->strict_std_compliance < VAR_18 ||
                                  VAR_24->channel_layout < 0x40000);

        FUNC_6(VAR_23, VAR_34 - VAR_35 + 22);

        FUNC_6(VAR_23, VAR_26);

        FUNC_7(VAR_23, VAR_36 ? VAR_24->channel_layout : 0);

        if (VAR_24->codec_id == VAR_6) {
            FUNC_12(VAR_23, FUNC_11(VAR_24->codec_id, VAR_21));
        } else {
        FUNC_7(VAR_23, VAR_24->codec_tag);
        FUNC_7(VAR_23, 0x00100000);
        FUNC_7(VAR_23, 0xAA000080);
        FUNC_7(VAR_23, 0x719B3800);
        }
    } else if ((VAR_25 & VAR_19) ||
               VAR_24->codec_tag != 0x0001 ||
               VAR_34 - VAR_35) {

        FUNC_6(VAR_23, VAR_34 - VAR_35);
    }
    FUNC_8(VAR_23, VAR_35, VAR_34 - VAR_35);
    VAR_30 = FUNC_4(VAR_23) - VAR_31;
    if (VAR_30 & 1) {
        VAR_30++;
        FUNC_5(VAR_23, 0);
    }

    return VAR_30;
}
