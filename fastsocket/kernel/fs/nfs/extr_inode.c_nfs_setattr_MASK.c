
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_fattr {int dummy; } ;
struct inode {int i_mode; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int (* setattr ) (struct dentry*,struct nfs_fattr*,struct iattr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct nfs_fattr* FUNC_3 () ;
 int FUNC_4 (struct nfs_fattr*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct nfs_fattr*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct dentry*,struct nfs_fattr*,struct iattr*) ;

int
FUNC_10(struct dentry *VAR_11, struct iattr *VAR_12)
{
 struct inode *VAR_13 = VAR_11->d_inode;
 struct nfs_fattr *VAR_14;
 int VAR_15 = -VAR_8;

 FUNC_5(VAR_13, VAR_9);


 if (VAR_12->ia_valid & (VAR_3 | VAR_2))
  VAR_12->ia_valid &= ~VAR_4;

 if (VAR_12->ia_valid & VAR_6) {
  if (!FUNC_1(VAR_13->i_mode) || VAR_12->ia_size == FUNC_2(VAR_13))
   VAR_12->ia_valid &= ~VAR_6;
 }


 VAR_12->ia_valid &= VAR_10;
 if ((VAR_12->ia_valid & ~(VAR_0|VAR_5)) == 0)
  return 0;


 if (FUNC_1(VAR_13->i_mode))
  FUNC_8(VAR_13);

 VAR_14 = FUNC_3();
 if (VAR_14 == ((void*)0))
  goto out;



 if ((VAR_12->ia_valid & (VAR_4|VAR_7|VAR_1)) != 0)
  FUNC_6(VAR_13);
 VAR_15 = FUNC_0(VAR_13)->setattr(VAR_11, VAR_14, VAR_12);
 if (VAR_15 == 0)
  FUNC_7(VAR_13, VAR_14);
 FUNC_4(VAR_14);
out:
 return VAR_15;
}
