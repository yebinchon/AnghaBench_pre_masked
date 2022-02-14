
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dir_attr; } ;
struct nfs_unlinkdata {int cred; int dir_attr; TYPE_1__ res; } ;
struct inode {int dummy; } ;
struct dentry {int d_flags; int d_lock; struct nfs_unlinkdata* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_unlinkdata*) ;
 struct nfs_unlinkdata* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_4, struct dentry *VAR_5)
{
 struct nfs_unlinkdata *VAR_6;
 int VAR_7 = -VAR_2;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_3);
 if (VAR_6 == ((void*)0))
  goto out;

 VAR_6->cred = FUNC_5();
 if (FUNC_0(VAR_6->cred)) {
  VAR_7 = FUNC_1(VAR_6->cred);
  goto out_free;
 }
 VAR_6->res.dir_attr = &VAR_6->dir_attr;

 VAR_7 = -VAR_1;
 FUNC_6(&VAR_5->d_lock);
 if (VAR_5->d_flags & VAR_0)
  goto out_unlock;
 VAR_5->d_flags |= VAR_0;
 VAR_5->d_fsdata = VAR_6;
 FUNC_7(&VAR_5->d_lock);
 return 0;
out_unlock:
 FUNC_7(&VAR_5->d_lock);
 FUNC_4(VAR_6->cred);
out_free:
 FUNC_2(VAR_6);
out:
 return VAR_7;
}
