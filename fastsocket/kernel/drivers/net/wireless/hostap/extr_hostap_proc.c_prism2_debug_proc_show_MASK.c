
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct seq_file {TYPE_5__* private; } ;
struct TYPE_8__ {TYPE_2__** crypt; } ;
struct TYPE_10__ {int fw_tx_rate_control; int beacon_int; int dtim_period; int wds_max_connections; int dev_enabled; int sw_tick_stuck; int pri_only; int sram_type; int no_pri; TYPE_4__* func; TYPE_3__ crypt_info; int * intransmitfid; int * txfid; int next_alloc; int next_txfid; } ;
typedef TYPE_5__ local_info_t ;
struct TYPE_9__ {scalar_t__ hw_type; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, void *VAR_4)
{
 local_info_t *VAR_5 = VAR_3->private;
 int VAR_6;

 FUNC_0(VAR_3, "next_txfid=%d next_alloc=%d\n",
     VAR_5->next_txfid, VAR_5->next_alloc);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_0(VAR_3, "FID: tx=%04X intransmit=%04X\n",
      VAR_5->txfid[VAR_6], VAR_5->intransmitfid[VAR_6]);
 FUNC_0(VAR_3, "FW TX rate control: %d\n", VAR_5->fw_tx_rate_control);
 FUNC_0(VAR_3, "beacon_int=%d\n", VAR_5->beacon_int);
 FUNC_0(VAR_3, "dtim_period=%d\n", VAR_5->dtim_period);
 FUNC_0(VAR_3, "wds_max_connections=%d\n", VAR_5->wds_max_connections);
 FUNC_0(VAR_3, "dev_enabled=%d\n", VAR_5->dev_enabled);
 FUNC_0(VAR_3, "sw_tick_stuck=%d\n", VAR_5->sw_tick_stuck);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5->crypt_info.crypt[VAR_6] &&
      VAR_5->crypt_info.crypt[VAR_6]->ops) {
   FUNC_0(VAR_3, "crypt[%d]=%s\n", VAR_6,
       VAR_5->crypt_info.crypt[VAR_6]->ops->name);
  }
 }
 FUNC_0(VAR_3, "pri_only=%d\n", VAR_5->pri_only);
 FUNC_0(VAR_3, "pci=%d\n", VAR_5->func->hw_type == VAR_0);
 FUNC_0(VAR_3, "sram_type=%d\n", VAR_5->sram_type);
 FUNC_0(VAR_3, "no_pri=%d\n", VAR_5->no_pri);

 return 0;
}
