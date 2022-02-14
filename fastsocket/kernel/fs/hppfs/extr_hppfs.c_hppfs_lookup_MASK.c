
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {TYPE_2__* d_inode; int d_name; } ;
struct TYPE_6__ {struct dentry* proc_dentry; } ;
struct TYPE_5__ {int i_mutex; TYPE_1__* i_op; } ;
struct TYPE_4__ {struct dentry* (* lookup ) (TYPE_2__*,struct dentry*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_4 (struct dentry*,int *) ;
 struct dentry* FUNC_5 (struct dentry*,int *) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,int *) ;
 struct inode* FUNC_8 (int ,struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct dentry* FUNC_11 (TYPE_2__*,struct dentry*,int *) ;

__attribute__((used)) static struct dentry *FUNC_12(struct inode *VAR_2, struct dentry *VAR_3,
       struct nameidata *VAR_4)
{
 struct dentry *VAR_5, *VAR_6, *VAR_7;
 struct inode *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_7(VAR_3, ((void*)0));
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);
 else if (VAR_10)
  return FUNC_0(-VAR_0);

 VAR_9 = -VAR_1;
 VAR_7 = FUNC_1(VAR_2)->proc_dentry;
 FUNC_9(&VAR_7->d_inode->i_mutex);
 VAR_5 = FUNC_5(VAR_7, &VAR_3->d_name);
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_4(VAR_7, &VAR_3->d_name);
  if (VAR_5 == ((void*)0)) {
   FUNC_10(&VAR_7->d_inode->i_mutex);
   goto out;
  }
  VAR_6 = (*VAR_7->d_inode->i_op->lookup)(VAR_7->d_inode,
             VAR_5, ((void*)0));
  if (VAR_6) {
   FUNC_6(VAR_5);
   VAR_5 = VAR_6;
  }
 }
 FUNC_10(&VAR_7->d_inode->i_mutex);

 if (FUNC_2(VAR_5))
  return VAR_5;

 VAR_9 = -VAR_1;
 VAR_8 = FUNC_8(VAR_2->i_sb, VAR_5);
 if (!VAR_8)
  goto out_dput;

  FUNC_3(VAR_3, VAR_8);
 return ((void*)0);

 out_dput:
 FUNC_6(VAR_5);
 out:
 return FUNC_0(VAR_9);
}
