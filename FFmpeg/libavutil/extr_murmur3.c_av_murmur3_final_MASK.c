
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int h1; int h2; int len; scalar_t__ state; scalar_t__ state_pos; } ;
typedef TYPE_1__ AVMurMur3 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;

void FUNC_5(AVMurMur3 *VAR_0, uint8_t VAR_1[16])
{
    uint64_t VAR_2 = VAR_0->h1, VAR_3 = VAR_0->h2;
    FUNC_4(VAR_0->state + VAR_0->state_pos, 0, sizeof(VAR_0->state) - VAR_0->state_pos);
    VAR_2 ^= FUNC_2(VAR_0->state) ^ VAR_0->len;
    VAR_3 ^= FUNC_3(VAR_0->state) ^ VAR_0->len;
    VAR_2 += VAR_3;
    VAR_3 += VAR_2;
    VAR_2 = FUNC_1(VAR_2);
    VAR_3 = FUNC_1(VAR_3);
    VAR_2 += VAR_3;
    VAR_3 += VAR_2;
    FUNC_0(VAR_1, VAR_2);
    FUNC_0(VAR_1 + 8, VAR_3);
}
