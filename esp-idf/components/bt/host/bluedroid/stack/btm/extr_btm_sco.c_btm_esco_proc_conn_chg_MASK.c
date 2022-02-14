
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* retrans_window; void* tx_interval; scalar_t__ tx_pkt_len; scalar_t__ rx_pkt_len; int bd_addr; } ;
struct TYPE_9__ {int (* p_esco_cback ) (int ,int *) ;TYPE_2__ data; } ;
struct TYPE_10__ {scalar_t__ state; scalar_t__ hci_handle; TYPE_3__ esco; } ;
typedef TYPE_4__ tSCO_CONN ;
typedef int tBTM_ESCO_EVT_DATA ;
struct TYPE_11__ {void* retrans_window; void* tx_interval; scalar_t__ tx_pkt_len; scalar_t__ rx_pkt_len; scalar_t__ sco_inx; void* hci_status; int bd_addr; } ;
typedef TYPE_5__ tBTM_CHG_ESCO_EVT_DATA ;
typedef void* UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {TYPE_4__* sco_db; } ;
struct TYPE_12__ {TYPE_1__ sco_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,void*) ;
 scalar_t__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3 (UINT8 VAR_5, UINT16 VAR_6, UINT8 VAR_7,
                             UINT8 VAR_8, UINT16 VAR_9,
                             UINT16 VAR_10)
{
}
