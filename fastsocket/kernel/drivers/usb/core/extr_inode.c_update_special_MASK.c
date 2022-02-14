
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mode; int i_gid; int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct dentry *VAR_4)
{
 VAR_4->d_inode->i_uid = VAR_3;
 VAR_4->d_inode->i_gid = VAR_1;
 VAR_4->d_inode->i_mode = VAR_0 | VAR_2;
}
