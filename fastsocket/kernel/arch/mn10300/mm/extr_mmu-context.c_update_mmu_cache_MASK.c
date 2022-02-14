
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;

void FUNC_4(struct vm_area_struct *VAR_10, unsigned long VAR_11, pte_t VAR_12)
{
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 &= VAR_5;
 VAR_14 = FUNC_3(VAR_12) & ~(VAR_7 | VAR_8);



 FUNC_1(VAR_16);

 VAR_15 = FUNC_2(VAR_10->vm_mm);

 if (VAR_15 != VAR_4) {
  VAR_13 = VAR_11 | (VAR_15 & 0x000000ffUL);
  if (!(FUNC_3(VAR_12) & VAR_6)) {
   VAR_3 = VAR_13;
   if (VAR_2 & VAR_9)
    VAR_2 = VAR_14;
  }
  VAR_1 = VAR_13;
  if (VAR_0 & VAR_9)
   VAR_0 = VAR_14;
 }

 FUNC_0(VAR_16);
}
