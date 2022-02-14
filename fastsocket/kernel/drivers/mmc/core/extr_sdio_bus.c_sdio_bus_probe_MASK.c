
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct sdio_driver {int (* probe ) (struct sdio_func*,struct sdio_device_id const*) ;} ;
struct sdio_device_id {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 struct sdio_func* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sdio_func*) ;
 struct sdio_device_id* FUNC_2 (struct sdio_func*,struct sdio_driver*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*,int ) ;
 int FUNC_5 (struct sdio_func*,struct sdio_device_id const*) ;
 struct sdio_driver* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1)
{
 struct sdio_driver *VAR_2 = FUNC_6(VAR_1->driver);
 struct sdio_func *VAR_3 = FUNC_0(VAR_1);
 const struct sdio_device_id *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_4)
  return -VAR_0;



 FUNC_1(VAR_3);
 VAR_5 = FUNC_4(VAR_3, 0);
 FUNC_3(VAR_3);
 if (VAR_5)
  return VAR_5;

 return VAR_2->probe(VAR_3, VAR_4);
}
