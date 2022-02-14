
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * p_esco_cback; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ hci_handle; scalar_t__ sent_not_acked; int (* p_disc_cb ) (scalar_t__) ;TYPE_2__ esco; int rem_bd_known; } ;
typedef TYPE_3__ tSCO_CONN ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {scalar_t__ xmit_window_size; scalar_t__ num_lm_sco_bufs; TYPE_3__* sco_db; int sco_disc_reason; } ;
struct TYPE_8__ {TYPE_1__ sco_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2 (UINT16 VAR_6, UINT8 VAR_7)
{





    VAR_5.sco_cb.sco_disc_reason = VAR_7;
}
