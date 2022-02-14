
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct gru_thread_state {struct mm_struct* ts_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,int,unsigned long*,int*) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,unsigned long,int,unsigned long*,int*) ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gru_thread_state *VAR_3, unsigned long VAR_4,
      int VAR_5, int VAR_6, unsigned long *VAR_7, int *VAR_8)
{
 struct mm_struct *VAR_9 = VAR_3->ts_mm;
 struct vm_area_struct *VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_1(VAR_9, VAR_4);
 if (!VAR_10)
  goto inval;





 FUNC_4();
 VAR_12 = FUNC_0(VAR_10, VAR_4, VAR_5, &VAR_11, &VAR_13);
 if (VAR_12) {
  if (VAR_6)
   goto upm;
  if (FUNC_3(VAR_10, VAR_4, VAR_5, &VAR_11, &VAR_13))
   goto inval;
 }
 if (FUNC_2(VAR_11))
  goto inval;
 VAR_11 = VAR_11 & ~((1UL << VAR_13) - 1);
 *VAR_7 = FUNC_5(VAR_11);
 *VAR_8 = VAR_13;
 return VAR_2;

inval:
 return VAR_0;
upm:
 return VAR_1;
}
