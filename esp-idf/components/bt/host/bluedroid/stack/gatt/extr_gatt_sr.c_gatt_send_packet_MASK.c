
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int payload_size; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_STATUS ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_8__ {int len; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

tGATT_STATUS FUNC_4 (tGATT_TCB *VAR_3, UINT8 *VAR_4, UINT16 VAR_5)
{
    BT_HDR *VAR_6 = ((void*)0);
    UINT8 *VAR_7 = ((void*)0);
    UINT16 VAR_8;
    tGATT_STATUS VAR_9;

    if (VAR_5 > VAR_3->payload_size){
        return VAR_0;
    }

    VAR_8 = (UINT16)(sizeof(BT_HDR) + VAR_3->payload_size + VAR_2);
    if ((VAR_6 = (BT_HDR *)FUNC_3(VAR_8)) == ((void*)0)) {
        return VAR_1;
    }

    FUNC_2(VAR_6, 0, VAR_8);
    VAR_6->len = VAR_5;
    VAR_7 = (UINT8 *)(VAR_6 + 1) + VAR_2;
    FUNC_1(VAR_7, VAR_4, VAR_5);

    VAR_9 = FUNC_0(VAR_3, VAR_6);
    return VAR_9;
}
