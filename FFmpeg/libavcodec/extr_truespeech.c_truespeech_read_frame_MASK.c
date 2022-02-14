
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int (* bswap_buf ) (int *,int const*,int) ;} ;
struct TYPE_5__ {int flag; int* offset1; int* offset2; int* pulseval; int* pulseoff; void** pulsepos; void** vector; scalar_t__ buffer; TYPE_1__ bdsp; } ;
typedef TYPE_2__ TSContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,int const*,int) ;
 void*** VAR_0 ;

__attribute__((used)) static void FUNC_5(TSContext *VAR_1, const uint8_t *VAR_2)
{
    GetBitContext VAR_3;

    VAR_1->bdsp.bswap_buf((uint32_t *) VAR_1->buffer, (const uint32_t *) VAR_2, 8);
    FUNC_3(&VAR_3, VAR_1->buffer, 32 * 8);

    VAR_1->vector[7] = VAR_0[7][FUNC_0(&VAR_3, 3)];
    VAR_1->vector[6] = VAR_0[6][FUNC_0(&VAR_3, 3)];
    VAR_1->vector[5] = VAR_0[5][FUNC_0(&VAR_3, 3)];
    VAR_1->vector[4] = VAR_0[4][FUNC_0(&VAR_3, 4)];
    VAR_1->vector[3] = VAR_0[3][FUNC_0(&VAR_3, 4)];
    VAR_1->vector[2] = VAR_0[2][FUNC_0(&VAR_3, 4)];
    VAR_1->vector[1] = VAR_0[1][FUNC_0(&VAR_3, 5)];
    VAR_1->vector[0] = VAR_0[0][FUNC_0(&VAR_3, 5)];
    VAR_1->flag = FUNC_1(&VAR_3);

    VAR_1->offset1[0] = FUNC_0(&VAR_3, 4) << 4;
    VAR_1->offset2[3] = FUNC_0(&VAR_3, 7);
    VAR_1->offset2[2] = FUNC_0(&VAR_3, 7);
    VAR_1->offset2[1] = FUNC_0(&VAR_3, 7);
    VAR_1->offset2[0] = FUNC_0(&VAR_3, 7);

    VAR_1->offset1[1] = FUNC_0(&VAR_3, 4);
    VAR_1->pulseval[1] = FUNC_0(&VAR_3, 14);
    VAR_1->pulseval[0] = FUNC_0(&VAR_3, 14);

    VAR_1->offset1[1] |= FUNC_0(&VAR_3, 4) << 4;
    VAR_1->pulseval[3] = FUNC_0(&VAR_3, 14);
    VAR_1->pulseval[2] = FUNC_0(&VAR_3, 14);

    VAR_1->offset1[0] |= FUNC_1(&VAR_3);
    VAR_1->pulsepos[0] = FUNC_2(&VAR_3, 27);
    VAR_1->pulseoff[0] = FUNC_0(&VAR_3, 4);

    VAR_1->offset1[0] |= FUNC_1(&VAR_3) << 1;
    VAR_1->pulsepos[1] = FUNC_2(&VAR_3, 27);
    VAR_1->pulseoff[1] = FUNC_0(&VAR_3, 4);

    VAR_1->offset1[0] |= FUNC_1(&VAR_3) << 2;
    VAR_1->pulsepos[2] = FUNC_2(&VAR_3, 27);
    VAR_1->pulseoff[2] = FUNC_0(&VAR_3, 4);

    VAR_1->offset1[0] |= FUNC_1(&VAR_3) << 3;
    VAR_1->pulsepos[3] = FUNC_2(&VAR_3, 27);
    VAR_1->pulseoff[3] = FUNC_0(&VAR_3, 4);
}
