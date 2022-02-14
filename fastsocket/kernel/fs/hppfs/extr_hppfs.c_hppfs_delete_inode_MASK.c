
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct TYPE_4__ {int proc_dentry; } ;
struct TYPE_3__ {int s_fs_info; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct inode *VAR_0)
{
 FUNC_2(FUNC_0(VAR_0)->proc_dentry);
 FUNC_3(VAR_0->i_sb->s_fs_info);

 FUNC_1(VAR_0);
}
