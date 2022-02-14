
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viodasd_device {int * disk; } ;
struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct viodasd_device*) ;
 struct viodasd_device* VAR_1 ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver *VAR_2, const char *VAR_3,
  size_t VAR_4)
{
 struct viodasd_device *VAR_5;

 for (VAR_5 = VAR_1; VAR_5 < &VAR_1[VAR_0]; VAR_5++) {
  if (VAR_5->disk == ((void*)0))
   FUNC_0(VAR_5);
 }
 return VAR_4;
}
