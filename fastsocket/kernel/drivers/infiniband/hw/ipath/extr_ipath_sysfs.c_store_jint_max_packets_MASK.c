
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipath_devdata {int ipath_jint_idle_ticks; int (* ipath_f_config_jint ) (struct ipath_devdata*,int ,int ) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipath_devdata*,char*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (struct ipath_devdata*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2,
          size_t VAR_3)
{
 struct ipath_devdata *VAR_4 = FUNC_0(VAR_0);
 u16 VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_6 < 0)
  FUNC_1(VAR_4, "invalid jint_max_packets.\n");
 else
  VAR_4->ipath_f_config_jint(VAR_4, VAR_4->ipath_jint_idle_ticks, VAR_5);

 return VAR_6;
}
