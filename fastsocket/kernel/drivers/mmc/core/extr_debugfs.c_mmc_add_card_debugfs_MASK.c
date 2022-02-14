
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int debugfs_root; } ;
struct mmc_card {int dev; struct dentry* debugfs_root; int state; struct mmc_host* host; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,struct dentry*,struct mmc_card*,int *) ;
 int FUNC_3 (char*,int ,struct dentry*,int *) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct mmc_card*) ;
 scalar_t__ FUNC_7 (struct mmc_card*) ;
 scalar_t__ FUNC_8 (struct mmc_card*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_9(struct mmc_card *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->host;
 struct dentry *VAR_5;

 if (!VAR_4->debugfs_root)
  return;

 VAR_5 = FUNC_1(FUNC_6(VAR_3), VAR_4->debugfs_root);
 if (FUNC_0(VAR_5))

  return;
 if (!VAR_5)


  goto err;

 VAR_3->debugfs_root = VAR_5;

 if (!FUNC_3("state", VAR_0, VAR_5, &VAR_3->state))
  goto err;

 if (FUNC_7(VAR_3) || FUNC_8(VAR_3))
  if (!FUNC_2("status", VAR_0, VAR_5, VAR_3,
     &VAR_1))
   goto err;

 if (FUNC_7(VAR_3))
  if (!FUNC_2("ext_csd", VAR_0, VAR_5, VAR_3,
     &VAR_2))
   goto err;

 return;

err:
 FUNC_4(VAR_5);
 VAR_3->debugfs_root = ((void*)0);
 FUNC_5(&VAR_3->dev, "failed to initialize debugfs\n");
}
