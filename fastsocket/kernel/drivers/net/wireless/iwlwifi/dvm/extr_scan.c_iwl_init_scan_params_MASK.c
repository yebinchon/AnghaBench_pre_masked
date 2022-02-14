
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct iwl_priv {void** scan_tx_ant; TYPE_1__* nvm_data; } ;
struct TYPE_2__ {int valid_tx_ant; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int ) ;

void FUNC_1(struct iwl_priv *VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_2->nvm_data->valid_tx_ant) - 1;
 if (!VAR_2->scan_tx_ant[VAR_1])
  VAR_2->scan_tx_ant[VAR_1] = VAR_3;
 if (!VAR_2->scan_tx_ant[VAR_0])
  VAR_2->scan_tx_ant[VAR_0] = VAR_3;
}
