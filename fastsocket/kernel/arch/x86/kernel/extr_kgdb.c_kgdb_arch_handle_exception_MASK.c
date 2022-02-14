
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ip; int flags; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (char**,unsigned long*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long,int) ;

int FUNC_6(int VAR_5, int VAR_6, int VAR_7,
          char *VAR_8, char *VAR_9,
          struct pt_regs *VAR_10)
{
 unsigned long VAR_11;
 unsigned long VAR_12;
 char *VAR_13;
 int VAR_14;

 switch (VAR_8[0]) {
 case 'c':
 case 's':

  VAR_13 = &VAR_8[1];
  if (FUNC_3(&VAR_13, &VAR_11))
   VAR_10->ip = VAR_11;
 case 'D':
 case 'k':
  VAR_14 = VAR_10->ip;


  VAR_10->flags &= ~VAR_1;
  FUNC_0(&VAR_3, -1);


  if (VAR_8[0] == 's') {
   VAR_10->flags |= VAR_1;
   VAR_4 = 1;
   FUNC_0(&VAR_3,
       FUNC_4());
  }

  FUNC_1(VAR_12, 6);
  if (!(VAR_12 & 0x4000)) {
   int VAR_15;

   for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
    if (VAR_12 & (1 << VAR_15) &&
        VAR_2[VAR_15].type == 0) {

     VAR_10->flags |= VAR_0;
     break;
    }
   }
  }
  FUNC_5(0UL, 6);
  FUNC_2();

  return 0;
 }


 return -1;
}
