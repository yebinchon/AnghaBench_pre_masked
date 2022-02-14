
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct super_block {int s_flags; int * s_fs_info; TYPE_2__* s_bdev; } ;
struct TYPE_12__ {int kset; } ;
struct TYPE_10__ {scalar_t__ ar_spectator; } ;
struct gfs2_sbd {TYPE_3__ sd_kobj; int sd_table_name; TYPE_1__ sd_args; struct super_block* sd_vfs; } ;
struct TYPE_13__ {int kobj; } ;
struct TYPE_11__ {int bd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,char**) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *,char*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int VAR_5 ;

int FUNC_10(struct gfs2_sbd *VAR_6)
{
 struct super_block *VAR_7 = VAR_6->sd_vfs;
 int VAR_8;
 char VAR_9[20];
 char VAR_10[20];
 char *VAR_11[] = { VAR_9, VAR_10, ((void*)0) };
 int VAR_12 = 0;

 FUNC_6(VAR_9, "RDONLY=%d", (VAR_7->s_flags & VAR_1) ? 1 : 0);
 FUNC_6(VAR_10, "SPECTATOR=%d", VAR_6->sd_args.ar_spectator ? 1 : 0);

 VAR_6->sd_kobj.kset = VAR_2;
 VAR_8 = FUNC_3(&VAR_6->sd_kobj, &VAR_3, ((void*)0),
         "%s", VAR_6->sd_table_name);
 if (VAR_8)
  goto fail_reg;

 VAR_12 = 1;

 VAR_8 = FUNC_7(&VAR_6->sd_kobj, &VAR_5);
 if (VAR_8)
  goto fail_reg;

 VAR_8 = FUNC_7(&VAR_6->sd_kobj, &VAR_4);
 if (VAR_8)
  goto fail_tune;

 VAR_8 = FUNC_8(&VAR_6->sd_kobj,
      &FUNC_0(VAR_7->s_bdev->bd_disk)->kobj,
      "device");
 if (VAR_8)
  goto fail_lock_module;

 FUNC_5(&VAR_6->sd_kobj, VAR_0, VAR_11);
 return 0;

fail_lock_module:
 FUNC_9(&VAR_6->sd_kobj, &VAR_4);
fail_tune:
 FUNC_9(&VAR_6->sd_kobj, &VAR_5);
fail_reg:
 FUNC_1(VAR_6, "error %d adding sysfs files", VAR_8);
 if (VAR_12)
  FUNC_4(&VAR_6->sd_kobj);
 else
  FUNC_2(VAR_6);
 VAR_7->s_fs_info = ((void*)0);
 return VAR_8;
}
