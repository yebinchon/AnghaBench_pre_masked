
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ tpc; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,scalar_t__,void*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_2)
{
 static unsigned long VAR_3, VAR_4;

 if (FUNC_1(VAR_1, VAR_4 + 5 * VAR_0))
  VAR_3 = 0;
 if (VAR_3 < 5) {
  VAR_4 = VAR_1;
  VAR_3++;
  FUNC_0("Kernel unaligned access at TPC[%lx] %pS\n",
         VAR_2->tpc, (void *) VAR_2->tpc);
 }
}
