
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (struct inode*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct inode*) ;

void FUNC_4(struct inode *VAR_0)
{
 handle_t *VAR_1;

 VAR_1 = FUNC_1(VAR_0, 2);
 if (FUNC_0(VAR_1))
  goto out;

 FUNC_3(VAR_1, VAR_0);

 FUNC_2(VAR_1);
out:
 return;
}
