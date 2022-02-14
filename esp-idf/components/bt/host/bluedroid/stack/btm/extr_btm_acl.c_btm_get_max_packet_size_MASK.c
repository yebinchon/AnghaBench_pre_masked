
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkt_types_mask; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT16 ;
struct TYPE_7__ {int btm_acl_pkt_types_supported; } ;
struct TYPE_6__ {int (* get_address ) () ;} ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_26 ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;

UINT16 FUNC_5 (BD_ADDR VAR_27)
{
    tACL_CONN *VAR_28 = FUNC_1(VAR_27, VAR_13);
    UINT16 VAR_29 = 0;
    UINT16 VAR_30 = 0;
    FUNC_0 ("btm_get_max_packet_size\n");
    if (VAR_28 != ((void*)0)) {
        VAR_29 = VAR_28->pkt_types_mask;
    } else {

        if (FUNC_3 (FUNC_2()->get_address(), VAR_27, VAR_0) == 0) {
            VAR_29 = VAR_26.btm_acl_pkt_types_supported;
        }
    }

    if (VAR_29) {
        if (!(VAR_29 & VAR_12)) {
            VAR_30 = VAR_25;
        } else if (!(VAR_29 & VAR_9)) {
            VAR_30 = VAR_22;
        } else if (!(VAR_29 & VAR_11)) {
            VAR_30 = VAR_24;
        } else if (VAR_29 & VAR_3) {
            VAR_30 = VAR_16;
        } else if (!(VAR_29 & VAR_8)) {
            VAR_30 = VAR_21;
        } else if (VAR_29 & VAR_6) {
            VAR_30 = VAR_19;
        } else if (VAR_29 & VAR_2) {
            VAR_30 = VAR_15;
        } else if (VAR_29 & VAR_5) {
            VAR_30 = VAR_18;
        } else if (!(VAR_29 & VAR_10)) {
            VAR_30 = VAR_23;
        } else if (!(VAR_29 & VAR_7)) {
            VAR_30 = VAR_20;
        } else if (VAR_29 & VAR_1) {
            VAR_30 = VAR_14;
        } else if (VAR_29 & VAR_4) {
            VAR_30 = VAR_17;
        }
    }

    return (VAR_30);
}
