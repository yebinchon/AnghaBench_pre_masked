
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int avctx; } ;
struct LATMContext {int audio_mux_version_A; int frame_length_type; int frame_length; TYPE_1__ aac_ctx; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct LATMContext*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct LATMContext *VAR_2,
                                  GetBitContext *VAR_3)
{
    int VAR_4, VAR_5 = FUNC_1(VAR_3, 1);

    VAR_2->audio_mux_version_A = 0;
    if (VAR_5)
        VAR_2->audio_mux_version_A = FUNC_1(VAR_3, 1);

    if (!VAR_2->audio_mux_version_A) {

        if (VAR_5)
            FUNC_4(VAR_3);

        FUNC_5(VAR_3, 1);
        FUNC_5(VAR_3, 6);

        if (FUNC_1(VAR_3, 4)) {
            FUNC_0(VAR_2->aac_ctx.avctx, "Multiple programs");
            return VAR_1;
        }




        if (FUNC_1(VAR_3, 3)) {
            FUNC_0(VAR_2->aac_ctx.avctx, "Multiple layers");
            return VAR_1;
        }


        if (!VAR_5) {
            if ((VAR_4 = FUNC_3(VAR_2, VAR_3, 0)) < 0)
                return VAR_4;
        } else {
            int VAR_6 = FUNC_4(VAR_3);
            if ((VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_6)) < 0)
                return VAR_4;
        }

        VAR_2->frame_length_type = FUNC_1(VAR_3, 3);
        switch (VAR_2->frame_length_type) {
        case 0:
            FUNC_5(VAR_3, 8);
            break;
        case 1:
            VAR_2->frame_length = FUNC_1(VAR_3, 9);
            break;
        case 3:
        case 4:
        case 5:
            FUNC_5(VAR_3, 6);
            break;
        case 6:
        case 7:
            FUNC_5(VAR_3, 1);
            break;
        }

        if (FUNC_1(VAR_3, 1)) {
            if (VAR_5) {
                FUNC_4(VAR_3);
            } else {
                int VAR_7;
                do {
                    if (FUNC_2(VAR_3) < 9)
                        return VAR_0;
                    VAR_7 = FUNC_1(VAR_3, 1);
                    FUNC_5(VAR_3, 8);
                } while (VAR_7);
            }
        }

        if (FUNC_1(VAR_3, 1))
            FUNC_5(VAR_3, 8);
    }

    return 0;
}
