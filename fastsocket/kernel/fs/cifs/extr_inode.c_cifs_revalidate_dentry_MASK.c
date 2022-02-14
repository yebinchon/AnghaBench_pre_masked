
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {scalar_t__ invalid_mapping; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;

int FUNC_3(struct dentry *VAR_0)
{
 int VAR_1;
 struct inode *VAR_2 = VAR_0->d_inode;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 if (FUNC_0(VAR_2)->invalid_mapping)
  VAR_1 = FUNC_1(VAR_2);
 return VAR_1;
}
