
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_unit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct ipath_devdata *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_0, "%u\n", VAR_4->ipath_unit);
}
