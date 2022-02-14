
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint16_t ;
struct TYPE_4__ {int SR; int USP; int * A; int SSP; } ;
typedef TYPE_1__ Q68State ;


 int const VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Q68State *VAR_1, uint16_t VAR_2)
{
    const uint16_t VAR_3 = VAR_1->SR;
    VAR_1->SR = VAR_2;
    if ((VAR_3 ^ VAR_2) & VAR_0) {
        if (VAR_2 & VAR_0) {
            VAR_1->USP = VAR_1->A[7];
            VAR_1->A[7] = VAR_1->SSP;
        } else {
            VAR_1->SSP = VAR_1->A[7];
            VAR_1->A[7] = VAR_1->USP;
        }
    }
    FUNC_0(VAR_1);
}
