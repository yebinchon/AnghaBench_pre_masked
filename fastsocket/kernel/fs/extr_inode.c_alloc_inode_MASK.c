
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_1__* s_op; } ;
struct inode {TYPE_3__* i_sb; } ;
struct TYPE_6__ {TYPE_2__* s_op; } ;
struct TYPE_5__ {int (* destroy_inode ) (struct inode*) ;} ;
struct TYPE_4__ {struct inode* (* alloc_inode ) (struct super_block*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,struct inode*) ;
 struct inode* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct inode*) ;
 struct inode* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_2)
{
 struct inode *VAR_3;

 if (VAR_2->s_op->alloc_inode)
  VAR_3 = VAR_2->s_op->alloc_inode(VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_0);

 if (!VAR_3)
  return ((void*)0);

 if (FUNC_5(FUNC_0(VAR_2, VAR_3))) {
  if (VAR_3->i_sb->s_op->destroy_inode)
   VAR_3->i_sb->s_op->destroy_inode(VAR_3);
  else
   FUNC_2(VAR_1, VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
