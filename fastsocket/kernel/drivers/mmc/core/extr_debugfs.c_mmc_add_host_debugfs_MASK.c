
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int class_dev; struct dentry* debugfs_root; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ,struct dentry*,struct mmc_host*,int *) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct mmc_host*) ;
 int VAR_1 ;

void FUNC_6(struct mmc_host *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_1(FUNC_5(VAR_2), ((void*)0));
 if (FUNC_0(VAR_3))

  return;
 if (!VAR_3)


  goto err_root;

 VAR_2->debugfs_root = VAR_3;

 if (!FUNC_2("ios", VAR_0, VAR_3, VAR_2, &VAR_1))
  goto err_ios;

 return;

err_ios:
 FUNC_3(VAR_3);
 VAR_2->debugfs_root = ((void*)0);
err_root:
 FUNC_4(&VAR_2->class_dev, "failed to initialize debugfs\n");
}
