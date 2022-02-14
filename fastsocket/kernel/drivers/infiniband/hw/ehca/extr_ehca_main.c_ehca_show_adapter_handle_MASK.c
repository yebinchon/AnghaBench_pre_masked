
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handle; } ;
struct ehca_shca {TYPE_1__ ipz_hca_handle; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ehca_shca* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct ehca_shca *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%llx\n", VAR_3->ipz_hca_handle.handle);

}
