
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct TYPE_5__ {int name; } ;
struct dentry {TYPE_2__ d_name; } ;
typedef int dev_t ;
struct TYPE_6__ {int (* mknod ) (struct inode*,struct dentry*,struct iattr*,int ) ;} ;
struct TYPE_4__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct dentry*,struct iattr*,int ) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5, dev_t VAR_6)
{
 struct iattr VAR_7;
 int VAR_8;

 FUNC_2(VAR_2, "NFS: mknod(%s/%ld), %s\n",
   VAR_3->i_sb->s_id, VAR_3->i_ino, VAR_4->d_name.name);

 if (!FUNC_3(VAR_6))
  return -VAR_1;

 VAR_7.ia_mode = VAR_5;
 VAR_7.ia_valid = VAR_0;

 VAR_8 = FUNC_0(VAR_3)->mknod(VAR_3, VAR_4, &VAR_7, VAR_6);
 if (VAR_8 != 0)
  goto out_err;
 return 0;
out_err:
 FUNC_1(VAR_4);
 return VAR_8;
}
