
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


typedef size_t ctb_row ;
struct TYPE_22__ {TYPE_6__* priv_data; } ;
struct TYPE_19__ {TYPE_3__* sps; TYPE_2__* pps; } ;
struct TYPE_16__ {int slice_ctb_addr_rs; int num_entry_point_offsets; int * size; scalar_t__* offset; } ;
struct TYPE_21__ {int threads_number; int* tab_slice_address; int avctx; int wpp_err; TYPE_4__ ps; TYPE_1__ sh; scalar_t__ data; TYPE_5__* HEVClc; struct TYPE_21__** sList; } ;
struct TYPE_20__ {int cc; int gb; } ;
struct TYPE_18__ {int log2_ctb_size; int width; int ctb_size; int ctb_width; int height; } ;
struct TYPE_17__ {int* ctb_addr_rs_to_ts; int* ctb_addr_ts_to_rs; } ;
typedef TYPE_5__ HEVCLocalContext ;
typedef TYPE_6__ HEVCContext ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_6__*,int,int,int) ;
 int FUNC_4 (TYPE_6__*,int,int,int) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int ,int,int,int) ;
 int FUNC_8 (int ,int,int,int) ;
 int FUNC_9 (TYPE_6__*,int,int,int,int ) ;
 int FUNC_10 (TYPE_6__*,int,int,int) ;
 int FUNC_11 (TYPE_6__*,int,int) ;
 int FUNC_12 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    HEVCContext *VAR_5 = VAR_1->priv_data, *VAR_6;
    HEVCLocalContext *VAR_7;
    int VAR_8 = 1<< VAR_5->ps.sps->log2_ctb_size;
    int VAR_9 = 1;
    int *VAR_10 = VAR_2;
    int VAR_11 = VAR_10[VAR_3];
    int VAR_12 = VAR_5->sh.slice_ctb_addr_rs + VAR_11 * ((VAR_5->ps.sps->width + VAR_8 - 1) >> VAR_5->ps.sps->log2_ctb_size);
    int VAR_13 = VAR_5->ps.pps->ctb_addr_rs_to_ts[VAR_12];
    int VAR_14 = VAR_11 % VAR_5->threads_number;
    int VAR_15;

    VAR_6 = VAR_5->sList[VAR_4];
    VAR_7 = VAR_6->HEVClc;

    if(VAR_11) {
        VAR_15 = FUNC_12(&VAR_7->gb, VAR_6->data + VAR_6->sh.offset[VAR_11 - 1], VAR_6->sh.size[VAR_11 - 1]);
        if (VAR_15 < 0)
            goto error;
        FUNC_6(&VAR_7->cc, VAR_6->data + VAR_6->sh.offset[(VAR_11)-1], VAR_6->sh.size[VAR_11 - 1]);
    }

    while(VAR_9 && VAR_13 < VAR_6->ps.sps->ctb_size) {
        int VAR_16 = (VAR_12 % VAR_6->ps.sps->ctb_width) << VAR_6->ps.sps->log2_ctb_size;
        int VAR_17 = (VAR_12 / VAR_6->ps.sps->ctb_width) << VAR_6->ps.sps->log2_ctb_size;

        FUNC_10(VAR_6, VAR_16, VAR_17, VAR_13);

        FUNC_7(VAR_6->avctx, VAR_11, VAR_14, VAR_0);

        if (FUNC_0(&VAR_5->wpp_err)) {
            FUNC_8(VAR_6->avctx, VAR_11 , VAR_14, VAR_0);
            return 0;
        }

        VAR_15 = FUNC_2(VAR_6, VAR_13);
        if (VAR_15 < 0)
            goto error;
        FUNC_11(VAR_6, VAR_16 >> VAR_6->ps.sps->log2_ctb_size, VAR_17 >> VAR_6->ps.sps->log2_ctb_size);
        VAR_9 = FUNC_9(VAR_6, VAR_16, VAR_17, VAR_6->ps.sps->log2_ctb_size, 0);

        if (VAR_9 < 0) {
            VAR_15 = VAR_9;
            goto error;
        }

        VAR_13++;

        FUNC_5(VAR_6, VAR_13);
        FUNC_8(VAR_6->avctx, VAR_11, VAR_14, 1);
        FUNC_4(VAR_6, VAR_16, VAR_17, VAR_8);

        if (!VAR_9 && (VAR_16+VAR_8) < VAR_6->ps.sps->width && VAR_11 != VAR_6->sh.num_entry_point_offsets) {
            FUNC_1(&VAR_5->wpp_err, 1);
            FUNC_8(VAR_6->avctx, VAR_11 ,VAR_14, VAR_0);
            return 0;
        }

        if ((VAR_16+VAR_8) >= VAR_6->ps.sps->width && (VAR_17+VAR_8) >= VAR_6->ps.sps->height ) {
            FUNC_3(VAR_6, VAR_16, VAR_17, VAR_8);
            FUNC_8(VAR_6->avctx, VAR_11 , VAR_14, VAR_0);
            return VAR_13;
        }
        VAR_12 = VAR_6->ps.pps->ctb_addr_ts_to_rs[VAR_13];
        VAR_16+=VAR_8;

        if(VAR_16 >= VAR_6->ps.sps->width) {
            break;
        }
    }
    FUNC_8(VAR_6->avctx, VAR_11 ,VAR_14, VAR_0);

    return 0;
error:
    VAR_6->tab_slice_address[VAR_12] = -1;
    FUNC_1(&VAR_5->wpp_err, 1);
    FUNC_8(VAR_6->avctx, VAR_11 ,VAR_14, VAR_0);
    return VAR_15;
}
