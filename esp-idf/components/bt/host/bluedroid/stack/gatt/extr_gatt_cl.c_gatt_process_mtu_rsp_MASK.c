
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ payload_size; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_STATUS ;
typedef int tGATT_CLCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *,int ,int *) ;

void FUNC_3(tGATT_TCB *VAR_4, tGATT_CLCB *VAR_5, UINT16 VAR_6, UINT8 *VAR_7)
{
    UINT16 VAR_8;
    tGATT_STATUS VAR_9 = VAR_3;

    if (VAR_6 < VAR_2) {
        FUNC_0("invalid MTU response PDU received, discard.");
        VAR_9 = VAR_1;
    } else {
        FUNC_1(VAR_8, VAR_7);

        if (VAR_8 < VAR_4->payload_size && VAR_8 >= VAR_0) {
            VAR_4->payload_size = VAR_8;
        }
    }




    FUNC_2(VAR_5, VAR_9, ((void*)0));
}
