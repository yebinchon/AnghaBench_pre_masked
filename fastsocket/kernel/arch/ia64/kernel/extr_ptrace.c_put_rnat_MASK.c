
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct switch_stack {unsigned long ar_rnat; scalar_t__ ar_bspstore; } ;
struct pt_regs {unsigned long cr_ifs; unsigned long ar_rnat; scalar_t__ ar_bspstore; } ;


 unsigned long FUNC_0 (long) ;
 long FUNC_1 (unsigned long*,unsigned long*) ;
 unsigned long* FUNC_2 (unsigned long*) ;
 unsigned long* FUNC_3 (unsigned long*,long) ;
 long FUNC_4 (unsigned long*) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;
 struct pt_regs* FUNC_6 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_7 (struct task_struct *VAR_0, struct switch_stack *VAR_1,
   unsigned long *VAR_2, unsigned long *VAR_3, unsigned long VAR_4,
   unsigned long *VAR_5)
{
 unsigned long VAR_6 = 0, VAR_7 = 0, *VAR_8, VAR_9 = 0, VAR_10, VAR_11;
 unsigned long *VAR_12, *VAR_13, *VAR_14, *VAR_15, VAR_16;
 long VAR_17, VAR_18;
 struct pt_regs *VAR_19;
 unsigned long VAR_20, *VAR_21;

 VAR_19 = FUNC_6(VAR_0);
 VAR_12 = (unsigned long *) VAR_1->ar_bspstore;
 VAR_13 = (unsigned long *) VAR_19->ar_bspstore;

 VAR_21 = VAR_5;
 if (FUNC_5(VAR_19)) {




  VAR_20 = VAR_19->cr_ifs;
  VAR_21 = FUNC_3(VAR_5, -(VAR_20 & 0x7f));
 }

 if (VAR_21 >= VAR_3)
  VAR_18 = 63;
 else {
  if ((VAR_3 - 63) >= VAR_21)
   return;
  VAR_18 = FUNC_1(VAR_3 - 63, VAR_21);
 }
 VAR_10 = FUNC_0(VAR_18);







 VAR_17 = FUNC_1(VAR_13, VAR_3 + 1);
 VAR_8 = FUNC_3(VAR_2, VAR_17);
 VAR_16 = FUNC_4(VAR_8);
 VAR_15 = FUNC_2(VAR_8);
 VAR_14 = VAR_15 - 64;

 if (VAR_13 + 63 > VAR_3) {

  VAR_9 = FUNC_0(FUNC_4(VAR_13)) & VAR_10;
  VAR_19->ar_rnat = (VAR_19->ar_rnat & ~VAR_9) | (VAR_4 & VAR_9);
  VAR_10 &= ~VAR_9;
  if (!VAR_10)
   return;
 }




 VAR_6 = (VAR_4 << VAR_16);
 VAR_11 = VAR_10 << VAR_16;
 if (VAR_14 >= VAR_12)
  VAR_1->ar_rnat = (VAR_1->ar_rnat & ~VAR_11) | (VAR_6 & VAR_11);
 else if (VAR_14 > VAR_2)
  *VAR_14 = ((*VAR_14 & ~VAR_11) | (VAR_6 & VAR_11));

 VAR_7 = (VAR_4 >> (63 - VAR_16));
 VAR_11 = VAR_10 >> (63 - VAR_16);
 if (VAR_15 >= VAR_12)
  VAR_1->ar_rnat = (VAR_1->ar_rnat & ~VAR_11) | (VAR_7 & VAR_11);
 else if (VAR_15 > VAR_2)
  *VAR_15 = ((*VAR_15 & ~VAR_11) | (VAR_7 & VAR_11));
}
