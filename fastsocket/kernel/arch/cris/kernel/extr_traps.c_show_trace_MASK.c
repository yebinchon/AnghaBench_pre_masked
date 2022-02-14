
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long*) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(unsigned long *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 extern char VAR_7, VAR_8;
 int VAR_9;

 FUNC_1("\nCall Trace: ");

 VAR_9 = 1;
 VAR_5 = VAR_2;
 VAR_6 = VAR_1;

 while (((long)VAR_3 & (VAR_0-1)) != 0) {
  if (FUNC_0(VAR_4, VAR_3)) {



   FUNC_1("Failing address 0x%lx\n", (unsigned long)VAR_3);
   break;
  }
  VAR_3++;
  if (((VAR_4 >= (unsigned long)&VAR_7) &&
       (VAR_4 <= (unsigned long)&VAR_8)) ||
      ((VAR_4 >= VAR_5) && (VAR_4 <= VAR_6))) {
   if (VAR_9 && ((VAR_9 % 8) == 0))
    FUNC_1("\n       ");
   FUNC_1("[<%08lx>] ", VAR_4);
   VAR_9++;
  }
 }
}
