
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {unsigned long* context; } ;
typedef int cpumask_t ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int ,struct mm_struct*,int *,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int * FUNC_7 (struct mm_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(struct mm_struct *VAR_3)
{
 int VAR_4;
 cpumask_t VAR_5;
 unsigned long *VAR_6;
 unsigned long VAR_7;

 FUNC_8();
 VAR_4 = FUNC_10();
 VAR_6 = &VAR_3->context[VAR_4];
 VAR_5 = *FUNC_7(VAR_3);
 FUNC_1(VAR_4, VAR_5);

 if (*VAR_6 != VAR_1) {
  FUNC_6(VAR_7);
  *VAR_6 = VAR_1;
  if (VAR_3 == VAR_2->mm)
   FUNC_0(VAR_3);
  else
   FUNC_2(VAR_4, FUNC_7(VAR_3));
  FUNC_5(VAR_7);
 }
 if (!FUNC_3(VAR_5))
  FUNC_4(VAR_5, VAR_3, ((void*)0), VAR_0);

 FUNC_9();
}
