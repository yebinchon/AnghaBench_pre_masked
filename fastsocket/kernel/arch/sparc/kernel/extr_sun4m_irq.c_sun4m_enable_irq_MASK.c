
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask_clear; } ;
struct TYPE_3__ {int clear; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int *) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (unsigned int) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6 = FUNC_3();





        if (VAR_3 != 0x0b) {
  VAR_4 = FUNC_4(VAR_3);
  FUNC_1(VAR_5);
  if (VAR_3 > 15)
   FUNC_2(VAR_4, &VAR_1->mask_clear);
  else
   FUNC_2(VAR_4, &VAR_2[VAR_6]->clear);
  FUNC_0(VAR_5);
 } else {
  FUNC_1(VAR_5);
  FUNC_2(VAR_0, &VAR_1->mask_clear);
  FUNC_0(VAR_5);
 }
}
