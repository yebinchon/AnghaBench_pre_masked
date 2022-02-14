
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_ino; } ;
struct iattr {int ia_valid; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int s_flags; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,int ,int) ;

int
FUNC_5(struct dentry *VAR_9, struct iattr *VAR_10)
{
 struct inode *VAR_11 = VAR_9->d_inode;
 int VAR_12;

 FUNC_4("AFFS: notify_change(%lu,0x%x)\n",VAR_11->i_ino,VAR_10->ia_valid);

 VAR_12 = FUNC_1(VAR_11,VAR_10);
 if (VAR_12)
  goto out;

 if (((VAR_10->ia_valid & VAR_2) && (FUNC_0(VAR_11->i_sb)->s_flags & VAR_8)) ||
     ((VAR_10->ia_valid & VAR_0) && (FUNC_0(VAR_11->i_sb)->s_flags & VAR_6)) ||
     ((VAR_10->ia_valid & VAR_1) &&
      (FUNC_0(VAR_11->i_sb)->s_flags & (VAR_7 | VAR_4)))) {
  if (!(FUNC_0(VAR_11->i_sb)->s_flags & VAR_5))
   VAR_12 = -VAR_3;
  goto out;
 }

 VAR_12 = FUNC_2(VAR_11, VAR_10);
 if (!VAR_12 && (VAR_10->ia_valid & VAR_1))
  FUNC_3(VAR_11);
out:
 return VAR_12;
}
