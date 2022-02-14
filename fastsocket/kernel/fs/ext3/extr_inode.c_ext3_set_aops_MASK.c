
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;

void FUNC_2(struct inode *VAR_3)
{
 if (FUNC_0(VAR_3))
  VAR_3->i_mapping->a_ops = &VAR_1;
 else if (FUNC_1(VAR_3))
  VAR_3->i_mapping->a_ops = &VAR_2;
 else
  VAR_3->i_mapping->a_ops = &VAR_0;
}
