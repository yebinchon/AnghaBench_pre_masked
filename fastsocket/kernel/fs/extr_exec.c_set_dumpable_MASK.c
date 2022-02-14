
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

void FUNC_3(struct mm_struct *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 0:
  FUNC_0(VAR_0, &VAR_2->flags);
  FUNC_2();
  FUNC_0(VAR_1, &VAR_2->flags);
  break;
 case 1:
  FUNC_1(VAR_0, &VAR_2->flags);
  FUNC_2();
  FUNC_0(VAR_1, &VAR_2->flags);
  break;
 case 2:
  FUNC_1(VAR_1, &VAR_2->flags);
  FUNC_2();
  FUNC_1(VAR_0, &VAR_2->flags);
  break;
 }
}
