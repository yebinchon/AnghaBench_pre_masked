
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; TYPE_1__* i_mapping; int * i_op; int * i_fop; } ;
typedef int dev_t ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4(struct inode *VAR_6, dev_t VAR_7)
{
 if (FUNC_2(VAR_6->i_mode)) {
  VAR_6->i_op = &VAR_3;
  VAR_6->i_fop = &VAR_4;
  VAR_6->i_mapping->a_ops = &VAR_0;
 } else if (FUNC_0(VAR_6->i_mode)) {
  VAR_6->i_op = &VAR_1;
  VAR_6->i_fop = &VAR_2;
  VAR_6->i_mapping->a_ops = &VAR_0;
 } else if (FUNC_1(VAR_6->i_mode)) {
  VAR_6->i_op = &VAR_5;
  VAR_6->i_mapping->a_ops = &VAR_0;
 } else
  FUNC_3(VAR_6, VAR_6->i_mode, VAR_7);
}
