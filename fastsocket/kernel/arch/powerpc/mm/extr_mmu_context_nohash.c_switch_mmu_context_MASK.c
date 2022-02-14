
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; unsigned int id; } ;
struct mm_struct {int pgd; TYPE_1__ context; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long*) ;
 int FUNC_3 () ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 struct mm_struct** VAR_3 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (unsigned long*,unsigned int,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct mm_struct*) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (char*,struct mm_struct*,unsigned int,unsigned int,struct mm_struct*) ;
 int FUNC_11 (char*,unsigned int,struct mm_struct*,int,unsigned int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (unsigned int,int ) ;
 unsigned int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * VAR_8 ;
 unsigned int FUNC_17 (unsigned int) ;
 unsigned int FUNC_18 (unsigned int) ;
 scalar_t__ FUNC_19 (unsigned int,int ) ;

void FUNC_20(struct mm_struct *VAR_9, struct mm_struct *VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13 = FUNC_14();
 unsigned long *VAR_14;


 FUNC_15(&VAR_1);

 FUNC_11("[%d] activating context for mm @%p, active=%d, id=%d",
  VAR_13, VAR_10, VAR_10->context.active, VAR_10->context.id);
 VAR_12 = VAR_10->context.id;
 if (FUNC_7(VAR_12 != VAR_0)) {





  goto ctxt_ok;
 }


 VAR_12 = VAR_6;
 if (VAR_12 > VAR_5)
  VAR_12 = VAR_4;
 VAR_14 = VAR_2;


 if (VAR_7 == 0) {
  VAR_12 = FUNC_18(VAR_12);
  goto stolen;
 }
 VAR_7--;


 while (FUNC_2(VAR_12, VAR_14)) {
  VAR_12 = FUNC_6(VAR_14, VAR_5+1, VAR_12);
  if (VAR_12 > VAR_5)
   VAR_12 = VAR_4;
 }
 stolen:
 VAR_6 = VAR_12 + 1;
 VAR_3[VAR_12] = VAR_10;
 VAR_10->context.id = VAR_12;
 FUNC_12(" | new id=%d,nrf=%d", VAR_12, VAR_7);

 FUNC_3();
 ctxt_ok:




 if (FUNC_19(VAR_12, VAR_8[VAR_13])) {
  FUNC_12(" | stale flush %d [%d..%d]",
       VAR_12, FUNC_4(VAR_13),
       FUNC_5(VAR_13));

  FUNC_8(VAR_10);


  for (VAR_11 = FUNC_4(VAR_13);
       VAR_11 <= FUNC_5(VAR_13); VAR_11++) {
   FUNC_1(VAR_12, VAR_8[VAR_11]);
  }
 }


 FUNC_12(" -> %d\n", VAR_12);
 FUNC_13(VAR_12, VAR_10->pgd);
 FUNC_16(&VAR_1);
}
