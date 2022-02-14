
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sps; } ;
struct TYPE_11__ {TYPE_2__ ps; TYPE_4__* HEVClc; } ;
struct TYPE_9__ {int cand_up; int cand_left; int cand_up_left; int cand_up_right_sap; int cand_up_right; int cand_bottom_left; } ;
struct TYPE_10__ {int ctb_up_left_flag; int end_of_tiles_x; int end_of_tiles_y; TYPE_3__ na; scalar_t__ ctb_up_right_flag; scalar_t__ ctb_left_flag; scalar_t__ ctb_up_flag; } ;
struct TYPE_7__ {int log2_ctb_size; } ;
typedef TYPE_4__ HEVCLocalContext ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (int,int) ;

void FUNC_1(HEVCContext *VAR_0, int VAR_1, int VAR_2,
                                     int VAR_3, int VAR_4)
{
    HEVCLocalContext *VAR_5 = VAR_0->HEVClc;
    int VAR_6 = FUNC_0(VAR_1, VAR_0->ps.sps->log2_ctb_size);
    int VAR_7 = FUNC_0(VAR_2, VAR_0->ps.sps->log2_ctb_size);

    VAR_5->na.cand_up = (VAR_5->ctb_up_flag || VAR_7);
    VAR_5->na.cand_left = (VAR_5->ctb_left_flag || VAR_6);
    VAR_5->na.cand_up_left = (!VAR_6 && !VAR_7) ? VAR_5->ctb_up_left_flag : VAR_5->na.cand_left && VAR_5->na.cand_up;
    VAR_5->na.cand_up_right_sap =
            ((VAR_6 + VAR_3) == (1 << VAR_0->ps.sps->log2_ctb_size)) ?
                    VAR_5->ctb_up_right_flag && !VAR_7 : VAR_5->na.cand_up;
    VAR_5->na.cand_up_right =
            VAR_5->na.cand_up_right_sap
                     && (VAR_1 + VAR_3) < VAR_5->end_of_tiles_x;
    VAR_5->na.cand_bottom_left = ((VAR_2 + VAR_4) >= VAR_5->end_of_tiles_y) ? 0 : VAR_5->na.cand_left;
}
