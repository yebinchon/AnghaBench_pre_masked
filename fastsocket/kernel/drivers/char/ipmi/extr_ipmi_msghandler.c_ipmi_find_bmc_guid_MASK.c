
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct bmc_device {int dummy; } ;


 int VAR_0 ;
 struct bmc_device* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device_driver*,int *,unsigned char*,int ) ;

__attribute__((used)) static struct bmc_device *FUNC_2(struct device_driver *VAR_1,
          unsigned char *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_1(VAR_1, ((void*)0), VAR_2, VAR_0);
 if (VAR_3)
  return FUNC_0(VAR_3);
 else
  return ((void*)0);
}
