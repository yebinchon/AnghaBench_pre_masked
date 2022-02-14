
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* destroy_inode ) (struct inode*) ;} ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct inode*) ;
 int FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_1)
{
 FUNC_0(VAR_1);
 if (VAR_1->i_sb->s_op->destroy_inode)
  VAR_1->i_sb->s_op->destroy_inode(VAR_1);
 else
  FUNC_1(VAR_0, (VAR_1));
}
