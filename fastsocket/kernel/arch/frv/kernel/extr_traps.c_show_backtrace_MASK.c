
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_context {int dummy; } ;
struct pt_regs {unsigned long sp; struct pt_regs* next_frame; } ;
struct TYPE_2__ {int pid; int comm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct pt_regs*) ;

void FUNC_2(struct pt_regs *VAR_1, unsigned long VAR_2)
{
 struct pt_regs *VAR_3;
 unsigned long VAR_4 = 0, VAR_5 = 0, VAR_6;
 int VAR_7;

 VAR_6 = ((((unsigned long) VAR_1) + 8191) & ~8191) - sizeof(struct user_context);
 VAR_3 = (struct pt_regs *) VAR_6;

 if (VAR_2) {
  VAR_4 = VAR_2;
  VAR_5 = (unsigned long) VAR_1;
 }

 FUNC_0("\nProcess %s (pid: %d)\n\n", VAR_0->comm, VAR_0->pid);

 for (;;) {


  VAR_7 = 0;
  while (VAR_4 < VAR_5) {
   if (VAR_7 == 0)
    FUNC_0(" %04lx :", VAR_4 & 0xffff);

   FUNC_0(" %08lx", *(unsigned long *) VAR_4);

   VAR_4 += 4;
   VAR_7++;
   if (VAR_7 == 8) {
    FUNC_0("\n");
    VAR_7 = 0;
   }
  }

  if (VAR_7 > 0)
   FUNC_0("\n");


  if (VAR_1 == VAR_3)
   break;

  VAR_4 = VAR_1->sp;
  if (((unsigned long) VAR_1) + sizeof(*VAR_1) != VAR_4) {
   FUNC_0("-- TOS %08lx does not follow frame %p --\n",
          VAR_4, VAR_1);
   break;
  }

  FUNC_1(VAR_1);


  VAR_5 = (unsigned long) VAR_1->next_frame;
  if (VAR_5 != VAR_6 &&
      (VAR_5 < VAR_4 ||
       VAR_5 > VAR_6 ||
       (VAR_5 < VAR_6 && VAR_5 + sizeof(*VAR_1) > VAR_6) ||
       VAR_5 & 3)) {
   FUNC_0("-- next_frame %08lx is invalid (range %08lx-%08lx) --\n",
          VAR_5, VAR_4, VAR_6);
   break;
  }


  VAR_1 = VAR_1->next_frame;
 }


 FUNC_1(VAR_3);

}
