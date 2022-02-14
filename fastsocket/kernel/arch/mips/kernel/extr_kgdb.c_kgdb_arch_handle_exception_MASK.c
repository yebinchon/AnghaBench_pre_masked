
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long cp0_epc; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (char**,unsigned long*) ;
 int FUNC_2 () ;

int FUNC_3(int VAR_1, int VAR_2, int VAR_3,
          char *VAR_4, char *VAR_5,
          struct pt_regs *VAR_6)
{
 char *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = FUNC_2();

 switch (VAR_4[0]) {
 case 's':
 case 'c':

  VAR_7 = &VAR_4[1];
  if (FUNC_1(&VAR_7, &VAR_8))
   VAR_6->cp0_epc = VAR_8;

  FUNC_0(&VAR_0, -1);
  if (VAR_4[0] == 's')
   FUNC_0(&VAR_0, VAR_9);

  return 0;
 }

 return -1;
}
