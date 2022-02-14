
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct davinci_i2c_dev {int * clk; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct davinci_i2c_dev*,int ,int ) ;
 int FUNC_3 (int ,struct davinci_i2c_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct davinci_i2c_dev*) ;
 struct davinci_i2c_dev* FUNC_6 (struct platform_device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct resource*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 struct davinci_i2c_dev *VAR_4 = FUNC_6(VAR_3);
 struct resource *VAR_5;

 FUNC_8(VAR_3, ((void*)0));
 FUNC_4(&VAR_4->adapter);
 FUNC_9(&VAR_3->dev);

 FUNC_0(VAR_4->clk);
 FUNC_1(VAR_4->clk);
 VAR_4->clk = ((void*)0);

 FUNC_2(VAR_4, VAR_0, 0);
 FUNC_3(VAR_2, VAR_4);
 FUNC_5(VAR_4);

 VAR_5 = FUNC_7(VAR_3, VAR_1, 0);
 FUNC_10(VAR_5->start, FUNC_11(VAR_5));
 return 0;
}
