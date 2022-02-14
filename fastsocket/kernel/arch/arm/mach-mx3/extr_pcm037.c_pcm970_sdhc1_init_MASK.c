
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int,char*,void*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, irq_handler_t VAR_6,
  void *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, "sdhc-detect");
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_3);
 VAR_8 = FUNC_4(FUNC_0(VAR_2), VAR_6,
   VAR_0 | VAR_1,
    "sdhc-detect", VAR_7);
 if (VAR_8)
  goto err_gpio_free_2;

 return 0;

err_gpio_free_2:




 FUNC_2(VAR_3);

 return VAR_8;
}
