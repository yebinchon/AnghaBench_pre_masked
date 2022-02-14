
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {struct btmrvl_private* driver_data; } ;
struct btmrvl_private {struct btmrvl_debugfs_data* debugfs_data; } ;
struct btmrvl_debugfs_data {int root_dir; int status_dir; int txdnldready; int hsstate; int psstate; int curpsmode; int config_dir; int hscfgcmd; int hscmd; int hsmode; int gpiogap; int pscmd; int psmode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct btmrvl_debugfs_data*) ;

void FUNC_2(struct hci_dev *VAR_0)
{
 struct btmrvl_private *VAR_1 = VAR_0->driver_data;
 struct btmrvl_debugfs_data *VAR_2 = VAR_1->debugfs_data;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2->psmode);
 FUNC_0(VAR_2->pscmd);
 FUNC_0(VAR_2->gpiogap);
 FUNC_0(VAR_2->hsmode);
 FUNC_0(VAR_2->hscmd);
 FUNC_0(VAR_2->hscfgcmd);
 FUNC_0(VAR_2->config_dir);

 FUNC_0(VAR_2->curpsmode);
 FUNC_0(VAR_2->psstate);
 FUNC_0(VAR_2->hsstate);
 FUNC_0(VAR_2->txdnldready);
 FUNC_0(VAR_2->status_dir);

 FUNC_0(VAR_2->root_dir);

 FUNC_1(VAR_2);
}
