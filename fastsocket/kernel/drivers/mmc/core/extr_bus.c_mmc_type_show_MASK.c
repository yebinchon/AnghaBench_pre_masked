
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {int type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;




 struct mmc_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct mmc_card *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_4->type) {
 case 131:
  return FUNC_1(VAR_3, "MMC\n");
 case 130:
  return FUNC_1(VAR_3, "SD\n");
 case 129:
  return FUNC_1(VAR_3, "SDIO\n");
 case 128:
  return FUNC_1(VAR_3, "SDcombo\n");
 default:
  return -VAR_0;
 }
}
