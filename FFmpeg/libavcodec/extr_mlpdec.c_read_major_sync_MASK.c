
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ codec_id; scalar_t__ sample_rate; scalar_t__ frame_size; int bits_per_raw_sample; scalar_t__ sample_fmt; int channels; void* channel_layout; } ;
struct TYPE_10__ {int (* mlp_select_pack_output ) (int ,int ,int ,int) ;int mlp_pack_output; } ;
struct TYPE_13__ {scalar_t__ access_unit_size; scalar_t__ access_unit_size_pow2; int num_substreams; size_t max_decoded_substream; int params_valid; int needs_reordering; TYPE_2__* substream; TYPE_6__* avctx; TYPE_1__ dsp; int major_sync_header_size; } ;
struct TYPE_12__ {int group1_bits; int group2_bits; scalar_t__ group2_samplerate; scalar_t__ group1_samplerate; scalar_t__ access_unit_size; scalar_t__ access_unit_size_pow2; int num_substreams; int stream_type; int channel_layout_mlp; int channel_layout_thd_stream2; int channel_layout_thd_stream1; int channel_arrangement; scalar_t__ channel_modifier_thd_stream2; scalar_t__ channel_modifier_thd_stream1; int channel_modifier_thd_stream0; int header_size; } ;
struct TYPE_11__ {int mask; void* matrix_encoding; scalar_t__ restart_seen; int max_matrix_channel; int output_shift; int ch_assign; } ;
typedef TYPE_3__ MLPHeaderInfo ;
typedef TYPE_4__ MLPDecodeContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_0 (int,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;


 scalar_t__ VAR_20 ;
 int FUNC_1 (TYPE_6__*,int ,char*,...) ;
 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_3__*,int *) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(MLPDecodeContext *VAR_21, GetBitContext *VAR_22)
{
    MLPHeaderInfo VAR_23;
    int VAR_24, VAR_25;

    if ((VAR_25 = FUNC_3(VAR_21->avctx, &VAR_23, VAR_22)) != 0)
        return VAR_25;

    if (VAR_23.group1_bits == 0) {
        FUNC_1(VAR_21->avctx, VAR_9, "invalid/unknown bits per sample\n");
        return VAR_0;
    }
    if (VAR_23.group2_bits > VAR_23.group1_bits) {
        FUNC_1(VAR_21->avctx, VAR_9,
               "Channel group 2 cannot have more bits per sample than group 1.\n");
        return VAR_0;
    }

    if (VAR_23.group2_samplerate && VAR_23.group2_samplerate != VAR_23.group1_samplerate) {
        FUNC_1(VAR_21->avctx, VAR_9,
               "Channel groups with differing sample rates are not currently supported.\n");
        return VAR_0;
    }

    if (VAR_23.group1_samplerate == 0) {
        FUNC_1(VAR_21->avctx, VAR_9, "invalid/unknown sampling rate\n");
        return VAR_0;
    }
    if (VAR_23.group1_samplerate > VAR_18) {
        FUNC_1(VAR_21->avctx, VAR_9,
               "Sampling rate %d is greater than the supported maximum (%d).\n",
               VAR_23.group1_samplerate, VAR_18);
        return VAR_0;
    }
    if (VAR_23.access_unit_size > VAR_16) {
        FUNC_1(VAR_21->avctx, VAR_9,
               "Block size %d is greater than the supported maximum (%d).\n",
               VAR_23.access_unit_size, VAR_16);
        return VAR_0;
    }
    if (VAR_23.access_unit_size_pow2 > VAR_17) {
        FUNC_1(VAR_21->avctx, VAR_9,
               "Block size pow2 %d is greater than the supported maximum (%d).\n",
               VAR_23.access_unit_size_pow2, VAR_17);
        return VAR_0;
    }

    if (VAR_23.num_substreams == 0)
        return VAR_0;
    if (VAR_21->avctx->codec_id == VAR_6 && VAR_23.num_substreams > 2) {
        FUNC_1(VAR_21->avctx, VAR_9, "MLP only supports up to 2 substreams.\n");
        return VAR_0;
    }
    if (VAR_23.num_substreams > VAR_19) {
        FUNC_2(VAR_21->avctx,
                              "%d substreams (more than the "
                              "maximum supported by the decoder)",
                              VAR_23.num_substreams);
        return VAR_1;
    }

    VAR_21->major_sync_header_size = VAR_23.header_size;

    VAR_21->access_unit_size = VAR_23.access_unit_size;
    VAR_21->access_unit_size_pow2 = VAR_23.access_unit_size_pow2;

    VAR_21->num_substreams = VAR_23.num_substreams;


    VAR_21->max_decoded_substream = FUNC_0(VAR_21->num_substreams - 1, 2);

    VAR_21->avctx->sample_rate = VAR_23.group1_samplerate;
    VAR_21->avctx->frame_size = VAR_23.access_unit_size;

    VAR_21->avctx->bits_per_raw_sample = VAR_23.group1_bits;
    if (VAR_23.group1_bits > 16)
        VAR_21->avctx->sample_fmt = VAR_15;
    else
        VAR_21->avctx->sample_fmt = VAR_14;
    VAR_21->dsp.mlp_pack_output = VAR_21->dsp.mlp_select_pack_output(VAR_21->substream[VAR_21->max_decoded_substream].ch_assign,
                                                           VAR_21->substream[VAR_21->max_decoded_substream].output_shift,
                                                           VAR_21->substream[VAR_21->max_decoded_substream].max_matrix_channel,
                                                           VAR_21->avctx->sample_fmt == VAR_15);

    VAR_21->params_valid = 1;
    for (VAR_24 = 0; VAR_24 < VAR_19; VAR_24++)
        VAR_21->substream[VAR_24].restart_seen = 0;




    if (VAR_21->avctx->codec_id == VAR_6) {
        if (VAR_23.stream_type != 0xbb) {
            FUNC_2(VAR_21->avctx,
                        "unexpected stream_type %X in MLP",
                        VAR_23.stream_type);
            return VAR_1;
        }
        if ((VAR_24 = (VAR_23.num_substreams > 1)))
            VAR_21->substream[0].mask = VAR_3;
        VAR_21->substream[VAR_24].mask = VAR_23.channel_layout_mlp;
    } else {
        if (VAR_23.stream_type != 0xba) {
            FUNC_2(VAR_21->avctx,
                        "unexpected stream_type %X in !MLP",
                        VAR_23.stream_type);
            return VAR_1;
        }
        if ((VAR_24 = (VAR_23.num_substreams > 1)))
            VAR_21->substream[0].mask = VAR_3;
        if (VAR_23.num_substreams > 2)
            if (VAR_23.channel_layout_thd_stream2)
                VAR_21->substream[2].mask = VAR_23.channel_layout_thd_stream2;
            else
                VAR_21->substream[2].mask = VAR_23.channel_layout_thd_stream1;
        VAR_21->substream[VAR_24].mask = VAR_23.channel_layout_thd_stream1;

        if (VAR_21->avctx->channels<=2 && VAR_21->substream[VAR_24].mask == VAR_2 && VAR_21->max_decoded_substream == 1) {
            FUNC_1(VAR_21->avctx, VAR_8, "Mono stream with 2 substreams, ignoring 2nd\n");
            VAR_21->max_decoded_substream = 0;
            if (VAR_21->avctx->channels==2)
                VAR_21->avctx->channel_layout = VAR_3;
        }
    }

    VAR_21->needs_reordering = VAR_23.channel_arrangement >= 18 && VAR_23.channel_arrangement <= 20;
    for (VAR_24 = 0; VAR_24 < VAR_19; VAR_24++)
        VAR_21->substream[VAR_24].matrix_encoding = VAR_13;
    if (VAR_21->avctx->codec_id == VAR_7) {
        if (VAR_23.num_substreams > 2 &&
            VAR_23.channel_layout_thd_stream2 & VAR_4 &&
            VAR_23.channel_layout_thd_stream2 & VAR_5 &&
            VAR_23.channel_modifier_thd_stream2 == VAR_20)
            VAR_21->substream[2].matrix_encoding = VAR_11;

        if (VAR_23.num_substreams > 1 &&
            VAR_23.channel_layout_thd_stream1 & VAR_4 &&
            VAR_23.channel_layout_thd_stream1 & VAR_5 &&
            VAR_23.channel_modifier_thd_stream1 == VAR_20)
            VAR_21->substream[1].matrix_encoding = VAR_11;

        if (VAR_23.num_substreams > 0)
            switch (VAR_23.channel_modifier_thd_stream0) {
            case 128:
                VAR_21->substream[0].matrix_encoding = VAR_10;
                break;
            case 129:
                VAR_21->substream[0].matrix_encoding = VAR_12;
                break;
            default:
                break;
            }
    }

    return 0;
}
