
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int id; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct mm_struct *VAR_4)
{
 unsigned int VAR_5;

 FUNC_9(&VAR_2);
 VAR_5 = ++VAR_3;
 if (VAR_5 == 0)
  VAR_5 = VAR_3 = VAR_0;





 if (FUNC_11((VAR_5 & ~VAR_1) == 0)) {
  VAR_5 = ++VAR_3;

  asm("mcr	p15, 0, %0, c13, c0, 1	@ set reserved context ID\n"
      :
      : "r" (0));
  FUNC_6();
  FUNC_4();
  if (FUNC_5()) {
   FUNC_0();
   FUNC_3();
  }
 }
 FUNC_10(&VAR_2);

 FUNC_1(FUNC_7(VAR_4), FUNC_2(FUNC_8()));
 VAR_4->context.id = VAR_5;
}
