
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* sps; } ;
struct TYPE_14__ {scalar_t__ seq_decode; scalar_t__ nal_unit_type; int avctx; TYPE_4__* DPB; TYPE_2__ ps; } ;
struct TYPE_13__ {scalar_t__ sequence; int poc; TYPE_3__* frame; } ;
struct TYPE_12__ {scalar_t__* buf; } ;
struct TYPE_10__ {int log2_max_poc_lsb; } ;
typedef TYPE_4__ HEVCFrame ;
typedef TYPE_5__ HEVCContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static HEVCFrame *FUNC_3(HEVCContext *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5 = (1 << VAR_2->ps.sps->log2_max_poc_lsb) - 1;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->DPB); VAR_4++) {
        HEVCFrame *VAR_6 = &VAR_2->DPB[VAR_4];
        if (VAR_6->frame->buf[0] && (VAR_6->sequence == VAR_2->seq_decode)) {
            if ((VAR_6->poc & VAR_5) == VAR_3)
                return VAR_6;
        }
    }

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->DPB); VAR_4++) {
        HEVCFrame *VAR_7 = &VAR_2->DPB[VAR_4];
        if (VAR_7->frame->buf[0] && VAR_7->sequence == VAR_2->seq_decode) {
            if (VAR_7->poc == VAR_3 || (VAR_7->poc & VAR_5) == VAR_3)
                return VAR_7;
        }
    }

    if (VAR_2->nal_unit_type != VAR_1 && !FUNC_1(VAR_2))
        FUNC_2(VAR_2->avctx, VAR_0,
               "Could not find ref with POC %d\n", VAR_3);
    return ((void*)0);
}
