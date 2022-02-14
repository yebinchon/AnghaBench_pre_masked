
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipath_devdata {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,char*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (struct ipath_devdata*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2,
     size_t VAR_3)
{
 struct ipath_devdata *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_5 > 0)
  FUNC_3(VAR_4, VAR_6);
 else
  FUNC_1(VAR_4, "attempt to set invalid LED override\n");
 return VAR_5;
}
