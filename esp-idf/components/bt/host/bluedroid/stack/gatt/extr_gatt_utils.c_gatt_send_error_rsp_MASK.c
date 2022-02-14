
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int tGATT_STATUS ;
typedef int tGATT_SR_MSG ;
struct TYPE_2__ {int handle; void* reason; void* cmd_code; } ;
typedef TYPE_1__ tGATT_ERROR ;
typedef void* UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

tGATT_STATUS FUNC_3 (tGATT_TCB *VAR_2, UINT8 VAR_3, UINT8 VAR_4,
                                  UINT16 VAR_5, BOOLEAN VAR_6)
{
    tGATT_ERROR VAR_7;
    tGATT_STATUS VAR_8;
    BT_HDR *VAR_9;

    VAR_7.cmd_code = VAR_4;
    VAR_7.reason = VAR_3;
    VAR_7.handle = VAR_5;

    if ((VAR_9 = FUNC_0(VAR_2, VAR_1, (tGATT_SR_MSG *)&VAR_7)) != ((void*)0)) {
        VAR_8 = FUNC_1 (VAR_2, VAR_9);
    } else {
        VAR_8 = VAR_0;
    }

    if (VAR_6) {
        FUNC_2(VAR_2);
    }

    return VAR_8;
}
