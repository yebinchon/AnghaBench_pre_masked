
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
struct TYPE_6__ {int (* mkdir ) (struct inode*,struct dentry*,struct iattr*) ;} ;
struct TYPE_4__ {int s_id; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct inode*,struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct iattr VAR_6;
 int VAR_7;

 FUNC_2(VAR_2, "NFS: mkdir(%s/%ld), %s\n",
   VAR_3->i_sb->s_id, VAR_3->i_ino, VAR_4->d_name.name);

 VAR_6.ia_valid = VAR_0;
 VAR_6.ia_mode = VAR_5 | VAR_1;

 VAR_7 = FUNC_0(VAR_3)->mkdir(VAR_3, VAR_4, &VAR_6);
 if (VAR_7 != 0)
  goto out_err;
 return 0;
out_err:
 FUNC_1(VAR_4);
 return VAR_7;
}
