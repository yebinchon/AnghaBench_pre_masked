
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ctime; int i_mtime; int i_atime; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0 (void)
{
 struct inode *VAR_2;

 if (VAR_1) {
  VAR_2 = VAR_1->d_inode;
  if (VAR_2)
   VAR_2->i_atime = VAR_2->i_mtime = VAR_2->i_ctime = VAR_0;
 }
}
