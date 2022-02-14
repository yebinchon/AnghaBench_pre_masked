
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {int* A; int fault_addr; int fault_status; int exception; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_2(Q68State *VAR_5, uint32_t VAR_6)
{
    VAR_3;
    int16_t VAR_7 = FUNC_0(VAR_5);

    if (VAR_5->A[7] & 1) {
        VAR_5->exception = VAR_0;
        VAR_5->fault_addr = VAR_5->A[7];
        VAR_5->fault_status = VAR_1
                            | VAR_2;
        return 0;
    }

    FUNC_1(VAR_5, VAR_5->A[VAR_4]);
    VAR_5->A[VAR_4] = VAR_5->A[7];
    VAR_5->A[7] += VAR_7;
    return 16;
}
