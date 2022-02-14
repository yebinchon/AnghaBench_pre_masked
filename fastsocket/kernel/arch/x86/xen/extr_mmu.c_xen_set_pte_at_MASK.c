
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multicall_space {int mc; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (unsigned long,int ,int ) ;
 int FUNC_2 (int ,unsigned long,int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct mm_struct VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct multicall_space FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct mm_struct *VAR_7, unsigned long VAR_8,
      pte_t *VAR_9, pte_t VAR_10)
{
 FUNC_0(VAR_3, 1);

 FUNC_0(VAR_5, VAR_7 == VAR_1->mm);
 FUNC_0(VAR_6, VAR_7 == &VAR_2);

 if (VAR_7 == VAR_1->mm || VAR_7 == &VAR_2) {
  if (FUNC_3() == VAR_0) {
   struct multicall_space VAR_11;
   VAR_11 = FUNC_4(0);

   FUNC_2(VAR_11.mc, VAR_8, VAR_10, 0);
   FUNC_0(VAR_4, 1);
   FUNC_5(VAR_0);
   goto out;
  } else
   if (FUNC_1(VAR_8, VAR_10, 0) == 0)
    goto out;
 }
 FUNC_6(VAR_9, VAR_10);

out: return;
}
