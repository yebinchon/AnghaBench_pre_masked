
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {TYPE_2__* avctx; } ;
struct LATMContext {scalar_t__ audio_mux_version_A; TYPE_1__ aac_ctx; } ;
struct TYPE_4__ {int extradata; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct LATMContext*,int *) ;
 int FUNC_4 (struct LATMContext*,int *) ;

__attribute__((used)) static int FUNC_5(struct LATMContext *VAR_3,
                                  GetBitContext *VAR_4)
{
    int VAR_5;
    uint8_t VAR_6 = FUNC_1(VAR_4, 1);
    if (!VAR_6) {
        if ((VAR_5 = FUNC_4(VAR_3, VAR_4)) < 0)
            return VAR_5;
    } else if (!VAR_3->aac_ctx.avctx->extradata) {
        FUNC_0(VAR_3->aac_ctx.avctx, VAR_1,
               "no decoder config found\n");
        return 1;
    }
    if (VAR_3->audio_mux_version_A == 0) {
        int VAR_7 = FUNC_3(VAR_3, VAR_4);
        if (VAR_7 < 0 || VAR_7 * 8LL > FUNC_2(VAR_4)) {
            FUNC_0(VAR_3->aac_ctx.avctx, VAR_2, "incomplete frame\n");
            return VAR_0;
        } else if (VAR_7 * 8 + 256 < FUNC_2(VAR_4)) {
            FUNC_0(VAR_3->aac_ctx.avctx, VAR_2,
                   "frame length mismatch %d << %d\n",
                   VAR_7 * 8, FUNC_2(VAR_4));
            return VAR_0;
        }
    }
    return 0;
}
