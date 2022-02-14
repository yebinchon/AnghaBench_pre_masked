
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long link; unsigned long* gpr; unsigned long nip; } ;
struct perf_callchain_entry {int dummy; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct perf_callchain_entry*,unsigned long) ;
 unsigned long FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,int ,scalar_t__) ;

void
FUNC_5(struct perf_callchain_entry *VAR_7, struct pt_regs *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 long VAR_13 = 0;
 unsigned long *VAR_14;

 VAR_12 = VAR_8->link;
 VAR_9 = VAR_8->gpr[1];
 FUNC_1(VAR_7, FUNC_2(VAR_8));

 if (!FUNC_4(VAR_9, VAR_6, VAR_3))
  return;

 for (;;) {
  VAR_14 = (unsigned long *) VAR_9;
  VAR_10 = VAR_14[0];

  if (VAR_10 == VAR_9 + VAR_5 &&
      VAR_14[VAR_2] == VAR_4) {




   VAR_8 = (struct pt_regs *)(VAR_9 + VAR_3);
   VAR_11 = VAR_8->nip;
   VAR_12 = VAR_8->link;
   VAR_13 = 0;
   FUNC_1(VAR_7, VAR_0);

  } else {
   if (VAR_13 == 0)
    VAR_11 = VAR_12;
   else
    VAR_11 = VAR_14[VAR_1];
   if ((VAR_13 == 1 && VAR_11 == VAR_12) ||
       (VAR_13 <= 1 && !FUNC_0(VAR_11)))
    VAR_11 = 0;

   ++VAR_13;
  }

  FUNC_1(VAR_7, VAR_11);
  if (!FUNC_3(VAR_10, VAR_9))
   return;
  VAR_9 = VAR_10;
 }
}
