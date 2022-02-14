
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct clk* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 int VAR_6 = 0;
 struct clk *VAR_7;

 VAR_7 = FUNC_2(0, "dum_ck");
 if (!FUNC_0(VAR_7)) {
  FUNC_4(VAR_7, 1);
  FUNC_3(VAR_7);
 } else
  VAR_6 = FUNC_1(VAR_7);


 VAR_1 = VAR_2;

 while (VAR_1 & VAR_0)
  FUNC_6(10);


 FUNC_5();


 VAR_1 = VAR_3;
 FUNC_6(1);
 VAR_1 = VAR_4;
 return 0;
}
