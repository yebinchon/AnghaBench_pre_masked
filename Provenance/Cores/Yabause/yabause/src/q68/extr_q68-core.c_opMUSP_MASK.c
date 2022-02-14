
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int SR; int USP; int * A; int exception; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_0(Q68State *VAR_4, uint32_t VAR_5)
{
    if (!(VAR_4->SR & VAR_2)) {
        VAR_4->exception = VAR_0;
        return 0;
    }

    VAR_1;
    if (VAR_5 & 0x0008) {
        VAR_4->USP = VAR_4->A[VAR_3];
    } else {
        VAR_4->A[VAR_3] = VAR_4->USP;
    }
    return 4;
}
