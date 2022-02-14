
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_state; int i_count; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_2->i_state == VAR_0);

  if (FUNC_1(&VAR_2->i_count, &VAR_1))
   FUNC_2(VAR_2);
 }
}
