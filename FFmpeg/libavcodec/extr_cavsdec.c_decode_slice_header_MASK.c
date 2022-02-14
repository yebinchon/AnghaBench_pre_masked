
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {int stc; int mb_height; int mby; int mbidx; int mb_width; int flags; int avctx; int pic_structure; TYPE_2__ cur; int qp; scalar_t__ qp_fixed; int pic_qp_fixed; } ;
struct TYPE_5__ {scalar_t__ pict_type; } ;
typedef int GetBitContext ;
typedef TYPE_3__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(AVSContext *VAR_5, GetBitContext *VAR_6)
{
    if (VAR_5->stc > 0xAF)
        FUNC_0(VAR_5->avctx, VAR_1, "unexpected start code 0x%02x\n", VAR_5->stc);

    if (VAR_5->stc >= VAR_5->mb_height) {
        FUNC_0(VAR_5->avctx, VAR_1, "stc 0x%02x is too large\n", VAR_5->stc);
        return VAR_0;
    }

    VAR_5->mby = VAR_5->stc;
    VAR_5->mbidx = VAR_5->mby * VAR_5->mb_width;


    VAR_5->flags &= ~(VAR_3 | VAR_4);
    if (!VAR_5->pic_qp_fixed) {
        VAR_5->qp_fixed = FUNC_2(VAR_6);
        VAR_5->qp = FUNC_1(VAR_6, 6);
    }

    if ((VAR_5->cur.f->pict_type != VAR_2) ||
        (!VAR_5->pic_structure && VAR_5->mby >= VAR_5->mb_width / 2))
        if (FUNC_2(VAR_6)) {
            FUNC_0(VAR_5->avctx, VAR_1,
                   "weighted prediction not yet supported\n");
        }
    return 0;
}
