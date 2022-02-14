
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct axon_ram_bank* platform_data; } ;
struct of_device {TYPE_1__ dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct axon_ram_bank {int ecc_counter; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int ) ;
 struct of_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct of_device *VAR_3 = FUNC_2(VAR_0);
 struct axon_ram_bank *VAR_4 = VAR_3->dev.platform_data;

 FUNC_0(!VAR_4);

 return FUNC_1(VAR_2, "%ld\n", VAR_4->ecc_counter);
}
