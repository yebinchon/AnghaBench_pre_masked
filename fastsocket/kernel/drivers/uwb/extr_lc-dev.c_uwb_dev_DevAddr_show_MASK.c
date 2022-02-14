
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev {int dev_addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct uwb_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct uwb_dev *VAR_4 = FUNC_1(VAR_1);
 char VAR_5[VAR_0];

 FUNC_2(VAR_5, sizeof(VAR_5), &VAR_4->dev_addr);
 return FUNC_0(VAR_3, "%s\n", VAR_5);
}
