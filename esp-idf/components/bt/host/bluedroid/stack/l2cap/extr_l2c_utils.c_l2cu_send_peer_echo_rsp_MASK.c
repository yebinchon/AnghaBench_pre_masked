
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ cur_echo_id; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {scalar_t__ (* get_acl_data_size_classic ) () ;scalar_t__ (* get_acl_packet_size_classic ) () ;} ;
typedef int BT_HDR ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int * FUNC_4 (TYPE_1__*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

void FUNC_7 (tL2C_LCB *VAR_8, UINT8 VAR_9, UINT8 *VAR_10, UINT16 VAR_11)
{
    BT_HDR *VAR_12;
    UINT8 *VAR_13;
    UINT16 VAR_14;

    if (!VAR_9 || VAR_9 == VAR_8->cur_echo_id) {

        FUNC_1 ("L2CAP ignoring duplicate echo request (%d)", VAR_9);
        return;
    } else {
        VAR_8->cur_echo_id = VAR_9;
    }

    uint16_t VAR_15 = FUNC_2()->get_acl_data_size_classic();
    uint16_t VAR_16 = FUNC_2()->get_acl_packet_size_classic();

    VAR_14 = (VAR_2 > VAR_16) ?
               VAR_15 : (UINT16)VAR_2;
    VAR_14 -= (UINT16)(VAR_0 + VAR_1 + VAR_6 +
                       VAR_4 + VAR_5);

    if (VAR_11 > VAR_14) {
        VAR_11 = 0;
    }

    if ((VAR_12 = FUNC_4 (VAR_8, (UINT16)(VAR_5 + VAR_11), VAR_3, VAR_9)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no buffer for echo_rsp");
        return;
    }

    VAR_13 = (UINT8 *)(VAR_12 + 1) + VAR_7 + VAR_1 +
        VAR_6 + VAR_4;

    if (VAR_11) {
        FUNC_0 (VAR_13, VAR_10, VAR_11);
    }

    FUNC_3 (VAR_8, ((void*)0), VAR_12);
}
