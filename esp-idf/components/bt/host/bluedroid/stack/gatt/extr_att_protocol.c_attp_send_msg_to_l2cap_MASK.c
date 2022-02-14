
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ att_lcid; int peer_bda; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_STATUS ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {int offset; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,TYPE_2__*) ;

tGATT_STATUS FUNC_3(tGATT_TCB *VAR_6, BT_HDR *VAR_7)
{
    UINT16 VAR_8;


    if (VAR_6->att_lcid == VAR_3) {
        VAR_8 = FUNC_2 (VAR_3, VAR_6->peer_bda, VAR_7);
    } else {

        VAR_8 = (UINT16) FUNC_1 (VAR_6->att_lcid, VAR_7);



    }

    if (VAR_8 == VAR_5) {
        FUNC_0("ATT   failed to pass msg:0x%0x to L2CAP",
                         *((UINT8 *)(VAR_7 + 1) + VAR_7->offset));
        return VAR_1;
    } else if (VAR_8 == VAR_4) {
        FUNC_0("ATT congested, message accepted");
        return VAR_0;
    }
    return VAR_2;
}
