
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int timer_entry; int remote_bd_addr; int link_state; scalar_t__ is_bonding; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_12__ {int clock_offset; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
struct TYPE_10__ {scalar_t__ page_scan_rep_mode; scalar_t__ page_scan_mode; scalar_t__ clock_offset; } ;
struct TYPE_13__ {TYPE_1__ results; } ;
typedef TYPE_4__ tBTM_INQ_INFO ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_14__ {int disallow_switch; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__* FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int VAR_13 ;
 int FUNC_4 (char*,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_9 (int *,int ,int ) ;
 TYPE_7__ VAR_16 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;

BOOLEAN FUNC_12 (tL2C_LCB *VAR_17)
{
    UINT8 VAR_18 = VAR_3;
    tBTM_INQ_INFO *VAR_19;
    UINT8 VAR_20;
    UINT8 VAR_21;
    UINT16 VAR_22;
    UINT8 *VAR_23;
    UINT16 VAR_24 = FUNC_0();
    tBTM_SEC_DEV_REC *VAR_25 = FUNC_7 (VAR_17->remote_bd_addr);
    UINT8 VAR_26 = FUNC_10();

    VAR_23 = FUNC_2();

    FUNC_4 ("l2cu_create_conn_after_switch :%d num_acl:%d no_hi: %d is_bonding:%d",
                       VAR_16.disallow_switch, VAR_24, VAR_26, VAR_17->is_bonding);



    if ( ((!VAR_16.disallow_switch && (VAR_24 < 3)) || (VAR_17->is_bonding && (VAR_26 == 0)))
            && FUNC_3(VAR_23)) {
        VAR_18 = VAR_3;
    } else {
        VAR_18 = VAR_4;
    }

    VAR_17->link_state = VAR_14;


    if ((VAR_19 = FUNC_1(VAR_17->remote_bd_addr)) != ((void*)0)) {
        VAR_20 = VAR_19->results.page_scan_rep_mode;
        VAR_21 = VAR_19->results.page_scan_mode;
        VAR_22 = (UINT16)(VAR_19->results.clock_offset);
    } else {

        VAR_20 = VAR_6;
        VAR_21 = VAR_5;

        VAR_22 = (VAR_25) ? VAR_25->clock_offset : 0;
    }

    if (!FUNC_8 (VAR_17->remote_bd_addr,
                                 ( VAR_10 | VAR_7
                                   | VAR_11 | VAR_8
                                   | VAR_12 | VAR_9 ),
                                 VAR_20,
                                 VAR_21,
                                 VAR_22,
                                 VAR_18))

    {
        FUNC_5 ("L2CAP - no buffer for l2cu_create_conn");
        FUNC_11 (VAR_17);
        return (VAR_2);
    }

    FUNC_6 (VAR_0);

    FUNC_9 (&VAR_17->timer_entry, VAR_1,
                     VAR_13);

    return (VAR_15);
}
