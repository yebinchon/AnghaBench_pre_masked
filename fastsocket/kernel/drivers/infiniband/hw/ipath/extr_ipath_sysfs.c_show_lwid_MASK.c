
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int (* ipath_f_get_ib_cfg ) (struct ipath_devdata*,int ) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)

{
 struct ipath_devdata *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = VAR_5->ipath_f_get_ib_cfg(VAR_5, VAR_0);
 if (VAR_6 >= 0)
  VAR_6 = FUNC_1(VAR_4, VAR_1, "%d\n", VAR_6);
 return VAR_6;
}
