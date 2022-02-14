
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qstr {char const* name; scalar_t__ hash; int len; } ;
struct path {TYPE_2__* dentry; int mnt; } ;
struct file_operations {scalar_t__ owner; } ;
struct file {int f_flags; void* private_data; scalar_t__ f_version; scalar_t__ f_pos; int f_mapping; } ;
struct TYPE_10__ {int i_mapping; int i_count; } ;
struct TYPE_9__ {int d_flags; int * d_op; } ;
struct TYPE_8__ {int mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct file* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct file* FUNC_2 (struct path*,int,struct file_operations const*) ;
 TYPE_3__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ,struct qstr*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (scalar_t__) ;

struct file *FUNC_11(const char *VAR_12,
    const struct file_operations *VAR_13,
    void *VAR_14, int VAR_15)
{
 struct qstr VAR_16;
 struct path VAR_17;
 struct file *VAR_18;
 int VAR_19;

 if (FUNC_1(VAR_9))
  return FUNC_0(-VAR_2);

 if (VAR_13->owner && !FUNC_10(VAR_13->owner))
  return FUNC_0(-VAR_3);





 VAR_19 = -VAR_4;
 VAR_16.name = VAR_12;
 VAR_16.len = FUNC_9(VAR_12);
 VAR_16.hash = 0;
 VAR_17.dentry = FUNC_4(VAR_10->mnt_sb, &VAR_16);
 if (!VAR_17.dentry)
  goto err_module;

 VAR_17.mnt = FUNC_6(VAR_10);





 FUNC_3(&VAR_9->i_count);

 VAR_17.dentry->d_op = &VAR_11;

 VAR_17.dentry->d_flags &= ~VAR_0;
 FUNC_5(VAR_17.dentry, VAR_9);

 VAR_19 = -VAR_1;
 VAR_18 = FUNC_2(&VAR_17, VAR_5 | VAR_6, VAR_13);
 if (!VAR_18)
  goto err_dput;
 VAR_18->f_mapping = VAR_9->i_mapping;

 VAR_18->f_pos = 0;
 VAR_18->f_flags = VAR_8 | (VAR_15 & VAR_7);
 VAR_18->f_version = 0;
 VAR_18->private_data = VAR_14;

 return VAR_18;

err_dput:
 FUNC_8(&VAR_17);
err_module:
 FUNC_7(VAR_13->owner);
 return FUNC_0(VAR_19);
}
