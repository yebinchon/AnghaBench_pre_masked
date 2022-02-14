
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {void* debugfs_dentry_sbstats; int debugfs_dir; void* debugfs_dentry_glstats; void* debugfs_dentry_glocks; int sd_table_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (char*,int,int ,struct gfs2_sbd*,int *) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(struct gfs2_sbd *VAR_7)
{
 VAR_7->debugfs_dir = FUNC_0(VAR_7->sd_table_name, VAR_5);
 if (!VAR_7->debugfs_dir)
  return -VAR_0;
 VAR_7->debugfs_dentry_glocks = FUNC_1("glocks",
        VAR_1 | VAR_2,
        VAR_7->debugfs_dir, VAR_7,
        &VAR_3);
 if (!VAR_7->debugfs_dentry_glocks)
  goto fail;

 VAR_7->debugfs_dentry_glstats = FUNC_1("glstats",
       VAR_1 | VAR_2,
       VAR_7->debugfs_dir, VAR_7,
       &VAR_4);
 if (!VAR_7->debugfs_dentry_glstats)
  goto fail;

 VAR_7->debugfs_dentry_sbstats = FUNC_1("sbstats",
       VAR_1 | VAR_2,
       VAR_7->debugfs_dir, VAR_7,
       &VAR_6);
 if (!VAR_7->debugfs_dentry_sbstats)
  goto fail;

 return 0;
fail:
 FUNC_2(VAR_7);
 return -VAR_0;
}
