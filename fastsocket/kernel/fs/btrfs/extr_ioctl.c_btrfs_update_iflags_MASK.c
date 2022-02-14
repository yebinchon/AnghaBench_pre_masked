
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flags; } ;
struct btrfs_inode {int flags; } ;


 struct btrfs_inode* FUNC_0 (struct inode*) ;
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

void FUNC_1(struct inode *VAR_10)
{
 struct btrfs_inode *VAR_11 = FUNC_0(VAR_10);

 VAR_10->i_flags &= ~(VAR_9|VAR_5|VAR_7|VAR_8|VAR_6);

 if (VAR_11->flags & VAR_4)
  VAR_10->i_flags |= VAR_9;
 if (VAR_11->flags & VAR_2)
  VAR_10->i_flags |= VAR_7;
 if (VAR_11->flags & VAR_0)
  VAR_10->i_flags |= VAR_5;
 if (VAR_11->flags & VAR_3)
  VAR_10->i_flags |= VAR_8;
 if (VAR_11->flags & VAR_1)
  VAR_10->i_flags |= VAR_6;
}
