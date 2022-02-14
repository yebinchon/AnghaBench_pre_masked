
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_find_device_by_slot_info {scalar_t__ slot; struct mca_device* mca_dev; } ;
struct mca_device {scalar_t__ slot; } ;
struct device {int dummy; } ;


 struct mca_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct mca_find_device_by_slot_info *VAR_2 = VAR_1;
 struct mca_device *VAR_3 = FUNC_0(VAR_0);

 if(VAR_3->slot == VAR_2->slot)
  VAR_2->mca_dev = VAR_3;

 return 0;
}
