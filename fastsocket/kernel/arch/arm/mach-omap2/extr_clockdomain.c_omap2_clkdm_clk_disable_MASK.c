
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int name; int usecount; } ;
struct clk {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clockdomain*) ;
 int FUNC_2 (struct clockdomain*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct clockdomain*) ;
 int FUNC_8 (struct clockdomain*) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (struct clockdomain*) ;

int FUNC_11(struct clockdomain *VAR_4, struct clk *VAR_5)
{
 int VAR_6;






 if (!VAR_4 || !VAR_5)
  return -VAR_0;
 if (FUNC_3(&VAR_4->usecount) > 0)
  return 0;



 FUNC_9("clockdomain: clkdm %s: clk %s now disabled\n", VAR_4->name,
   VAR_5->name);

 VAR_6 = FUNC_7(VAR_4);

 if ((FUNC_6() && VAR_6 == VAR_3) ||
     (FUNC_5() && VAR_6 == VAR_2)) {

  FUNC_2(VAR_4, 0);
  FUNC_1(VAR_4);
  FUNC_2(VAR_4, 1);
 } else {
  FUNC_8(VAR_4);
 }

 FUNC_10(VAR_4);

 return 0;
}
