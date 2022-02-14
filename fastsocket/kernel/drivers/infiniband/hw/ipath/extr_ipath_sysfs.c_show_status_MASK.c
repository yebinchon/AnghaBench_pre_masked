
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {scalar_t__* ipath_statusp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct ipath_devdata *VAR_5 = FUNC_0(VAR_2);
 ssize_t VAR_6;

 if (!VAR_5->ipath_statusp) {
  VAR_6 = -VAR_0;
  goto bail;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_1, "0x%llx\n",
   (unsigned long long) *(VAR_5->ipath_statusp));

bail:
 return VAR_6;
}
