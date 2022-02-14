
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_22__ {TYPE_6__* priv_data; } ;
struct TYPE_20__ {TYPE_4__* sps; TYPE_1__* pps; } ;
struct TYPE_18__ {size_t slice_ctb_addr_rs; scalar_t__ slice_addr; int slice_loop_filter_across_slices_enabled_flag; int tc_offset; int beta_offset; scalar_t__ dependent_slice_segment_flag; } ;
struct TYPE_21__ {scalar_t__* tab_slice_address; TYPE_5__ ps; TYPE_3__ sh; int * filter_slice_edges; TYPE_2__* deblock; int avctx; } ;
struct TYPE_19__ {int log2_ctb_size; int ctb_size; int width; int height; } ;
struct TYPE_17__ {int tc_offset; int beta_offset; } ;
struct TYPE_16__ {int* ctb_addr_rs_to_ts; int* ctb_addr_ts_to_rs; } ;
typedef TYPE_6__ HEVCContext ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_6__*,int,int,int) ;
 int FUNC_3 (TYPE_6__*,int,int,int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (TYPE_6__*,int,int,int,int ) ;
 int FUNC_6 (TYPE_6__*,int,int,int) ;
 int FUNC_7 (TYPE_6__*,int,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_2, void *VAR_3)
{
    HEVCContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = 1 << VAR_4->ps.sps->log2_ctb_size;
    int VAR_6 = 1;
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = VAR_4->ps.pps->ctb_addr_rs_to_ts[VAR_4->sh.slice_ctb_addr_rs];
    int VAR_10;

    if (!VAR_9 && VAR_4->sh.dependent_slice_segment_flag) {
        FUNC_0(VAR_4->avctx, VAR_1, "Impossible initial tile.\n");
        return VAR_0;
    }

    if (VAR_4->sh.dependent_slice_segment_flag) {
        int VAR_11 = VAR_4->ps.pps->ctb_addr_ts_to_rs[VAR_9 - 1];
        if (VAR_4->tab_slice_address[VAR_11] != VAR_4->sh.slice_addr) {
            FUNC_0(VAR_4->avctx, VAR_1, "Previous slice segment missing\n");
            return VAR_0;
        }
    }

    while (VAR_6 && VAR_9 < VAR_4->ps.sps->ctb_size) {
        int VAR_12 = VAR_4->ps.pps->ctb_addr_ts_to_rs[VAR_9];

        VAR_7 = (VAR_12 % ((VAR_4->ps.sps->width + VAR_5 - 1) >> VAR_4->ps.sps->log2_ctb_size)) << VAR_4->ps.sps->log2_ctb_size;
        VAR_8 = (VAR_12 / ((VAR_4->ps.sps->width + VAR_5 - 1) >> VAR_4->ps.sps->log2_ctb_size)) << VAR_4->ps.sps->log2_ctb_size;
        FUNC_6(VAR_4, VAR_7, VAR_8, VAR_9);

        VAR_10 = FUNC_1(VAR_4, VAR_9);
        if (VAR_10 < 0) {
            VAR_4->tab_slice_address[VAR_12] = -1;
            return VAR_10;
        }

        FUNC_7(VAR_4, VAR_7 >> VAR_4->ps.sps->log2_ctb_size, VAR_8 >> VAR_4->ps.sps->log2_ctb_size);

        VAR_4->deblock[VAR_12].beta_offset = VAR_4->sh.beta_offset;
        VAR_4->deblock[VAR_12].tc_offset = VAR_4->sh.tc_offset;
        VAR_4->filter_slice_edges[VAR_12] = VAR_4->sh.slice_loop_filter_across_slices_enabled_flag;

        VAR_6 = FUNC_5(VAR_4, VAR_7, VAR_8, VAR_4->ps.sps->log2_ctb_size, 0);
        if (VAR_6 < 0) {
            VAR_4->tab_slice_address[VAR_12] = -1;
            return VAR_6;
        }


        VAR_9++;
        FUNC_4(VAR_4, VAR_9);
        FUNC_3(VAR_4, VAR_7, VAR_8, VAR_5);
    }

    if (VAR_7 + VAR_5 >= VAR_4->ps.sps->width &&
        VAR_8 + VAR_5 >= VAR_4->ps.sps->height)
        FUNC_2(VAR_4, VAR_7, VAR_8, VAR_5);

    return VAR_9;
}
