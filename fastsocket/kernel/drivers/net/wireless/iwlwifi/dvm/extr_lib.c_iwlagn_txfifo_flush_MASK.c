
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_txfifo_flush_cmd {int queue_control; int flush_control; } ;
struct iwl_priv {scalar_t__ valid_contexts; TYPE_1__* nvm_data; } ;
struct iwl_host_cmd {int data; int flags; int len; int id; } ;
typedef int flush_cmd ;
struct TYPE_2__ {scalar_t__ sku_cap_11n_enable; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_5 (struct iwl_txfifo_flush_cmd*,int ,int) ;

int FUNC_6(struct iwl_priv *VAR_16, u32 VAR_17)
{
 struct iwl_txfifo_flush_cmd VAR_18;
 struct iwl_host_cmd VAR_19 = {
  .id = VAR_15,
  .len = sizeof(struct iwl_txfifo_flush_cmd), 
  .flags = VAR_0,
  .data = &VAR_18, 
 };

 FUNC_5(&VAR_18, 0, sizeof(VAR_18));

 VAR_18.queue_control = VAR_14 | VAR_13 |
      VAR_10 | VAR_11 |
      VAR_12;
 if ((VAR_16->valid_contexts != FUNC_0(VAR_9)))
  VAR_18.queue_control |= VAR_8 |
        VAR_7 |
        VAR_3 |
        VAR_4 |
        VAR_5 |
        VAR_6;

 if (VAR_16->nvm_data->sku_cap_11n_enable)
  VAR_18.queue_control |= VAR_1;

 if (VAR_17)
  VAR_18.queue_control = FUNC_3(VAR_17);

 FUNC_1(VAR_16, "queue control: 0x%x\n",
         VAR_18.queue_control);
 VAR_18.flush_control = FUNC_2(VAR_2);

 return FUNC_4(VAR_16, &VAR_19);
}
