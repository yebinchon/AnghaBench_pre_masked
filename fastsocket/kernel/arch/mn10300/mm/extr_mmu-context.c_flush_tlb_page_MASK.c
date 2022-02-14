
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int VAR_6 ;

void FUNC_3(struct vm_area_struct *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11;

 VAR_8 &= VAR_5;



 FUNC_1(VAR_11);

 VAR_10 = FUNC_2(VAR_7->vm_mm);

 if (VAR_10 != VAR_4) {
  VAR_9 = VAR_8 | (VAR_10 & 0x000000ffUL);
  VAR_3 = VAR_9;
  VAR_1 = VAR_9;
  if (VAR_2 & VAR_6)
   VAR_2 = 0;
  if (VAR_0 & VAR_6)
   VAR_0 = 0;
 }

 FUNC_0(VAR_11);
}
