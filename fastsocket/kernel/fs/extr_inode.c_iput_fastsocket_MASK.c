
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; int i_count; } ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* destroy_inode ) (struct inode*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_0)
{
 if (VAR_0 && FUNC_0(&VAR_0->i_count)) {
  if (VAR_0->i_sb && VAR_0->i_sb->s_op && VAR_0->i_sb->s_op->destroy_inode) {
   VAR_0->i_sb->s_op->destroy_inode(VAR_0);
   return;
  }
 }
}
