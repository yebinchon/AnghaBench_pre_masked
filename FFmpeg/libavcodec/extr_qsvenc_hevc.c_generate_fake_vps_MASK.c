
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vps_rbsp_buf ;
typedef int vps_buf ;
typedef int uint8_t ;
struct TYPE_21__ {int extradata_size; int * extradata; } ;
struct TYPE_20__ {int size; int data; int * member_0; } ;
struct TYPE_19__ {int * rbsp_buffer; int rbsp_buffer_alloc_size; int * member_0; } ;
struct TYPE_16__ {scalar_t__ vui_num_ticks_poc_diff_one_minus1; int vui_poc_proportional_to_timing_flag; int vui_time_scale; int vui_num_units_in_tick; int vui_timing_info_present_flag; } ;
struct TYPE_18__ {int vps_id; TYPE_2__ vui; TYPE_1__* temporal_layer; int ptl; int temporal_id_nesting_flag; int max_sub_layers; int member_0; } ;
struct TYPE_17__ {int vps_max_layers; int vps_sub_layer_ordering_info_present_flag; int vps_num_layer_sets; scalar_t__ vps_num_hrd_parameters; scalar_t__ vps_num_ticks_poc_diff_one; int vps_poc_proportional_to_timing_flag; int vps_time_scale; int vps_num_units_in_tick; int vps_timing_info_present_flag; int * vps_max_latency_increase; int * vps_num_reorder_pics; int * vps_max_dec_pic_buffering; int ptl; int vps_temporal_id_nesting_flag; int vps_max_sub_layers; int member_0; } ;
struct TYPE_15__ {int max_latency_increase; int num_reorder_pics; int max_dec_pic_buffering; } ;
typedef int QSVEncContext ;
typedef int PutByteContext ;
typedef TYPE_3__ HEVCVPS ;
typedef TYPE_4__ HEVCSPS ;
typedef TYPE_5__ H2645RBSP ;
typedef TYPE_6__ H2645NAL ;
typedef int GetByteContext ;
typedef int GetBitContext ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int **,int *,int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_7__*,int ,char*,...) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int,TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_16 (TYPE_3__*,int ,int *,int) ;
 int FUNC_17 (TYPE_4__*,int *,unsigned int*,int ,int *,TYPE_7__*) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (int *,int *,int) ;

__attribute__((used)) static int FUNC_21(QSVEncContext *VAR_8, AVCodecContext *VAR_9)
{
    GetByteContext VAR_10;
    PutByteContext VAR_11;

    GetBitContext VAR_12;
    H2645RBSP VAR_13 = { ((void*)0) };
    H2645NAL VAR_14 = { ((void*)0) };
    HEVCSPS VAR_15 = { 0 };
    HEVCVPS VAR_16 = { 0 };
    uint8_t VAR_17[128], VAR_18[128];
    uint8_t *VAR_19;
    unsigned int VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24;

    if (!VAR_9->extradata_size) {
        FUNC_3(VAR_9, VAR_3, "No extradata returned from libmfx\n");
        return VAR_1;
    }

    FUNC_1(&VAR_13.rbsp_buffer, &VAR_13.rbsp_buffer_alloc_size, VAR_9->extradata_size);
    if (!VAR_13.rbsp_buffer)
        return FUNC_0(VAR_4);


    VAR_21 = FUNC_15(VAR_9->extradata + 4, VAR_9->extradata_size - 4, &VAR_13, &VAR_14, 1);
    if (VAR_21 < 0) {
        FUNC_3(VAR_9, VAR_3, "Error unescaping the SPS buffer\n");
        return VAR_21;
    }

    VAR_21 = FUNC_19(&VAR_12, VAR_14.data, VAR_14.size);
    if (VAR_21 < 0) {
        FUNC_2(&VAR_13.rbsp_buffer);
        return VAR_21;
    }

    FUNC_18(&VAR_12, 1);
    VAR_23 = FUNC_18(&VAR_12, 6);
    if (VAR_23 != VAR_6) {
        FUNC_3(VAR_9, VAR_3, "Unexpected NAL type in the extradata: %d\n",
               VAR_23);
        FUNC_2(&VAR_13.rbsp_buffer);
        return VAR_0;
    }
    FUNC_18(&VAR_12, 9);

    VAR_21 = FUNC_17(&VAR_15, &VAR_12, &VAR_20, 0, ((void*)0), VAR_9);
    FUNC_2(&VAR_13.rbsp_buffer);
    if (VAR_21 < 0) {
        FUNC_3(VAR_9, VAR_3, "Error parsing the SPS\n");
        return VAR_21;
    }


    VAR_16.vps_max_layers = 1;
    VAR_16.vps_max_sub_layers = VAR_15.max_sub_layers;
    VAR_16.vps_temporal_id_nesting_flag = VAR_15.temporal_id_nesting_flag;
    FUNC_20(&VAR_16.ptl, &VAR_15.ptl, sizeof(VAR_16.ptl));
    VAR_16.vps_sub_layer_ordering_info_present_flag = 1;
    for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++) {
        VAR_16.vps_max_dec_pic_buffering[VAR_22] = VAR_15.temporal_layer[VAR_22].max_dec_pic_buffering;
        VAR_16.vps_num_reorder_pics[VAR_22] = VAR_15.temporal_layer[VAR_22].num_reorder_pics;
        VAR_16.vps_max_latency_increase[VAR_22] = VAR_15.temporal_layer[VAR_22].max_latency_increase;
    }

    VAR_16.vps_num_layer_sets = 1;
    VAR_16.vps_timing_info_present_flag = VAR_15.vui.vui_timing_info_present_flag;
    VAR_16.vps_num_units_in_tick = VAR_15.vui.vui_num_units_in_tick;
    VAR_16.vps_time_scale = VAR_15.vui.vui_time_scale;
    VAR_16.vps_poc_proportional_to_timing_flag = VAR_15.vui.vui_poc_proportional_to_timing_flag;
    VAR_16.vps_num_ticks_poc_diff_one = VAR_15.vui.vui_num_ticks_poc_diff_one_minus1 + 1;
    VAR_16.vps_num_hrd_parameters = 0;


    VAR_21 = FUNC_16(&VAR_16, VAR_15.vps_id, VAR_18, sizeof(VAR_18));
    if (VAR_21 < 0) {
        FUNC_3(VAR_9, VAR_3, "Error writing the VPS\n");
        return VAR_21;
    }


    FUNC_7(&VAR_10, VAR_18, VAR_21);
    FUNC_8(&VAR_11, VAR_17, sizeof(VAR_17));

    FUNC_11(&VAR_11, 1);
    FUNC_12(&VAR_11, VAR_7 << 1);
    FUNC_12(&VAR_11, 1);

    while (FUNC_6(&VAR_10)) {
        if (FUNC_6(&VAR_10) >= 3 && FUNC_9(&VAR_10) <= 3) {
            FUNC_10(&VAR_11, 3);
            FUNC_13(&VAR_10, 2);
        } else
            FUNC_12(&VAR_11, FUNC_5(&VAR_10));
    }

    VAR_24 = FUNC_14(&VAR_11);
    VAR_19 = FUNC_4(VAR_24 + VAR_9->extradata_size + VAR_2);
    if (!VAR_19)
        return FUNC_0(VAR_4);
    FUNC_20(VAR_19, VAR_17, VAR_24);
    FUNC_20(VAR_19 + VAR_24, VAR_9->extradata, VAR_9->extradata_size);

    FUNC_2(&VAR_9->extradata);
    VAR_9->extradata = VAR_19;
    VAR_9->extradata_size += VAR_24;

    return 0;
}
