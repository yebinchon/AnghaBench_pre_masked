
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct desc_ptr {unsigned long address; scalar_t__ size; } ;
struct TYPE_4__ {int pgd; } ;
struct TYPE_3__ {int pgd; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct desc_ptr*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int) ;
 unsigned long FUNC_5 () ;
 TYPE_1__* VAR_4 ;

void FUNC_6(void)
{
 unsigned long VAR_5;
 struct desc_ptr VAR_6;

 VAR_6.address = (unsigned long)FUNC_1(0);
 VAR_6.size = VAR_0 - 1;
 FUNC_2(&VAR_6);

 VAR_5 = FUNC_5();

 if (VAR_5 & VAR_1) {
  VAR_4[FUNC_4(0)].pgd =
      VAR_2[0].pgd;
 } else {
  VAR_4[FUNC_4(0)].pgd =
      VAR_2[0].pgd;
  VAR_4[FUNC_4(0x400000)].pgd =
      VAR_2[1].pgd;
 }




 FUNC_0();

 FUNC_3(VAR_3);
}
