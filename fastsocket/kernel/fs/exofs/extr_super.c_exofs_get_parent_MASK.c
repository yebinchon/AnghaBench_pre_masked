
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_sb; } ;


 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (struct dentry*) ;

struct dentry *FUNC_3(struct dentry *VAR_0)
{
 unsigned long VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 return FUNC_0(FUNC_1(VAR_0->d_inode->i_sb, VAR_1));
}
