
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_3__ {int sym; int n0; int count; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uint32_t *VAR_1, int16_t *VAR_2, uint8_t *VAR_3,
                           Node *VAR_4, int VAR_5,
                           uint32_t VAR_6, int VAR_7, int *VAR_8, int VAR_9)
{
    int VAR_10;

    VAR_10 = VAR_4[VAR_5].sym;
    if (VAR_10 != VAR_0 || (VAR_9 && !VAR_4[VAR_5].count)) {
        VAR_1[*VAR_8] = VAR_6;
        VAR_2[*VAR_8] = VAR_7;
        VAR_3[*VAR_8] = VAR_10;
        (*VAR_8)++;
    } else {
        VAR_6 <<= 1;
        VAR_7++;
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_4[VAR_5].n0, VAR_6, VAR_7,
                       VAR_8, VAR_9);
        VAR_6 |= 1;
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_4[VAR_5].n0 + 1, VAR_6, VAR_7,
                       VAR_8, VAR_9);
    }
}
