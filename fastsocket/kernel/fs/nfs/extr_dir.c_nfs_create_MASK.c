
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {TYPE_3__ open; } ;
struct nameidata {int flags; TYPE_4__ intent; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct TYPE_7__ {int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_10__ {int (* create ) (struct inode*,struct dentry*,struct iattr*,int,int *) ;} ;
struct TYPE_6__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct inode*,struct dentry*,struct iattr*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5,
  struct nameidata *VAR_6)
{
 struct iattr VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 FUNC_2(VAR_2, "NFS: create(%s/%ld), %s\n",
   VAR_3->i_sb->s_id, VAR_3->i_ino, VAR_4->d_name.name);

 VAR_7.ia_mode = VAR_5;
 VAR_7.ia_valid = VAR_0;

 if ((VAR_6->flags & VAR_1) != 0)
  VAR_9 = VAR_6->intent.open.flags;

 VAR_8 = FUNC_0(VAR_3)->create(VAR_3, VAR_4, &VAR_7, VAR_9, ((void*)0));
 if (VAR_8 != 0)
  goto out_err;
 return 0;
out_err:
 FUNC_1(VAR_4);
 return VAR_8;
}
