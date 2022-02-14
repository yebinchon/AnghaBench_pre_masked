
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct TYPE_4__ {TYPE_1__* s_root; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0)
{
 return (!FUNC_1(FUNC_0(VAR_0)) &&
  VAR_0 == VAR_0->i_sb->s_root->d_inode);
}
