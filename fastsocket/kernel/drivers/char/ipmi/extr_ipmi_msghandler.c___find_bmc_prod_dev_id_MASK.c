
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prod_dev_id {scalar_t__ product_id; scalar_t__ device_id; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ product_id; scalar_t__ device_id; } ;
struct bmc_device {TYPE_1__ id; } ;


 struct bmc_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct prod_dev_id *VAR_2 = VAR_1;
 struct bmc_device *VAR_3 = FUNC_0(VAR_0);

 return (VAR_3->id.product_id == VAR_2->product_id
  && VAR_3->id.device_id == VAR_2->device_id);
}
