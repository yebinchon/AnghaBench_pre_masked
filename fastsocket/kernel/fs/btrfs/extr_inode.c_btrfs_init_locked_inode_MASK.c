
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct btrfs_iget_args {int root; int ino; } ;
struct TYPE_2__ {int root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct btrfs_iget_args *VAR_2 = VAR_1;
 VAR_0->i_ino = VAR_2->ino;
 FUNC_0(VAR_0)->root = VAR_2->root;
 FUNC_1(VAR_2->root, VAR_0);
 return 0;
}
