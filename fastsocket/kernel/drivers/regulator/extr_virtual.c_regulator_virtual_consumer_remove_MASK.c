
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_consumer_data {int regulator; scalar_t__ enabled; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct virtual_consumer_data*) ;
 struct virtual_consumer_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct virtual_consumer_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_1(&VAR_1->dev, VAR_0[VAR_3]);
 if (VAR_2->enabled)
  FUNC_4(VAR_2->regulator);
 FUNC_5(VAR_2->regulator);

 FUNC_2(VAR_2);

 return 0;
}
