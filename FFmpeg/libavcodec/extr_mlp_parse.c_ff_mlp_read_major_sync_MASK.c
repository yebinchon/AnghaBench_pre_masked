
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_12__ {int size_in_bits; scalar_t__ buffer; } ;
struct TYPE_11__ {int stream_type; int header_size; int group1_bits; int group1_samplerate; int channel_arrangement; int channel_modifier_thd_stream0; int channel_modifier_thd_stream1; int channel_modifier_thd_stream2; int access_unit_size; int access_unit_size_pow2; int peak_bitrate; int num_substreams; int is_vbr; void* channel_layout_thd_stream2; void* channels_thd_stream2; void* channel_layout_thd_stream1; void* channels_thd_stream1; void* group2_samplerate; void* group2_bits; int channel_layout_mlp; int channels_mlp; } ;
typedef TYPE_1__ MLPHeaderInfo ;
typedef TYPE_2__ GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int * VAR_2 ;
 int FUNC_8 (scalar_t__,int) ;
 int * VAR_3 ;
 void** VAR_4 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int) ;
 void* FUNC_12 (int) ;
 void* FUNC_13 (int) ;

int FUNC_14(void *VAR_5, MLPHeaderInfo *VAR_6, GetBitContext *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    uint16_t VAR_11;

    FUNC_1(FUNC_6(VAR_7) == 0);

    VAR_10 = FUNC_8(VAR_7->buffer, VAR_7->size_in_bits >> 3);
    if (VAR_10 < 0 || VAR_7->size_in_bits < VAR_10 << 3) {
        FUNC_2(VAR_5, VAR_1, "packet too short, unable to read major sync\n");
        return -1;
    }

    VAR_11 = FUNC_3(VAR_7->buffer, VAR_10 - 2);
    if (VAR_11 != FUNC_0(VAR_7->buffer+VAR_10-2)) {
        FUNC_2(VAR_5, VAR_1, "major sync info header checksum error\n");
        return VAR_0;
    }

    if (FUNC_7(VAR_7, 24) != 0xf8726f)
        return VAR_0;

    VAR_6->stream_type = FUNC_4(VAR_7, 8);
    VAR_6->header_size = VAR_10;

    if (VAR_6->stream_type == 0xbb) {
        VAR_6->group1_bits = VAR_4[FUNC_4(VAR_7, 4)];
        VAR_6->group2_bits = VAR_4[FUNC_4(VAR_7, 4)];

        VAR_8 = FUNC_4(VAR_7, 4);
        VAR_6->group1_samplerate = FUNC_9(VAR_8);
        VAR_6->group2_samplerate = FUNC_9(FUNC_4(VAR_7, 4));

        FUNC_10(VAR_7, 11);

        VAR_6->channel_arrangement=
        VAR_9 = FUNC_4(VAR_7, 5);
        VAR_6->channels_mlp = VAR_2[VAR_9];
        VAR_6->channel_layout_mlp = VAR_3[VAR_9];
    } else if (VAR_6->stream_type == 0xba) {
        VAR_6->group1_bits = 24;
        VAR_6->group2_bits = 0;

        VAR_8 = FUNC_4(VAR_7, 4);
        VAR_6->group1_samplerate = FUNC_9(VAR_8);
        VAR_6->group2_samplerate = 0;

        FUNC_10(VAR_7, 4);

        VAR_6->channel_modifier_thd_stream0 = FUNC_4(VAR_7, 2);
        VAR_6->channel_modifier_thd_stream1 = FUNC_4(VAR_7, 2);

        VAR_6->channel_arrangement=
        VAR_9 = FUNC_4(VAR_7, 5);
        VAR_6->channels_thd_stream1 = FUNC_12(VAR_9);
        VAR_6->channel_layout_thd_stream1 = FUNC_13(VAR_9);

        VAR_6->channel_modifier_thd_stream2 = FUNC_4(VAR_7, 2);

        VAR_9 = FUNC_4(VAR_7, 13);
        VAR_6->channels_thd_stream2 = FUNC_12(VAR_9);
        VAR_6->channel_layout_thd_stream2 = FUNC_13(VAR_9);
    } else
        return VAR_0;

    VAR_6->access_unit_size = 40 << (VAR_8 & 7);
    VAR_6->access_unit_size_pow2 = 64 << (VAR_8 & 7);

    FUNC_11(VAR_7, 48);

    VAR_6->is_vbr = FUNC_5(VAR_7);

    VAR_6->peak_bitrate = (FUNC_4(VAR_7, 15) * VAR_6->group1_samplerate + 8) >> 4;

    VAR_6->num_substreams = FUNC_4(VAR_7, 4);

    FUNC_11(VAR_7, 4 + (VAR_10 - 17) * 8);

    return 0;
}
