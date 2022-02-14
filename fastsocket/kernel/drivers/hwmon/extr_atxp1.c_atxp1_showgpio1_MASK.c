
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int gpio1; } ;
struct atxp1_data {TYPE_1__ reg; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct atxp1_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct atxp1_data *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_3, "0x%02x\n", VAR_5->reg.gpio1 & VAR_0);

 return VAR_4;
}
