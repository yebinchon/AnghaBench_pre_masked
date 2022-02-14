
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binfmt {int lh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct linux_binfmt * VAR_3, int VAR_4)
{
 if (!VAR_3)
  return -VAR_0;
 FUNC_2(&VAR_1);
 VAR_4 ? FUNC_0(&VAR_3->lh, &VAR_2) :
   FUNC_1(&VAR_3->lh, &VAR_2);
 FUNC_3(&VAR_1);
 return 0;
}
