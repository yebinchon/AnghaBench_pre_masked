
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spillover_bitsize; void* spillover_nbits; int has_residual_lsps; int gb; } ;
typedef TYPE_1__ WMAVoiceContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(WMAVoiceContext *VAR_1)
{
    GetBitContext *VAR_2 = &VAR_1->gb;
    unsigned int VAR_3, VAR_4 = 0;

    FUNC_3(VAR_2, 4);
    VAR_1->has_residual_lsps = FUNC_1(VAR_2);
    do {
        VAR_3 = FUNC_0(VAR_2, 6);

        VAR_4 += VAR_3;
    } while (VAR_3 == 0x3F);
    VAR_1->spillover_nbits = FUNC_0(VAR_2, VAR_1->spillover_bitsize);

    return FUNC_2(VAR_2) >= 0 ? VAR_4 : VAR_0;
}
