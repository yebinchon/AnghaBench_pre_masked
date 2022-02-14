
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct filename {char const* name; } ;
struct TYPE_7__ {TYPE_4__* dentry; TYPE_2__* mnt; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_8__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {int mnt_flags; } ;
struct TYPE_5__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct file*) ;
 struct file* FUNC_4 (int ,struct filename*,int,int ,int) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (TYPE_4__*) ;

struct file *FUNC_7(const char *VAR_8)
{
 struct file *VAR_9;
 int VAR_10;
 struct filename VAR_11 = { .name = VAR_8 };

 VAR_9 = FUNC_4(VAR_0, &VAR_11,
    VAR_6 | VAR_7 | VAR_2, 0,
    VAR_3 | VAR_4);
 if (FUNC_1(VAR_9))
  goto out;

 VAR_10 = -VAR_1;
 if (!FUNC_2(VAR_9->f_path.dentry->d_inode->i_mode))
  goto exit;

 if (VAR_9->f_path.mnt->mnt_flags & VAR_5)
  goto exit;

 FUNC_6(VAR_9->f_path.dentry);

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  goto exit;

out:
 return VAR_9;

exit:
 FUNC_5(VAR_9);
 return FUNC_0(VAR_10);
}
