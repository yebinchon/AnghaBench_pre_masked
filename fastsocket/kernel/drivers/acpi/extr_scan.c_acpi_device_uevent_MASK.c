
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int buflen; int * buf; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*) ;
 int FUNC_1 (struct acpi_device*,int *,int) ;
 struct acpi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (FUNC_0(VAR_2, "MODALIAS="))
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_3, &VAR_2->buf[VAR_2->buflen - 1],
         sizeof(VAR_2->buf) - VAR_2->buflen);
 if (VAR_4 >= (sizeof(VAR_2->buf) - VAR_2->buflen))
  return -VAR_0;
 VAR_2->buflen += VAR_4;
 return 0;
}
