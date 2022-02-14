
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int bld; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct asd_ha_struct* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
           struct device_attribute *VAR_2,char *VAR_3)
{
 struct asd_ha_struct *VAR_4 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_4->hw_prof.bios.bld);
}
