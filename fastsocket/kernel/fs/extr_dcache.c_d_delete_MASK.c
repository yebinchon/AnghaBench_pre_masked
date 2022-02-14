
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_lock; int d_count; TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct dentry * VAR_1)
{
 int VAR_2 = 0;



 FUNC_6(&VAR_0);
 FUNC_6(&VAR_1->d_lock);
 VAR_2 = FUNC_0(VAR_1->d_inode->i_mode);
 if (FUNC_2(&VAR_1->d_count) == 1) {
  FUNC_4(VAR_1);
  FUNC_5(VAR_1, VAR_2);
  return;
 }

 if (!FUNC_3(VAR_1))
  FUNC_1(VAR_1);

 FUNC_7(&VAR_1->d_lock);
 FUNC_7(&VAR_0);

 FUNC_5(VAR_1, VAR_2);
}
