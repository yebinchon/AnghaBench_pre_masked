
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct rt2x00_dev {void* rf; TYPE_2__* ops; void* eeprom; TYPE_1__ csr; int dev; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int rf_size; int eeprom_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_6(VAR_4->dev);
 struct resource *VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_3, 0);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->csr.base = FUNC_0(VAR_6->start, FUNC_3(VAR_6));
 if (!VAR_4->csr.base)
  return -VAR_1;

 VAR_4->eeprom = FUNC_1(VAR_4->ops->eeprom_size, VAR_2);
 if (!VAR_4->eeprom)
  goto exit;

 VAR_4->rf = FUNC_1(VAR_4->ops->rf_size, VAR_2);
 if (!VAR_4->rf)
  goto exit;

 return 0;

exit:
 FUNC_4("Failed to allocate registers\n");
 FUNC_5(VAR_4);

 return -VAR_1;
}
