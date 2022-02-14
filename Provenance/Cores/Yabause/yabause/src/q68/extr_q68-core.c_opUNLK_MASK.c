
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* A; int fault_addr; int fault_status; int exception; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_1(Q68State *VAR_5, uint32_t VAR_6)
{
    VAR_3;




    VAR_5->A[7] = VAR_5->A[VAR_4];

    if (VAR_5->A[7] & 1) {
        VAR_5->exception = VAR_0;
        VAR_5->fault_addr = VAR_5->A[7];
        VAR_5->fault_status = VAR_1
                            | VAR_2;
        return 0;
    }

    VAR_5->A[VAR_4] = FUNC_0(VAR_5, VAR_5->A[7]);
    VAR_5->A[7] += 4;
    return 12;
}
