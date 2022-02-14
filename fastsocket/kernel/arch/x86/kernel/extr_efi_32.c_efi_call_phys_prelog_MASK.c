
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct desc_ptr {scalar_t__ size; int address; } ;
struct TYPE_4__ {int pgd; } ;
struct TYPE_3__ {int pgd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct desc_ptr*) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 () ;
 TYPE_1__* VAR_5 ;

void FUNC_7(void)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 struct desc_ptr VAR_8;

 FUNC_4(VAR_4);






 VAR_6 = FUNC_6();

 if (VAR_6 & VAR_2) {
  VAR_3[0].pgd =
      VAR_5[FUNC_5(0)].pgd;
  VAR_5[0].pgd =
      VAR_5[FUNC_5(VAR_1)].pgd;
 } else {
  VAR_3[0].pgd =
      VAR_5[FUNC_5(0)].pgd;
  VAR_3[1].pgd =
      VAR_5[FUNC_5(0x400000)].pgd;
  VAR_5[FUNC_5(0)].pgd =
      VAR_5[FUNC_5(VAR_1)].pgd;
  VAR_7 = VAR_1 + 0x400000;
  VAR_5[FUNC_5(0x400000)].pgd =
      VAR_5[FUNC_5(VAR_7)].pgd;
 }




 FUNC_0();

 VAR_8.address = FUNC_1(FUNC_2(0));
 VAR_8.size = VAR_0 - 1;
 FUNC_3(&VAR_8);
}
