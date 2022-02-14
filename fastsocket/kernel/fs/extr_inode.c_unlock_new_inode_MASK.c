
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_state; int i_mutex; TYPE_1__* i_sb; } ;
struct file_system_type {int i_mutex_dir_key; int i_mutex_key; } ;
struct TYPE_2__ {struct file_system_type* s_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*) ;

void FUNC_7(struct inode *VAR_3)
{
 FUNC_5();
 FUNC_0((VAR_3->i_state & (VAR_0|VAR_1)) != (VAR_0|VAR_1));
 VAR_3->i_state &= ~(VAR_0|VAR_1);
 FUNC_6(VAR_3);
}
