
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_nlink; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mutex; } ;


 int FUNC_0 (struct dentry*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;

void FUNC_5(unsigned int VAR_1)
{
 struct dentry *VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_0(VAR_2)) {
  struct inode *VAR_3 = VAR_2->d_inode;
  if (VAR_3) {
   VAR_3->i_nlink--;
   FUNC_1(VAR_2);
   FUNC_2(VAR_2);
  }
  FUNC_2(VAR_2);
 }
 FUNC_4(&VAR_0->d_inode->i_mutex);
}
