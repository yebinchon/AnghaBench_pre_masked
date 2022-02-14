
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {struct btmrvl_private* driver_data; } ;
struct btmrvl_private {struct btmrvl_debugfs_data* debugfs_data; } ;
struct btmrvl_debugfs_data {void* status_dir; void* txdnldready; void* hsstate; void* psstate; void* curpsmode; int * root_dir; void* config_dir; void* hscfgcmd; void* hscmd; void* hsmode; void* gpiogap; void* pscmd; void* psmode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (char*,int *) ;
 void* FUNC_2 (char*,int,void*,struct btmrvl_private*,int *) ;
 struct btmrvl_debugfs_data* FUNC_3 (int,int ) ;

void FUNC_4(struct hci_dev *VAR_11)
{
 struct btmrvl_private *VAR_12 = VAR_11->driver_data;
 struct btmrvl_debugfs_data *VAR_13;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_0);
 VAR_12->debugfs_data = VAR_13;

 if (!VAR_13) {
  FUNC_0("Can not allocate memory for btmrvl_debugfs_data.");
  return;
 }

 VAR_13->root_dir = FUNC_1("btmrvl", ((void*)0));

 VAR_13->config_dir = FUNC_1("config", VAR_13->root_dir);

 VAR_13->psmode = FUNC_2("psmode", 0644, VAR_13->config_dir,
    VAR_11->driver_data, &VAR_8);
 VAR_13->pscmd = FUNC_2("pscmd", 0644, VAR_13->config_dir,
    VAR_11->driver_data, &VAR_7);
 VAR_13->gpiogap = FUNC_2("gpiogap", 0644, VAR_13->config_dir,
    VAR_11->driver_data, &VAR_2);
 VAR_13->hsmode = FUNC_2("hsmode", 0644, VAR_13->config_dir,
    VAR_11->driver_data, &VAR_5);
 VAR_13->hscmd = FUNC_2("hscmd", 0644, VAR_13->config_dir,
    VAR_11->driver_data, &VAR_4);
 VAR_13->hscfgcmd = FUNC_2("hscfgcmd", 0644, VAR_13->config_dir,
    VAR_11->driver_data, &VAR_3);

 VAR_13->status_dir = FUNC_1("status", VAR_13->root_dir);
 VAR_13->curpsmode = FUNC_2("curpsmode", 0444,
      VAR_13->status_dir,
      VAR_11->driver_data,
      &VAR_1);
 VAR_13->psstate = FUNC_2("psstate", 0444, VAR_13->status_dir,
    VAR_11->driver_data, &VAR_9);
 VAR_13->hsstate = FUNC_2("hsstate", 0444, VAR_13->status_dir,
    VAR_11->driver_data, &VAR_6);
 VAR_13->txdnldready = FUNC_2("txdnldready", 0444,
      VAR_13->status_dir,
      VAR_11->driver_data,
      &VAR_10);
}
