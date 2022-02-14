
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint32_t ;
typedef unsigned long long int16_t ;
struct TYPE_3__ {int sym; int l; int r; } ;
typedef TYPE_1__ Node ;


 unsigned long long FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(uint32_t *VAR_0, int16_t *VAR_1, uint8_t *VAR_2,
                           Node *VAR_3, int VAR_4,
                           uint32_t VAR_5, int VAR_6, int *VAR_7)
{
    int VAR_8;

    VAR_8 = VAR_3[VAR_4].sym;
    if (VAR_8 != -1) {
        VAR_0[*VAR_7] = (~VAR_5) & ((1ULL << FUNC_0(VAR_6, 1)) - 1);
        VAR_1[*VAR_7] = FUNC_0(VAR_6, 1);
        VAR_2[*VAR_7] = VAR_8 + (VAR_6 == 0);
        (*VAR_7)++;
    } else {
        VAR_5 <<= 1;
        VAR_6++;
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_3[VAR_4].l, VAR_5, VAR_6,
                       VAR_7);
        VAR_5 |= 1;
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_3[VAR_4].r, VAR_5, VAR_6,
                       VAR_7);
    }
}
