
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* sps; } ;
struct TYPE_15__ {int* tab_ipm; TYPE_3__* ref; TYPE_2__ ps; TYPE_6__* HEVClc; } ;
struct TYPE_12__ {size_t mpm_idx; int rem_intra_luma_pred_mode; } ;
struct TYPE_14__ {TYPE_4__ pu; scalar_t__ ctb_left_flag; scalar_t__ ctb_up_flag; } ;
struct TYPE_13__ {int pred_flag; } ;
struct TYPE_11__ {TYPE_5__* tab_mvf; } ;
struct TYPE_9__ {int log2_min_pu_size; int min_pu_width; int log2_ctb_size; } ;
typedef TYPE_5__ MvField ;
typedef TYPE_6__ HEVCLocalContext ;
typedef TYPE_7__ HEVCContext ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(HEVCContext *VAR_5, int VAR_6, int VAR_7, int VAR_8,
                                int VAR_9)
{
    HEVCLocalContext *VAR_10 = VAR_5->HEVClc;
    int VAR_11 = VAR_6 >> VAR_5->ps.sps->log2_min_pu_size;
    int VAR_12 = VAR_7 >> VAR_5->ps.sps->log2_min_pu_size;
    int VAR_13 = VAR_5->ps.sps->min_pu_width;
    int VAR_14 = VAR_8 >> VAR_5->ps.sps->log2_min_pu_size;
    int VAR_15 = FUNC_1(VAR_6, VAR_5->ps.sps->log2_ctb_size);
    int VAR_16 = FUNC_1(VAR_7, VAR_5->ps.sps->log2_ctb_size);

    int VAR_17 = (VAR_10->ctb_up_flag || VAR_16) ?
                    VAR_5->tab_ipm[(VAR_12 - 1) * VAR_13 + VAR_11] : VAR_1;
    int VAR_18 = (VAR_10->ctb_left_flag || VAR_15) ?
                    VAR_5->tab_ipm[VAR_12 * VAR_13 + VAR_11 - 1] : VAR_1;

    int VAR_19 = (VAR_7 >> (VAR_5->ps.sps->log2_ctb_size)) << (VAR_5->ps.sps->log2_ctb_size);

    MvField *VAR_20 = VAR_5->ref->tab_mvf;
    int VAR_21;
    int VAR_22[3];
    int VAR_23, VAR_24;


    if ((VAR_7 - 1) < VAR_19)
        VAR_17 = VAR_1;

    if (VAR_18 == VAR_17) {
        if (VAR_18 < 2) {
            VAR_22[0] = VAR_2;
            VAR_22[1] = VAR_1;
            VAR_22[2] = VAR_0;
        } else {
            VAR_22[0] = VAR_18;
            VAR_22[1] = 2 + ((VAR_18 - 2 - 1 + 32) & 31);
            VAR_22[2] = 2 + ((VAR_18 - 2 + 1) & 31);
        }
    } else {
        VAR_22[0] = VAR_18;
        VAR_22[1] = VAR_17;
        if (VAR_22[0] != VAR_2 && VAR_22[1] != VAR_2) {
            VAR_22[2] = VAR_2;
        } else if (VAR_22[0] != VAR_1 && VAR_22[1] != VAR_1) {
            VAR_22[2] = VAR_1;
        } else {
            VAR_22[2] = VAR_0;
        }
    }

    if (VAR_9) {
        VAR_21 = VAR_22[VAR_10->pu.mpm_idx];
    } else {
        if (VAR_22[0] > VAR_22[1])
            FUNC_0(VAR_4, VAR_22[0], VAR_22[1]);
        if (VAR_22[0] > VAR_22[2])
            FUNC_0(VAR_4, VAR_22[0], VAR_22[2]);
        if (VAR_22[1] > VAR_22[2])
            FUNC_0(VAR_4, VAR_22[1], VAR_22[2]);

        VAR_21 = VAR_10->pu.rem_intra_luma_pred_mode;
        for (VAR_23 = 0; VAR_23 < 3; VAR_23++)
            if (VAR_21 >= VAR_22[VAR_23])
                VAR_21++;
    }


    if (!VAR_14)
        VAR_14 = 1;
    for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
        FUNC_2(&VAR_5->tab_ipm[(VAR_12 + VAR_23) * VAR_13 + VAR_11],
               VAR_21, VAR_14);

        for (VAR_24 = 0; VAR_24 < VAR_14; VAR_24++) {
            VAR_20[(VAR_12 + VAR_24) * VAR_13 + VAR_11 + VAR_23].pred_flag = VAR_3;
        }
    }

    return VAR_21;
}
