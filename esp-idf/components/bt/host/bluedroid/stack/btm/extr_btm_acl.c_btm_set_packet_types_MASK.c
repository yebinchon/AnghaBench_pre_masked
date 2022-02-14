
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {int pkt_types_mask; int hci_handle; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT16 ;
struct TYPE_6__ {int btm_acl_pkt_types_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (int ,int) ;

tBTM_STATUS FUNC_3 (tACL_CONN *VAR_5, UINT16 VAR_6)
{
    UINT16 VAR_7;
    FUNC_0 ("btm_set_packet_types\n");

    VAR_7 = (VAR_6 & VAR_1 &
                      VAR_4.btm_acl_pkt_types_supported);


    VAR_7 |= ((VAR_6 & VAR_0) |
                       (VAR_4.btm_acl_pkt_types_supported & VAR_0));


    FUNC_1 (VAR_5, &VAR_7);

    FUNC_0 ("SetPacketType Mask -> 0x%04x\n", VAR_7);

    if (!FUNC_2 (VAR_5->hci_handle, VAR_7)) {
        return (VAR_3);
    }

    VAR_5->pkt_types_mask = VAR_7;

    return (VAR_2);
}
