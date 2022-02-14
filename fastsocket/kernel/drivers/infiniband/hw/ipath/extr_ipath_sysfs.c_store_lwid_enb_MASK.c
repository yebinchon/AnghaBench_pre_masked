
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipath_devdata {int (* ipath_f_set_ib_cfg ) (struct ipath_devdata*,int ,int) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,char*) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (struct ipath_devdata*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4,
     size_t VAR_5)
{
 struct ipath_devdata *VAR_6 = FUNC_0(VAR_2);
 int VAR_7, VAR_8;
 u16 VAR_9;

 VAR_7 = FUNC_2(VAR_4, &VAR_9);
 if (VAR_7 >= 0 && (VAR_9 == 0 || VAR_9 > 3))
  VAR_7 = -VAR_0;
 if (VAR_7 < 0) {
  FUNC_1(VAR_6,
   "attempt to set invalid Link Width (enable)\n");
  goto bail;
 }

 VAR_8 = VAR_6->ipath_f_set_ib_cfg(VAR_6, VAR_1, VAR_9);
 if (VAR_8 < 0)
  VAR_7 = VAR_8;

bail:
 return VAR_7;
}
