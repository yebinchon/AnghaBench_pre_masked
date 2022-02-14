
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long nip; int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int VAR_5 ;
 int FUNC_1 (char**,unsigned long*) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;

int FUNC_5(int VAR_7, int VAR_8, int VAR_9,
          char *VAR_10, char *VAR_11,
          struct pt_regs *VAR_12)
{
 char *VAR_13 = &VAR_10[1];
 unsigned long VAR_14;

 switch (VAR_10[0]) {




 case 's':
 case 'c':

  if (FUNC_1(&VAR_13, &VAR_14))
   VAR_12->nip = VAR_14;

  FUNC_0(&VAR_5, -1);

  if (VAR_10[0] == 's') {





   VAR_12->msr |= VAR_3;

   VAR_6 = 1;
   FUNC_0(&VAR_5,
       FUNC_4());
  }
  return 0;
 }

 return -1;
}
