
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct mm_struct*) ;
 int FUNC_1 (int,struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*,int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 long FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (unsigned long) ;

void FUNC_13(struct vm_area_struct *VAR_5, unsigned long VAR_6,
 unsigned long VAR_7)
{
 struct mm_struct *VAR_8 = VAR_5->vm_mm;
 int VAR_9 = FUNC_7();
 unsigned long VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (!FUNC_1(VAR_9, VAR_8))
  return;

 VAR_13 = (VAR_7 - VAR_6 + (VAR_3 - 1)) >> VAR_2;
 VAR_13 = (VAR_13 + 1) >> 1;

 FUNC_4(VAR_10);

 if (VAR_13 > VAR_4 / 2) {
  FUNC_2(VAR_8, VAR_9);
  goto out_restore;
 }

 VAR_11 = FUNC_5();
 VAR_12 = FUNC_0(VAR_9, VAR_8);

 FUNC_11(0);

 VAR_6 &= VAR_1;
 VAR_7 += (VAR_3 - 1);
 VAR_7 &= VAR_1;
 while (VAR_6 < VAR_7) {
  signed long VAR_14;

  FUNC_12(VAR_6);
  FUNC_10(VAR_6);
  VAR_6 += VAR_3;
  FUNC_8();
  VAR_14 = FUNC_6();
  if (VAR_14 < 0)
   continue;

  FUNC_10(VAR_0 + (VAR_14 << (VAR_2 + 1)));
  FUNC_9();
 }
 FUNC_10(VAR_11);

out_restore:
 FUNC_3(VAR_10);
}
