
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct TYPE_4__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; int d_sb; } ;
struct autofs_sb_info {int dummy; } ;


 int FUNC_0 (char*,struct file*,struct dentry*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,struct file*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct file *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->f_path.dentry;
 struct autofs_sb_info *VAR_4 = FUNC_2(VAR_3->d_sb);

 FUNC_0("file=%p dentry=%p %.*s",
  VAR_2, VAR_3, VAR_3->d_name.len, VAR_3->d_name.name);

 if (FUNC_1(VAR_4))
  goto out;
 if (!FUNC_3(VAR_3) && FUNC_5(VAR_3))
  return -VAR_0;

out:
 return FUNC_4(VAR_1, VAR_2);
}
