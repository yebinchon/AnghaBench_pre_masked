
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int d_count; struct inode* d_inode; } ;
struct coda_inode_info {int c_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct coda_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_3, struct nameidata *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 struct coda_inode_info *VAR_6;

 if (!VAR_5)
  return 1;
 FUNC_5();
 if (FUNC_3(VAR_5))
  goto out;
 if (FUNC_4(VAR_5))
  goto bad;

 VAR_6 = FUNC_0(VAR_3->d_inode);
 if (!(VAR_6->c_flags & (VAR_1 | VAR_0)))
  goto out;

 FUNC_6(VAR_3);


 if (VAR_6->c_flags & VAR_0)
  FUNC_2(VAR_5, VAR_0);

 if (FUNC_1(&VAR_3->d_count) > 1)

  goto out;


 VAR_6->c_flags &= ~(VAR_2 | VAR_1 | VAR_0);

bad:
 FUNC_7();
 return 0;
out:
 FUNC_7();
 return 1;
}
