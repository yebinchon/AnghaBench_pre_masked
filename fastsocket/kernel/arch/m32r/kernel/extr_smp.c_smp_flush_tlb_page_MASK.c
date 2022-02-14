
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {unsigned long* context; } ;
typedef int cpumask_t ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct mm_struct*,struct vm_area_struct*,unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int * FUNC_7 (struct mm_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 struct mm_struct *VAR_5 = VAR_3->vm_mm;
 int VAR_6;
 cpumask_t VAR_7;
 unsigned long *VAR_8;
 unsigned long VAR_9;

 FUNC_8();
 VAR_6 = FUNC_10();
 VAR_8 = &VAR_5->context[VAR_6];
 VAR_7 = *FUNC_7(VAR_5);
 FUNC_2(VAR_6, VAR_7);






 if (*VAR_8 != VAR_1) {
  FUNC_6(VAR_9);
  VAR_4 &= VAR_2;
  VAR_4 |= (*VAR_8 & VAR_0);
  FUNC_1(VAR_4);
  FUNC_5(VAR_9);
 }
 if (!FUNC_3(VAR_7))
  FUNC_4(VAR_7, VAR_5, VAR_3, VAR_4);

 FUNC_9();
}
