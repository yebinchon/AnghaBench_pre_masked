
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int avctx; } ;
struct TYPE_12__ {int id_aac; int ready_for_dequant; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef int GetBitContext ;
typedef TYPE_2__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int *,int,int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static unsigned int FUNC_9(AACContext *VAR_4, SpectralBandReplication *VAR_5,
                                  GetBitContext *VAR_6, int VAR_7)
{
    unsigned int VAR_8 = FUNC_3(VAR_6);

    VAR_5->id_aac = VAR_7;
    VAR_5->ready_for_dequant = 1;

    if (VAR_7 == VAR_3 || VAR_7 == VAR_1) {
        if (FUNC_6(VAR_4, VAR_5, VAR_6)) {
            FUNC_7(VAR_5);
            return FUNC_3(VAR_6) - VAR_8;
        }
    } else if (VAR_7 == VAR_2) {
        if (FUNC_4(VAR_4, VAR_5, VAR_6)) {
            FUNC_7(VAR_5);
            return FUNC_3(VAR_6) - VAR_8;
        }
    } else {
        FUNC_0(VAR_4->avctx, VAR_0,
            "Invalid bitstream - cannot apply SBR to element type %d\n", VAR_7);
        FUNC_7(VAR_5);
        return FUNC_3(VAR_6) - VAR_8;
    }
    if (FUNC_2(VAR_6)) {
        int VAR_9 = FUNC_1(VAR_6, 4);
        if (VAR_9 == 15)
            VAR_9 += FUNC_1(VAR_6, 8);

        VAR_9 <<= 3;
        while (VAR_9 > 7) {
            VAR_9 -= 2;
            FUNC_5(VAR_4, VAR_5, VAR_6, FUNC_1(VAR_6, 2), &VAR_9);
        }
        if (VAR_9 < 0) {
            FUNC_0(VAR_4->avctx, VAR_0, "SBR Extension over read.\n");
        }
        if (VAR_9 > 0)
            FUNC_8(VAR_6, VAR_9);
    }

    return FUNC_3(VAR_6) - VAR_8;
}
