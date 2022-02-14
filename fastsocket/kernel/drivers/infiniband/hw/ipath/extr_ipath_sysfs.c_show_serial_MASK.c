
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_serial; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct ipath_devdata *VAR_3 = FUNC_0(VAR_0);

 VAR_2[sizeof VAR_3->ipath_serial] = '\0';
 FUNC_1(VAR_2, VAR_3->ipath_serial, sizeof VAR_3->ipath_serial);
 FUNC_2(VAR_2, "\n");
 return FUNC_3(VAR_2);
}
