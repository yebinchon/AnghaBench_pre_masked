
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int tBT_TRANSPORT ;
typedef size_t UINT8 ;
struct TYPE_2__ {int * tcb; } ;
typedef int BD_ADDR ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 size_t FUNC_0 (int ,int ) ;

tGATT_TCB *FUNC_1(BD_ADDR VAR_2, tBT_TRANSPORT VAR_3)
{
    tGATT_TCB *VAR_4 = ((void*)0);
    UINT8 VAR_5 = 0;

    if ((VAR_5 = FUNC_0(VAR_2, VAR_3)) != VAR_0) {
        VAR_4 = &VAR_1.tcb[VAR_5];
    }

    return VAR_4;
}
