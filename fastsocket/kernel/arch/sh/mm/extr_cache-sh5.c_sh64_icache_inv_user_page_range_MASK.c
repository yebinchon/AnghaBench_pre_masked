
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; int vm_flags; } ;
struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ,struct mm_struct*) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (struct vm_area_struct*,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;

__attribute__((used)) static void FUNC_9(struct mm_struct *VAR_4,
     unsigned long VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 if (!VAR_4)
  return;

 VAR_7 = ((VAR_6 - VAR_5) >> VAR_1);
 if (VAR_7 >= 64) {
  FUNC_5();
 } else {
  unsigned long VAR_8;
  unsigned long VAR_9;
  unsigned long VAR_10;
  unsigned long VAR_11, VAR_12;
  unsigned long VAR_13 = 0;

  VAR_11 = FUNC_0(FUNC_7(), VAR_4);
  VAR_12 = FUNC_2();

  if (VAR_11 != VAR_12) {

   FUNC_4(VAR_13);
   FUNC_8(VAR_11);
  }

  VAR_8 = VAR_5 & VAR_0;
  VAR_10 = VAR_2 + ((VAR_6 - 1) & VAR_0);

  while (VAR_8 < VAR_10) {
   struct vm_area_struct *VAR_14;
   unsigned long VAR_15;
   VAR_14 = FUNC_1(VAR_4, VAR_8);
   if (!VAR_14 || (VAR_8 <= VAR_14->vm_end)) {

    VAR_8 += VAR_2;
    continue;
   }
   VAR_15 = VAR_14->vm_end;
   if (VAR_14->vm_flags & VAR_3) {

    VAR_9 = VAR_8;
    while (VAR_9 < VAR_15) {
     FUNC_6(VAR_14, VAR_9);
     VAR_9 += VAR_2;
    }
   }
   VAR_8 = VAR_14->vm_end;
  }

  if (VAR_11 != VAR_12) {
   FUNC_8(VAR_12);
   FUNC_3(VAR_13);
  }
 }
}
