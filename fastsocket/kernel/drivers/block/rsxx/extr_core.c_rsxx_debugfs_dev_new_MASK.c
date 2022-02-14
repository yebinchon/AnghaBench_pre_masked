
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_cardinfo {struct dentry* debugfs_dir; TYPE_1__* gendisk; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int disk_name; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_1 (int ,int *) ;
 struct dentry* FUNC_2 (char*,int,struct dentry*,struct rsxx_cardinfo*,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct dentry*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct rsxx_cardinfo *VAR_5)
{
 struct dentry *VAR_6;
 struct dentry *VAR_7;
 struct dentry *VAR_8;

 VAR_5->debugfs_dir = FUNC_1(VAR_5->gendisk->disk_name, ((void*)0));
 if (FUNC_0(VAR_5->debugfs_dir))
  goto failed_debugfs_dir;

 VAR_6 = FUNC_2("stats", VAR_0,
         VAR_5->debugfs_dir, VAR_5,
         &VAR_4);
 if (FUNC_0(VAR_6))
  goto failed_debugfs_stats;

 VAR_7 = FUNC_2("pci_regs", VAR_0,
            VAR_5->debugfs_dir, VAR_5,
            &VAR_3);
 if (FUNC_0(VAR_7))
  goto failed_debugfs_pci_regs;

 VAR_8 = FUNC_2("cram", VAR_0 | VAR_1,
        VAR_5->debugfs_dir, VAR_5,
        &VAR_2);
 if (FUNC_0(VAR_8))
  goto failed_debugfs_cram;

 return;
failed_debugfs_cram:
 FUNC_3(VAR_7);
failed_debugfs_pci_regs:
 FUNC_3(VAR_6);
failed_debugfs_stats:
 FUNC_3(VAR_5->debugfs_dir);
failed_debugfs_dir:
 VAR_5->debugfs_dir = ((void*)0);
}
