
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_flags; int ipath_unit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3,
     const char *VAR_4,
     size_t VAR_5)
{
 struct ipath_devdata *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 if (VAR_5 < 5 || FUNC_3(VAR_4, "reset", 5)) {
  VAR_7 = -VAR_0;
  goto bail;
 }

 if (VAR_6->ipath_flags & VAR_1) {





  FUNC_1(VAR_2,"Unit %d is disabled, can't reset\n",
    VAR_6->ipath_unit);
  VAR_7 = -VAR_0;
  goto bail;
 }
 VAR_7 = FUNC_2(VAR_6->ipath_unit);
bail:
 return VAR_7<0 ? VAR_7 : VAR_5;
}
