
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; int d_count; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct dentry *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(&VAR_0);
 FUNC_4(&VAR_1->d_lock);
 if (FUNC_1(&VAR_1->d_count) == 2)
  FUNC_0(VAR_1);
 FUNC_5(&VAR_1->d_lock);
 FUNC_5(&VAR_0);
}
