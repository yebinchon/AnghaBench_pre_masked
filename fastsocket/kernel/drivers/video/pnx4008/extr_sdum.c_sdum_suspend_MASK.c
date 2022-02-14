
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct clk {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_1 ;
 struct clk* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2, pm_message_t VAR_3)
{
 int VAR_4 = 0;
 struct clk *VAR_5;

 VAR_5 = FUNC_2(0, "dum_ck");
 if (!FUNC_0(VAR_5)) {
  FUNC_4(VAR_5, 0);
  FUNC_3(VAR_5);
 } else
  VAR_4 = FUNC_1(VAR_5);


 VAR_0 = VAR_1;


 FUNC_5();

 return VAR_4;
}
