
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_platform_driver {int (* probe ) (struct of_device*,struct of_device_id const*) ;int match_table; } ;
struct of_device_id {int dummy; } ;
struct of_device {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct of_device*) ;
 int FUNC_1 (struct of_device*) ;
 struct of_device_id* FUNC_2 (int ,struct of_device*) ;
 int FUNC_3 (struct of_device*,struct of_device_id const*) ;
 struct of_device* FUNC_4 (struct device*) ;
 struct of_platform_driver* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 int VAR_2 = -VAR_0;
 struct of_platform_driver *VAR_3;
 struct of_device *VAR_4;
 const struct of_device_id *VAR_5;

 VAR_3 = FUNC_5(VAR_1->driver);
 VAR_4 = FUNC_4(VAR_1);

 if (!VAR_3->probe)
  return VAR_2;

 FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_3->match_table, VAR_4);
 if (VAR_5)
  VAR_2 = VAR_3->probe(VAR_4, VAR_5);
 if (VAR_2)
  FUNC_1(VAR_4);

 return VAR_2;
}
