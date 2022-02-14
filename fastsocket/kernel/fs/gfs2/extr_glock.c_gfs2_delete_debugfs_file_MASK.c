
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int * debugfs_dir; int * debugfs_dentry_sbstats; int * debugfs_dentry_glstats; int * debugfs_dentry_glocks; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct gfs2_sbd *VAR_0)
{
 if (VAR_0->debugfs_dir) {
  if (VAR_0->debugfs_dentry_glocks) {
   FUNC_0(VAR_0->debugfs_dentry_glocks);
   VAR_0->debugfs_dentry_glocks = ((void*)0);
  }
  if (VAR_0->debugfs_dentry_glstats) {
   FUNC_0(VAR_0->debugfs_dentry_glstats);
   VAR_0->debugfs_dentry_glstats = ((void*)0);
  }
  if (VAR_0->debugfs_dentry_sbstats) {
   FUNC_0(VAR_0->debugfs_dentry_sbstats);
   VAR_0->debugfs_dentry_sbstats = ((void*)0);
  }
  FUNC_0(VAR_0->debugfs_dir);
  VAR_0->debugfs_dir = ((void*)0);
 }
}
