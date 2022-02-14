
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* mnt; struct dentry* dentry; } ;
struct inode {int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int mnt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;





 int VAR_12 ;

 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct path *VAR_13, int VAR_14, int VAR_15)
{
 struct dentry *VAR_16 = VAR_13->dentry;
 struct inode *VAR_17 = VAR_16->d_inode;
 int VAR_18;

 if (!VAR_17)
  return -VAR_3;

 switch (VAR_17->i_mode & VAR_12) {
 case 129:
  return -VAR_2;
 case 131:
  if (VAR_14 & VAR_5)
   return -VAR_1;
  break;
 case 133:
 case 132:
  if (VAR_13->mnt->mnt_flags & VAR_6)
   return -VAR_0;

 case 130:
 case 128:
  VAR_15 &= ~VAR_11;
  break;
 }

 VAR_18 = FUNC_2(VAR_17, VAR_14);
 if (VAR_18)
  return VAR_18;




 if (FUNC_0(VAR_17)) {
  if ((VAR_15 & VAR_7) != VAR_10 && !(VAR_15 & VAR_8))
   return -VAR_4;
  if (VAR_15 & VAR_11)
   return -VAR_4;
 }


 if (VAR_15 & VAR_9 && !FUNC_3(VAR_17))
  return -VAR_4;




 return FUNC_1(VAR_17, VAR_15);
}
