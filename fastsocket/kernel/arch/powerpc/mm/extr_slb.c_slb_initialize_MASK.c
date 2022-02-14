
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long vmalloc_sllp; int kstack; int stab_rr; } ;
struct TYPE_3__ {unsigned long sllp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ,unsigned long,int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 () ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 TYPE_1__* VAR_9 ;
 unsigned long VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (unsigned int*,unsigned long) ;
 int FUNC_4 (char*,unsigned long) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

void FUNC_8(void)
{
 unsigned long VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17;
 static int VAR_18;
 extern unsigned int *VAR_19;
 extern unsigned int *VAR_20;
 extern unsigned int *VAR_21;






 VAR_13 = VAR_9[VAR_8].sllp;
 VAR_15 = VAR_9[VAR_6].sllp;
 VAR_14 = VAR_9[VAR_11].sllp;
 FUNC_2()->vmalloc_sllp = VAR_3 | VAR_14;



 if (!VAR_18) {
  VAR_18 = 1;
  FUNC_3(VAR_19,
       VAR_3 | VAR_13);
  FUNC_3(VAR_20,
       VAR_3 | VAR_15);
  FUNC_3(VAR_21,
       VAR_10);

  FUNC_4("SLB: linear  LLP = %04lx\n", VAR_13);
  FUNC_4("SLB: io      LLP = %04lx\n", VAR_15);






 }

 FUNC_2()->stab_rr = VAR_2;



 if (FUNC_1(VAR_0))
  return;

 VAR_16 = VAR_3 | VAR_13;
 VAR_17 = VAR_3 | VAR_14;


 asm volatile("isync":::"memory");
 asm volatile("slbmte  %0,%0"::"r" (0) : "memory");
 asm volatile("isync; slbia; isync":::"memory");
 FUNC_0(VAR_1, VAR_7, VAR_16, 0);

 FUNC_0(VAR_4, VAR_7, VAR_17, 1);






 FUNC_7(2);
 if (FUNC_5() != VAR_5 &&
     (FUNC_2()->kstack & FUNC_6(VAR_7)) > VAR_1)
  FUNC_0(FUNC_2()->kstack,
         VAR_7, VAR_16, 2);

 asm volatile("isync":::"memory");
}
