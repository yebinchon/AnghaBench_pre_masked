
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; } ;
struct clockdomain {TYPE_1__ pwrdm; int name; int usecount; } ;
struct clk {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clockdomain*) ;
 int FUNC_1 (struct clockdomain*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct clockdomain*) ;
 int FUNC_6 (struct clockdomain*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct clockdomain*) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct clockdomain *VAR_3, struct clk *VAR_4)
{
 int VAR_5;






 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 if (FUNC_2(&VAR_3->usecount) > 1)
  return 0;



 FUNC_7("clockdomain: clkdm %s: clk %s now enabled\n", VAR_3->name,
   VAR_4->name);

 VAR_5 = FUNC_5(VAR_3);

 if ((FUNC_4() && VAR_5 == VAR_2) ||
     (FUNC_3() && VAR_5 == VAR_1)) {

  FUNC_1(VAR_3, 0);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, 1);
 } else {
  FUNC_6(VAR_3);
 }

 FUNC_9(VAR_3->pwrdm.ptr);
 FUNC_8(VAR_3);

 return 0;
}
