
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; int i_version; int i_ino; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct inode*) ;

void FUNC_1(struct inode *VAR_3, struct inode *VAR_4)
{
 FUNC_0(VAR_3, VAR_4);
 VAR_3->i_ino = VAR_4->i_ino;
 VAR_3->i_version++;
 VAR_3->i_op = &VAR_2;
 VAR_3->i_fop = &VAR_1;
 VAR_3->i_mapping->a_ops = &VAR_0;
}
