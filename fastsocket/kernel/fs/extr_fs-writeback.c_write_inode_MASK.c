
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* write_inode ) (struct inode*,struct writeback_control*) ;} ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct writeback_control *VAR_1)
{
 if (VAR_0->i_sb->s_op->write_inode && !FUNC_0(VAR_0))
  return VAR_0->i_sb->s_op->write_inode(VAR_0, VAR_1);
 return 0;
}
