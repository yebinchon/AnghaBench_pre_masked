
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long,unsigned int*) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(unsigned int *VAR_0)
{
 long VAR_1;

 FUNC_1("\nCode:");

 for(VAR_1 = -3 ; VAR_1 < 6 ; VAR_1++) {
  unsigned long VAR_2;
  if (FUNC_0(VAR_2, VAR_0 + VAR_1)) {
   FUNC_1(" (Bad address in pc)\n");
   break;
  }
  FUNC_1("%c%08lx%c",(VAR_1?' ':'<'),VAR_2,(VAR_1?' ':'>'));
 }
}
