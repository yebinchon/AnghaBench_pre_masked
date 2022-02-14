
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct btrfs_inode {int flags; } ;


 struct btrfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_3, struct inode *VAR_4)
{
 struct btrfs_inode *VAR_5 = FUNC_0(VAR_3);
 struct btrfs_inode *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->flags & VAR_2)
  VAR_6->flags |= VAR_2;
 else
  VAR_6->flags &= ~VAR_2;

 if (VAR_5->flags & VAR_0) {
  VAR_6->flags |= VAR_0;
  VAR_6->flags &= ~VAR_1;
 } else {
  VAR_6->flags &= ~(VAR_0 |
        VAR_1);
 }
}
