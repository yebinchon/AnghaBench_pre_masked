
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int * ipath_eep_st_errs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct ipath_devdata*) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int ,char) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
    struct device_attribute *VAR_4,
    char *VAR_5)
{
 struct ipath_devdata *VAR_6 = FUNC_0(VAR_3);
 int VAR_7, VAR_8;


 if (FUNC_1(VAR_6) != 0)
  return -VAR_0;

 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  VAR_8 += FUNC_2(VAR_5 + VAR_8, VAR_2 - VAR_8, "%d%c",
   VAR_6->ipath_eep_st_errs[VAR_7],
   VAR_7 == (VAR_1 - 1) ? '\n' : ' ');
 }

 return VAR_8;
}
