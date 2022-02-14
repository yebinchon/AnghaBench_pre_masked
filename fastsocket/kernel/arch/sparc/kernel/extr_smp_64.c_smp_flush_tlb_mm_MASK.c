
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mm_struct {int mm_users; int context; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int VAR_1 ;

void FUNC_9(struct mm_struct *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->context);
 int VAR_4 = FUNC_5();

 if (FUNC_2(&VAR_2->mm_users) == 1) {
  FUNC_3(FUNC_6(VAR_2), FUNC_4(VAR_4));
  goto local_flush_and_out;
 }

 FUNC_8(&VAR_1,
         VAR_3, 0, 0,
         FUNC_6(VAR_2));

local_flush_and_out:
 FUNC_1(VAR_3, VAR_0);

 FUNC_7();
}
