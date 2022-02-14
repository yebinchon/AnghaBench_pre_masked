
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct reg_window32 {scalar_t__* ins; } ;
struct pt_regs {int psr; scalar_t__ pc; scalar_t__* u_regs; } ;
struct TYPE_3__ {int comm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(char *VAR_9, struct pt_regs *VAR_10)
{
 static int VAR_11;
 int VAR_12 = 0;


 FUNC_3(
"              \\|/ ____ \\|/\n"
"              \"@'/ ,. \\`@\"\n"
"              /_| \\__/ |_\\\n"
"                 \\__U_/\n");

 FUNC_3("%s(%d): %s [#%d]\n", VAR_8->comm, FUNC_5(VAR_8), VAR_9, ++VAR_11);
 FUNC_4(VAR_10);
 FUNC_0(VAR_4);

 VAR_7; VAR_7; VAR_7; VAR_7;
 VAR_7; VAR_7; VAR_7; VAR_7;
 VAR_6; VAR_6; VAR_6; VAR_6;
 VAR_6; VAR_6; VAR_6; VAR_6;

 {
  struct reg_window32 *VAR_13 = (struct reg_window32 *)VAR_10->u_regs[VAR_5];





  while(VAR_13 &&
        VAR_12++ < 30 &&
                      (((unsigned long) VAR_13) >= VAR_0) &&
        !(((unsigned long) VAR_13) & 0x7)) {
   FUNC_3("Caller[%08lx]: %pS\n", VAR_13->ins[7],
          (void *) VAR_13->ins[7]);
   VAR_13 = (struct reg_window32 *)VAR_13->ins[6];
  }
 }
 FUNC_3("Instruction DUMP:");
 FUNC_2 ((unsigned long *) VAR_10->pc);
 if(VAR_10->psr & VAR_1)
  FUNC_1(VAR_2);
 FUNC_1(VAR_3);
}
