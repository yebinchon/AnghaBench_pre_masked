
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* sps; TYPE_4__* pps; } ;
struct TYPE_8__ {int slice_addr; } ;
struct TYPE_13__ {scalar_t__* tab_slice_address; TYPE_3__ ps; TYPE_1__ sh; TYPE_5__* HEVClc; } ;
struct TYPE_12__ {int first_qp_group; int end_of_tiles_x; int boundary_flags; int ctb_left_flag; int ctb_up_flag; int ctb_up_right_flag; int ctb_up_left_flag; int end_of_tiles_y; } ;
struct TYPE_11__ {int* ctb_addr_ts_to_rs; scalar_t__* tile_id; int* col_idxX; int* column_width; size_t* ctb_addr_rs_to_ts; scalar_t__ tiles_enabled_flag; scalar_t__ entropy_coding_sync_enabled_flag; } ;
struct TYPE_9__ {int log2_ctb_size; int width; int ctb_width; int height; } ;
typedef TYPE_5__ HEVCLocalContext ;
typedef TYPE_6__ HEVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(HEVCContext *VAR_4, int VAR_5, int VAR_6,
                                 int VAR_7)
{
    HEVCLocalContext *VAR_8 = VAR_4->HEVClc;
    int VAR_9 = 1 << VAR_4->ps.sps->log2_ctb_size;
    int VAR_10 = VAR_4->ps.pps->ctb_addr_ts_to_rs[VAR_7];
    int VAR_11 = VAR_10 - VAR_4->sh.slice_addr;

    VAR_4->tab_slice_address[VAR_10] = VAR_4->sh.slice_addr;

    if (VAR_4->ps.pps->entropy_coding_sync_enabled_flag) {
        if (VAR_5 == 0 && (VAR_6 & (VAR_9 - 1)) == 0)
            VAR_8->first_qp_group = 1;
        VAR_8->end_of_tiles_x = VAR_4->ps.sps->width;
    } else if (VAR_4->ps.pps->tiles_enabled_flag) {
        if (VAR_7 && VAR_4->ps.pps->tile_id[VAR_7] != VAR_4->ps.pps->tile_id[VAR_7 - 1]) {
            int VAR_12 = VAR_4->ps.pps->col_idxX[VAR_5 >> VAR_4->ps.sps->log2_ctb_size];
            VAR_8->end_of_tiles_x = VAR_5 + (VAR_4->ps.pps->column_width[VAR_12] << VAR_4->ps.sps->log2_ctb_size);
            VAR_8->first_qp_group = 1;
        }
    } else {
        VAR_8->end_of_tiles_x = VAR_4->ps.sps->width;
    }

    VAR_8->end_of_tiles_y = FUNC_0(VAR_6 + VAR_9, VAR_4->ps.sps->height);

    VAR_8->boundary_flags = 0;
    if (VAR_4->ps.pps->tiles_enabled_flag) {
        if (VAR_5 > 0 && VAR_4->ps.pps->tile_id[VAR_7] != VAR_4->ps.pps->tile_id[VAR_4->ps.pps->ctb_addr_rs_to_ts[VAR_10 - 1]])
            VAR_8->boundary_flags |= VAR_1;
        if (VAR_5 > 0 && VAR_4->tab_slice_address[VAR_10] != VAR_4->tab_slice_address[VAR_10 - 1])
            VAR_8->boundary_flags |= VAR_0;
        if (VAR_6 > 0 && VAR_4->ps.pps->tile_id[VAR_7] != VAR_4->ps.pps->tile_id[VAR_4->ps.pps->ctb_addr_rs_to_ts[VAR_10 - VAR_4->ps.sps->ctb_width]])
            VAR_8->boundary_flags |= VAR_3;
        if (VAR_6 > 0 && VAR_4->tab_slice_address[VAR_10] != VAR_4->tab_slice_address[VAR_10 - VAR_4->ps.sps->ctb_width])
            VAR_8->boundary_flags |= VAR_2;
    } else {
        if (VAR_11 <= 0)
            VAR_8->boundary_flags |= VAR_0;
        if (VAR_11 < VAR_4->ps.sps->ctb_width)
            VAR_8->boundary_flags |= VAR_2;
    }

    VAR_8->ctb_left_flag = ((VAR_5 > 0) && (VAR_11 > 0) && !(VAR_8->boundary_flags & VAR_1));
    VAR_8->ctb_up_flag = ((VAR_6 > 0) && (VAR_11 >= VAR_4->ps.sps->ctb_width) && !(VAR_8->boundary_flags & VAR_3));
    VAR_8->ctb_up_right_flag = ((VAR_6 > 0) && (VAR_11+1 >= VAR_4->ps.sps->ctb_width) && (VAR_4->ps.pps->tile_id[VAR_7] == VAR_4->ps.pps->tile_id[VAR_4->ps.pps->ctb_addr_rs_to_ts[VAR_10+1 - VAR_4->ps.sps->ctb_width]]));
    VAR_8->ctb_up_left_flag = ((VAR_5 > 0) && (VAR_6 > 0) && (VAR_11-1 >= VAR_4->ps.sps->ctb_width) && (VAR_4->ps.pps->tile_id[VAR_7] == VAR_4->ps.pps->tile_id[VAR_4->ps.pps->ctb_addr_rs_to_ts[VAR_10-1 - VAR_4->ps.sps->ctb_width]]));
}
