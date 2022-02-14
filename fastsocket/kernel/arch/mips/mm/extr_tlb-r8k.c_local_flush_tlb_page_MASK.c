
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 long FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned long) ;

void FUNC_12(struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 int VAR_5 = FUNC_6();
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 signed long VAR_9;

 if (!FUNC_1(VAR_5, VAR_3->vm_mm))
  return;

 VAR_8 = FUNC_0(VAR_5, VAR_3->vm_mm);
 VAR_4 &= VAR_1;
 FUNC_3(VAR_6);
 VAR_7 = FUNC_4();
 FUNC_11(VAR_4);
 FUNC_9(VAR_8);
 FUNC_7();
 VAR_9 = FUNC_5();
 if (VAR_9 < 0)
  goto finish;

 FUNC_10(0);
 FUNC_9(VAR_0 + (VAR_9 << (VAR_2 + 1)));
 FUNC_8();

finish:
 FUNC_9(VAR_7);
 FUNC_2(VAR_6);
}
