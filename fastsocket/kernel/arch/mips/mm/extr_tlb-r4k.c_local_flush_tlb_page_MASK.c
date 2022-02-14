
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

void FUNC_17(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = FUNC_9();

 if (FUNC_5(VAR_3, VAR_1->vm_mm) != 0) {
  unsigned long VAR_4;
  int VAR_5, VAR_6, VAR_7;

  VAR_6 = FUNC_4(VAR_3, VAR_1->vm_mm);
  VAR_2 &= (VAR_0 << 1);
  FUNC_0(VAR_4);
  VAR_5 = FUNC_7();
  FUNC_14(VAR_2 | VAR_6);
  FUNC_6();
  FUNC_10();
  FUNC_11();
  VAR_7 = FUNC_8();
  FUNC_15(0);
  FUNC_16(0);
  if (VAR_7 < 0)
   goto finish;

  FUNC_14(FUNC_3(VAR_7));
  FUNC_6();
  FUNC_12();
  FUNC_13();

 finish:
  FUNC_14(VAR_5);
  FUNC_2(VAR_1);
  FUNC_1(VAR_4);
 }
}
