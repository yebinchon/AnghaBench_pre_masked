
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {TYPE_2__* i_op; } ;
struct dentry {TYPE_1__* d_op; struct inode* d_inode; } ;
struct TYPE_4__ {struct dentry* (* lookup ) (struct inode*,struct dentry*,struct nameidata*) ;} ;
struct TYPE_3__ {int (* d_hash ) (struct dentry*,struct qstr*) ;scalar_t__ d_revalidate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_3 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_4 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_5 (struct dentry*,struct nameidata*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_8 (struct inode*,struct dentry*,struct nameidata*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct qstr *VAR_2,
  struct dentry *VAR_3, struct nameidata *VAR_4)
{
 struct dentry *VAR_5;
 struct inode *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->d_inode;





 if (VAR_3->d_op && VAR_3->d_op->d_hash) {
  VAR_7 = VAR_3->d_op->d_hash(VAR_3, VAR_2);
  VAR_5 = FUNC_0(VAR_7);
  if (VAR_7 < 0)
   goto out;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_2);




 if (!VAR_5)
  VAR_5 = FUNC_4(VAR_3, VAR_2);

 if (VAR_5 && VAR_5->d_op && VAR_5->d_op->d_revalidate)
  VAR_5 = FUNC_5(VAR_5, VAR_4);


 if (!VAR_5) {
  struct dentry *VAR_8;


  VAR_5 = FUNC_0(-VAR_0);
  if (FUNC_1(VAR_6))
   goto out;

  VAR_8 = FUNC_3(VAR_3, VAR_2);
  VAR_5 = FUNC_0(-VAR_1);
  if (!VAR_8)
   goto out;
  VAR_5 = VAR_6->i_op->lookup(VAR_6, VAR_8, VAR_4);
  if (!VAR_5)
   VAR_5 = VAR_8;
  else
   FUNC_6(VAR_8);
 }
out:
 return VAR_5;
}
