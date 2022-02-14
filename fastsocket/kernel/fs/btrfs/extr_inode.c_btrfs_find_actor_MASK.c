
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_iget_args {scalar_t__ ino; scalar_t__ root; } ;
struct TYPE_2__ {scalar_t__ root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct btrfs_iget_args *VAR_2 = VAR_1;
 return VAR_2->ino == FUNC_1(VAR_0) &&
  VAR_2->root == FUNC_0(VAR_0)->root;
}
