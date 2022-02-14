
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__* areg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (long) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct pt_regs*) ;
 int FUNC_7 (int *,unsigned long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct pt_regs*) ;

void FUNC_11(const char * VAR_3, struct pt_regs * VAR_4, long VAR_5)
{
 static int VAR_6;
 int VAR_7 = 0;

 FUNC_1();
 FUNC_8(&VAR_1);

 FUNC_5("%s: sig: %ld [#%d]\n", VAR_3, VAR_5, ++VAR_6);




 if (VAR_7)
  FUNC_5("\n");
 FUNC_6(VAR_4);
 if (!FUNC_10(VAR_4))
  FUNC_7(((void*)0), (unsigned long*)VAR_4->areg[1]);

 FUNC_0(VAR_0);
 FUNC_9(&VAR_1);

 if (FUNC_3())
  FUNC_4("Fatal exception in interrupt");

 if (VAR_2)
  FUNC_4("Fatal exception");

 FUNC_2(VAR_5);
}
