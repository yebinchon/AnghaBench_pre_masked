
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_29__ {int (* execute2 ) (TYPE_9__*,int ,int*,int*,int) ;} ;
struct TYPE_28__ {int size; int skipped_bytes; int* skipped_bytes_pos; int * data; } ;
struct TYPE_25__ {int num_entry_point_offsets; int slice_ctb_addr_rs; int* entry_point_offset; int* size; int* offset; } ;
struct TYPE_23__ {TYPE_1__* pps; TYPE_2__* sps; } ;
struct TYPE_27__ {int threads_number; TYPE_5__ sh; TYPE_9__* avctx; TYPE_3__ ps; int wpp_err; TYPE_16__** HEVClcList; TYPE_10__** sList; int const* data; TYPE_6__* HEVClc; } ;
struct TYPE_24__ {int index; } ;
struct TYPE_26__ {TYPE_4__ gb; } ;
struct TYPE_22__ {int ctb_width; int ctb_height; } ;
struct TYPE_21__ {scalar_t__ entropy_coding_sync_enabled_flag; } ;
struct TYPE_20__ {int first_qp_group; int qp_y; } ;
struct TYPE_19__ {TYPE_16__* HEVClc; } ;
typedef TYPE_6__ HEVCLocalContext ;
typedef TYPE_7__ HEVCContext ;
typedef TYPE_8__ H2645NAL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_9__*,int ,char*,...) ;
 TYPE_10__* FUNC_4 (int) ;
 int* FUNC_5 (int,int) ;
 TYPE_16__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_9__*,int) ;
 int FUNC_8 (TYPE_9__*) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_10__*,TYPE_7__*,int) ;
 int FUNC_10 (TYPE_9__*,int ,int*,int*,int) ;

__attribute__((used)) static int FUNC_11(HEVCContext *VAR_4, const H2645NAL *VAR_5)
{
    const uint8_t *VAR_6 = VAR_5->data;
    int VAR_7 = VAR_5->size;
    HEVCLocalContext *VAR_8 = VAR_4->HEVClc;
    int *VAR_9 = FUNC_5(VAR_4->sh.num_entry_point_offsets + 1, sizeof(int));
    int *VAR_10 = FUNC_5(VAR_4->sh.num_entry_point_offsets + 1, sizeof(int));
    int64_t VAR_11;
    int64_t VAR_12, VAR_13 = 0;
    int VAR_14, VAR_15, VAR_16 = 0;

    if (!VAR_9 || !VAR_10) {
        FUNC_2(VAR_9);
        FUNC_2(VAR_10);
        return FUNC_0(VAR_2);
    }

    if (VAR_4->sh.slice_ctb_addr_rs + VAR_4->sh.num_entry_point_offsets * VAR_4->ps.sps->ctb_width >= VAR_4->ps.sps->ctb_width * VAR_4->ps.sps->ctb_height) {
        FUNC_3(VAR_4->avctx, VAR_1, "WPP ctb addresses are wrong (%d %d %d %d)\n",
            VAR_4->sh.slice_ctb_addr_rs, VAR_4->sh.num_entry_point_offsets,
            VAR_4->ps.sps->ctb_width, VAR_4->ps.sps->ctb_height
        );
        VAR_16 = VAR_0;
        goto error;
    }

    FUNC_7(VAR_4->avctx, VAR_4->sh.num_entry_point_offsets + 1);

    if (!VAR_4->sList[1]) {
        for (VAR_14 = 1; VAR_14 < VAR_4->threads_number; VAR_14++) {
            VAR_4->sList[VAR_14] = FUNC_4(sizeof(HEVCContext));
            FUNC_9(VAR_4->sList[VAR_14], VAR_4, sizeof(HEVCContext));
            VAR_4->HEVClcList[VAR_14] = FUNC_6(sizeof(HEVCLocalContext));
            VAR_4->sList[VAR_14]->HEVClc = VAR_4->HEVClcList[VAR_14];
        }
    }

    VAR_11 = (VAR_8->gb.index >> 3);

    for (VAR_15 = 0, VAR_13 = 0, VAR_12 = VAR_11 + VAR_4->sh.entry_point_offset[0]; VAR_15 < VAR_5->skipped_bytes; VAR_15++) {
        if (VAR_5->skipped_bytes_pos[VAR_15] >= VAR_11 && VAR_5->skipped_bytes_pos[VAR_15] < VAR_12) {
            VAR_12--;
            VAR_13++;
        }
    }

    for (VAR_14 = 1; VAR_14 < VAR_4->sh.num_entry_point_offsets; VAR_14++) {
        VAR_11 += (VAR_4->sh.entry_point_offset[VAR_14 - 1] - VAR_13);
        for (VAR_15 = 0, VAR_13 = 0, VAR_12 = VAR_11
             + VAR_4->sh.entry_point_offset[VAR_14]; VAR_15 < VAR_5->skipped_bytes; VAR_15++) {
            if (VAR_5->skipped_bytes_pos[VAR_15] >= VAR_11 && VAR_5->skipped_bytes_pos[VAR_15] < VAR_12) {
                VAR_12--;
                VAR_13++;
            }
        }
        VAR_4->sh.size[VAR_14 - 1] = VAR_4->sh.entry_point_offset[VAR_14] - VAR_13;
        VAR_4->sh.offset[VAR_14 - 1] = VAR_11;

    }
    if (VAR_4->sh.num_entry_point_offsets != 0) {
        VAR_11 += VAR_4->sh.entry_point_offset[VAR_4->sh.num_entry_point_offsets - 1] - VAR_13;
        if (VAR_7 < VAR_11) {
            FUNC_3(VAR_4->avctx, VAR_1, "entry_point_offset table is corrupted\n");
            VAR_16 = VAR_0;
            goto error;
        }
        VAR_4->sh.size[VAR_4->sh.num_entry_point_offsets - 1] = VAR_7 - VAR_11;
        VAR_4->sh.offset[VAR_4->sh.num_entry_point_offsets - 1] = VAR_11;

    }
    VAR_4->data = VAR_6;

    for (VAR_14 = 1; VAR_14 < VAR_4->threads_number; VAR_14++) {
        VAR_4->sList[VAR_14]->HEVClc->first_qp_group = 1;
        VAR_4->sList[VAR_14]->HEVClc->qp_y = VAR_4->sList[0]->HEVClc->qp_y;
        FUNC_9(VAR_4->sList[VAR_14], VAR_4, sizeof(HEVCContext));
        VAR_4->sList[VAR_14]->HEVClc = VAR_4->HEVClcList[VAR_14];
    }

    FUNC_1(&VAR_4->wpp_err, 0);
    FUNC_8(VAR_4->avctx);

    for (VAR_14 = 0; VAR_14 <= VAR_4->sh.num_entry_point_offsets; VAR_14++) {
        VAR_10[VAR_14] = VAR_14;
        VAR_9[VAR_14] = 0;
    }

    if (VAR_4->ps.pps->entropy_coding_sync_enabled_flag)
        VAR_4->avctx->execute2(VAR_4->avctx, VAR_3, VAR_10, VAR_9, VAR_4->sh.num_entry_point_offsets + 1);

    for (VAR_14 = 0; VAR_14 <= VAR_4->sh.num_entry_point_offsets; VAR_14++)
        VAR_16 += VAR_9[VAR_14];
error:
    FUNC_2(VAR_9);
    FUNC_2(VAR_10);
    return VAR_16;
}
