
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long phys_addr_t ;
struct TYPE_4__ {int MAS0; int MAS1; unsigned long MAS2; unsigned long MAS3; } ;
struct TYPE_3__ {unsigned long start; unsigned long limit; unsigned long phys; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_22 ;

void FUNC_6(int VAR_23, unsigned long VAR_24, phys_addr_t VAR_25,
  unsigned int VAR_26, int VAR_27, unsigned int VAR_28)
{
 unsigned int VAR_29, VAR_30;

 asm ("cntlzw %0,%1" : "=r" (VAR_30) : "r" (VAR_26));
 VAR_29 = 21 - VAR_30;






 VAR_14[VAR_23].MAS0 = FUNC_2(1) | FUNC_0(VAR_23) | FUNC_1(VAR_23+1);
 VAR_14[VAR_23].MAS1 = VAR_1 | VAR_0 | FUNC_4(VAR_29) | FUNC_3(VAR_28);
 VAR_14[VAR_23].MAS2 = VAR_24 & VAR_13;

 VAR_14[VAR_23].MAS2 |= (VAR_27 & VAR_21) ? VAR_6 : 0;
 VAR_14[VAR_23].MAS2 |= (VAR_27 & VAR_18) ? VAR_4 : 0;
 VAR_14[VAR_23].MAS2 |= (VAR_27 & VAR_15) ? VAR_5 : 0;
 VAR_14[VAR_23].MAS2 |= (VAR_27 & VAR_17) ? VAR_3 : 0;
 VAR_14[VAR_23].MAS2 |= (VAR_27 & VAR_16) ? VAR_2 : 0;

 VAR_14[VAR_23].MAS3 = (VAR_25 & VAR_13) | VAR_9 | VAR_7;
 VAR_14[VAR_23].MAS3 |= ((VAR_27 & VAR_19) ? VAR_8 : 0);

 if (VAR_27 & VAR_20) {
    VAR_14[VAR_23].MAS3 |= VAR_12 | VAR_10;
    VAR_14[VAR_23].MAS3 |= ((VAR_27 & VAR_19) ? VAR_11 : 0);
 }

 VAR_22[VAR_23].start = VAR_24;
 VAR_22[VAR_23].limit = VAR_24 + VAR_26 - 1;
 VAR_22[VAR_23].phys = VAR_25;

 FUNC_5(VAR_23);
}
