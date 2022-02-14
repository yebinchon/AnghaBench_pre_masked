
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {long retx; int syscfg; int ipend; } ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char**,long*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(int VAR_3, int VAR_4,
          int VAR_5, char *VAR_6,
          char *VAR_7,
          struct pt_regs *VAR_8)
{
 long VAR_9;
 char *VAR_10;
 int VAR_11;
 int VAR_12;

 switch (VAR_6[0]) {
 case 'c':
 case 's':
  if (VAR_1 && VAR_1 != VAR_0) {
   FUNC_2(VAR_7, "E00");
   break;
  }

  VAR_1 = ((void*)0);


  VAR_10 = &VAR_6[1];
  if (FUNC_1(&VAR_10, &VAR_9)) {
   VAR_8->retx = VAR_9;
  }
  VAR_11 = VAR_8->retx;


  VAR_8->syscfg &= 0xfffffffe;


  if (VAR_6[0] == 's') {
   VAR_8->syscfg |= 0x1;
   VAR_2 = VAR_8->ipend;
   VAR_2 >>= 6;
   for (VAR_12 = 10; VAR_12 > 0; VAR_12--, VAR_2 >>= 1)
    if (VAR_2 & 1)
     break;




   VAR_2 = VAR_12 + 1;
  }

  FUNC_0();

  return 0;
 }
 return -1;
}
