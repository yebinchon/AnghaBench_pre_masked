
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct ipath_devdata *VAR_5 = FUNC_0(VAR_2);
 return FUNC_1(VAR_4, VAR_1, "%u\n",
    (VAR_5->ipath_flags & VAR_0) ? 0 : 1);
}
