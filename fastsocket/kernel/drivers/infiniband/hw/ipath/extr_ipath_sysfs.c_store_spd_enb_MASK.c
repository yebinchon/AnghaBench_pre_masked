
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
 int VAR_2 ;
 int VAR_3 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,char*) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (struct ipath_devdata*,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
     struct device_attribute *VAR_5,
     const char *VAR_6,
     size_t VAR_7)
{
 struct ipath_devdata *VAR_8 = FUNC_0(VAR_4);
 int VAR_9, VAR_10;
 u16 VAR_11;

 VAR_9 = FUNC_2(VAR_6, &VAR_11);
 if (VAR_9 >= 0 && (VAR_11 == 0 || VAR_11 > (VAR_3 | VAR_2)))
  VAR_9 = -VAR_0;
 if (VAR_9 < 0) {
  FUNC_1(VAR_8,
   "attempt to set invalid Link Speed (enable)\n");
  goto bail;
 }

 VAR_10 = VAR_8->ipath_f_set_ib_cfg(VAR_8, VAR_1, VAR_11);
 if (VAR_10 < 0)
  VAR_9 = VAR_10;

bail:
 return VAR_9;
}
