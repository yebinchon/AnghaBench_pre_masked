
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ipath_devdata {scalar_t__ ipath_mlid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,char*) ;
 int FUNC_2 (char const*,scalar_t__*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2,
     const char *VAR_3,
     size_t VAR_4)
{
 struct ipath_devdata *VAR_5 = FUNC_0(VAR_1);
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_7 < 0 || VAR_6 < VAR_0)
  goto invalid;

 VAR_5->ipath_mlid = VAR_6;

 goto bail;
invalid:
 FUNC_1(VAR_5, "attempt to set invalid MLID\n");
bail:
 return VAR_7;
}
