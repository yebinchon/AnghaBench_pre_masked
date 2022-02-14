
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ipath_devdata {int ipath_lmc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,char*,scalar_t__) ;
 int FUNC_2 (char const*,scalar_t__*) ;
 int FUNC_3 (struct ipath_devdata*,scalar_t__,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3,
     const char *VAR_4,
     size_t VAR_5)
{
 struct ipath_devdata *VAR_6 = FUNC_0(VAR_2);
 u16 VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, &VAR_7);
 if (VAR_8 < 0)
  goto invalid;

 if (VAR_7 == 0 || VAR_7 >= VAR_1) {
  VAR_8 = -VAR_0;
  goto invalid;
 }

 FUNC_3(VAR_6, VAR_7, VAR_6->ipath_lmc);

 goto bail;
invalid:
 FUNC_1(VAR_6, "attempt to set invalid LID 0x%x\n", VAR_7);
bail:
 return VAR_8;
}
