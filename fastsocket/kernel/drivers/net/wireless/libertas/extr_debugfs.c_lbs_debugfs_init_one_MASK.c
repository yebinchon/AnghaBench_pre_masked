
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;
struct lbs_private {void* regs_dir; void** debugfs_regs_files; void* debugfs_dir; void* events_dir; void** debugfs_events_files; void** debugfs_files; } ;
struct lbs_debugfs_files {int fops; int perm; int name; } ;


 int FUNC_0 (struct lbs_debugfs_files*) ;
 void* FUNC_1 (char*,void*) ;
 void* FUNC_2 (int ,int ,void*,struct lbs_private*,int *) ;
 struct lbs_debugfs_files* VAR_0 ;
 struct lbs_debugfs_files* VAR_1 ;
 struct lbs_debugfs_files* VAR_2 ;
 int FUNC_3 (struct lbs_private*) ;
 void* VAR_3 ;

void FUNC_4(struct lbs_private *VAR_4, struct net_device *VAR_5)
{
 int VAR_6;
 const struct lbs_debugfs_files *VAR_7;
 if (!VAR_3)
  goto exit;

 VAR_4->debugfs_dir = FUNC_1(VAR_5->name, VAR_3);
 if (!VAR_4->debugfs_dir)
  goto exit;

 for (VAR_6=0; VAR_6<FUNC_0(VAR_1); VAR_6++) {
  VAR_7 = &VAR_1[VAR_6];
  VAR_4->debugfs_files[VAR_6] = FUNC_2(VAR_7->name,
            VAR_7->perm,
            VAR_4->debugfs_dir,
            VAR_4,
            &VAR_7->fops);
 }

 VAR_4->events_dir = FUNC_1("subscribed_events", VAR_4->debugfs_dir);
 if (!VAR_4->events_dir)
  goto exit;

 for (VAR_6=0; VAR_6<FUNC_0(VAR_0); VAR_6++) {
  VAR_7 = &VAR_0[VAR_6];
  VAR_4->debugfs_events_files[VAR_6] = FUNC_2(VAR_7->name,
            VAR_7->perm,
            VAR_4->events_dir,
            VAR_4,
            &VAR_7->fops);
 }

 VAR_4->regs_dir = FUNC_1("registers", VAR_4->debugfs_dir);
 if (!VAR_4->regs_dir)
  goto exit;

 for (VAR_6=0; VAR_6<FUNC_0(VAR_2); VAR_6++) {
  VAR_7 = &VAR_2[VAR_6];
  VAR_4->debugfs_regs_files[VAR_6] = FUNC_2(VAR_7->name,
            VAR_7->perm,
            VAR_4->regs_dir,
            VAR_4,
            &VAR_7->fops);
 }




exit:
 return;
}
