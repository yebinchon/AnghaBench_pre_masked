
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int scan_wait; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct ctlr_info*) ;
 int VAR_0 ;
 struct ctlr_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct ctlr_info *VAR_5 = FUNC_1(VAR_1);

 FUNC_0(VAR_5);
 FUNC_3(VAR_0);
 FUNC_2(&VAR_5->scan_wait);

 return VAR_4;
}
