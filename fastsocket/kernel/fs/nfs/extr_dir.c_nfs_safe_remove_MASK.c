
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_8__ {int name; } ;
struct dentry {int d_flags; TYPE_3__ d_name; TYPE_2__* d_parent; struct inode* d_inode; } ;
struct TYPE_9__ {int (* remove ) (struct inode*,TYPE_3__*) ;} ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,TYPE_3__*) ;
 int FUNC_7 (struct inode*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_4)
{
 struct inode *VAR_5 = VAR_4->d_parent->d_inode;
 struct inode *VAR_6 = VAR_4->d_inode;
 int VAR_7 = -VAR_1;

 FUNC_1(VAR_3, "NFS: safe_remove(%s/%s)\n",
  VAR_4->d_parent->d_name.name, VAR_4->d_name.name);


 if (VAR_4->d_flags & VAR_0) {
  VAR_7 = 0;
  goto out;
 }

 if (VAR_6 != ((void*)0)) {
  FUNC_4(VAR_6);
  VAR_7 = FUNC_0(VAR_5)->remove(VAR_5, &VAR_4->d_name);

  if (VAR_7 == 0)
   FUNC_3(VAR_6);
  FUNC_5(VAR_6);
 } else
  VAR_7 = FUNC_0(VAR_5)->remove(VAR_5, &VAR_4->d_name);
 if (VAR_7 == -VAR_2)
  FUNC_2(VAR_4);
out:
 return VAR_7;
}
