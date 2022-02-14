
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int cc; } ;
struct TYPE_14__ {TYPE_3__* sps; TYPE_2__* pps; } ;
struct TYPE_11__ {size_t slice_ctb_addr_rs; scalar_t__ dependent_slice_segment_flag; int first_slice_in_pic_flag; } ;
struct TYPE_15__ {int threads_number; TYPE_4__ ps; TYPE_8__* HEVClc; TYPE_1__ sh; } ;
struct TYPE_13__ {int ctb_width; } ;
struct TYPE_12__ {int* ctb_addr_rs_to_ts; scalar_t__* tile_id; scalar_t__ entropy_coding_sync_enabled_flag; scalar_t__ tiles_enabled_flag; } ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;

int FUNC_5(HEVCContext *VAR_0, int VAR_1)
{
    if (VAR_1 == VAR_0->ps.pps->ctb_addr_rs_to_ts[VAR_0->sh.slice_ctb_addr_rs]) {
        int VAR_2 = FUNC_0(VAR_0);
        if (VAR_2 < 0)
            return VAR_2;
        if (VAR_0->sh.dependent_slice_segment_flag == 0 ||
            (VAR_0->ps.pps->tiles_enabled_flag &&
             VAR_0->ps.pps->tile_id[VAR_1] != VAR_0->ps.pps->tile_id[VAR_1 - 1]))
            FUNC_1(VAR_0);

        if (!VAR_0->sh.first_slice_in_pic_flag &&
            VAR_0->ps.pps->entropy_coding_sync_enabled_flag) {
            if (VAR_1 % VAR_0->ps.sps->ctb_width == 0) {
                if (VAR_0->ps.sps->ctb_width == 1)
                    FUNC_1(VAR_0);
                else if (VAR_0->sh.dependent_slice_segment_flag == 1)
                    FUNC_4(VAR_0);
            }
        }
    } else {
        if (VAR_0->ps.pps->tiles_enabled_flag &&
            VAR_0->ps.pps->tile_id[VAR_1] != VAR_0->ps.pps->tile_id[VAR_1 - 1]) {
            int VAR_3;
            if (VAR_0->threads_number == 1)
                VAR_3 = FUNC_2(VAR_0->HEVClc);
            else {
                VAR_3 = FUNC_0(VAR_0);
            }
            if (VAR_3 < 0)
                return VAR_3;
            FUNC_1(VAR_0);
        }
        if (VAR_0->ps.pps->entropy_coding_sync_enabled_flag) {
            if (VAR_1 % VAR_0->ps.sps->ctb_width == 0) {
                int VAR_4;
                FUNC_3(&VAR_0->HEVClc->cc);
                if (VAR_0->threads_number == 1)
                    VAR_4 = FUNC_2(VAR_0->HEVClc);
                else {
                    VAR_4 = FUNC_0(VAR_0);
                }
                if (VAR_4 < 0)
                    return VAR_4;

                if (VAR_0->ps.sps->ctb_width == 1)
                    FUNC_1(VAR_0);
                else
                    FUNC_4(VAR_0);
            }
        }
    }
    return 0;
}
