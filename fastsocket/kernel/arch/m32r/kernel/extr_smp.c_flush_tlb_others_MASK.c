
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int cpumask_t ;
typedef int atomic_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 unsigned long* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 struct mm_struct* VAR_3 ;
 unsigned long VAR_4 ;
 struct vm_area_struct* VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(cpumask_t VAR_7, struct mm_struct *VAR_8,
 struct vm_area_struct *VAR_9, unsigned long VAR_10)
{
 unsigned long *VAR_11;
 FUNC_1(FUNC_7(VAR_7));

 FUNC_1(FUNC_4(FUNC_10(), VAR_7));
 FUNC_1(!VAR_8);


 FUNC_6(VAR_7, VAR_7, VAR_1);
 if (FUNC_7(VAR_7))
  return;







 FUNC_11(&VAR_6);

 VAR_3 = VAR_8;
 VAR_5 = VAR_9;
 VAR_4 = VAR_10;
 VAR_11=FUNC_5(VAR_7);
 FUNC_3(*VAR_11, (atomic_t *)&VAR_2);





 FUNC_9(&VAR_7, VAR_0, 0);

 while (!FUNC_7(VAR_2)) {

  FUNC_8();
 }

 VAR_3 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_4 = 0;
 FUNC_12(&VAR_6);
}
