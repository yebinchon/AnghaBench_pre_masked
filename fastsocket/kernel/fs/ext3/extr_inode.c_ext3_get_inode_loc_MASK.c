
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext3_iloc {int dummy; } ;
struct TYPE_2__ {int i_state; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct ext3_iloc*,int) ;

int FUNC_2(struct inode *VAR_1, struct ext3_iloc *VAR_2)
{

 return FUNC_1(VAR_1, VAR_2,
  !(FUNC_0(VAR_1)->i_state & VAR_0));
}
