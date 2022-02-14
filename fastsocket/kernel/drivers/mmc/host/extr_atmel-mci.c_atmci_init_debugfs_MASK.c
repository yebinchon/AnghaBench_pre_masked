
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int class_dev; struct dentry* debugfs_root; } ;
struct dentry {int dummy; } ;
struct atmel_mci_slot {int completed_events; int pending_events; int state; struct atmel_mci_slot* host; struct mmc_host* mmc; } ;
struct atmel_mci {int completed_events; int pending_events; int state; struct atmel_mci* host; struct mmc_host* mmc; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_1 (char*,int ,struct dentry*,struct atmel_mci_slot*,int *) ;
 struct dentry* FUNC_2 (char*,int ,struct dentry*,int *) ;
 struct dentry* FUNC_3 (char*,int ,struct dentry*,int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(struct atmel_mci_slot *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->mmc;
 struct atmel_mci *VAR_5 = VAR_3->host;
 struct dentry *VAR_6;
 struct dentry *VAR_7;

 VAR_6 = VAR_4->debugfs_root;
 if (!VAR_6)
  return;

 VAR_7 = FUNC_1("regs", VAR_0, VAR_6, VAR_5,
   &VAR_1);
 if (FUNC_0(VAR_7))
  return;
 if (!VAR_7)
  goto err;

 VAR_7 = FUNC_1("req", VAR_0, VAR_6, VAR_3, &VAR_2);
 if (!VAR_7)
  goto err;

 VAR_7 = FUNC_2("state", VAR_0, VAR_6, (u32 *)&VAR_5->state);
 if (!VAR_7)
  goto err;

 VAR_7 = FUNC_3("pending_events", VAR_0, VAR_6,
         (u32 *)&VAR_5->pending_events);
 if (!VAR_7)
  goto err;

 VAR_7 = FUNC_3("completed_events", VAR_0, VAR_6,
         (u32 *)&VAR_5->completed_events);
 if (!VAR_7)
  goto err;

 return;

err:
 FUNC_4(&VAR_4->class_dev, "failed to initialize debugfs for slot\n");
}
