
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int id; int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (int *,char*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,int ) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct clk *VAR_2;
 char VAR_3[10];
 int VAR_4 = 0;

 FUNC_4(VAR_3, 10, "i2c%d_ck", VAR_1->id);
 VAR_2 = FUNC_1(&VAR_1->dev, VAR_3);
 if (!FUNC_0(VAR_2)) {
  FUNC_3(VAR_2, 0);
  FUNC_2(VAR_2);
 } else
  VAR_4 = -VAR_0;

 return VAR_4;
}
