
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_find_adapter_info {scalar_t__ id; scalar_t__ slot; struct mca_device* mca_dev; } ;
struct mca_device {scalar_t__ pos_id; scalar_t__ slot; } ;
struct device {int dummy; } ;


 struct mca_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct mca_find_adapter_info *VAR_2 = VAR_1;
 struct mca_device *VAR_3 = FUNC_0(VAR_0);

 if(VAR_3->pos_id != VAR_2->id)
  return 0;

 if(VAR_3->slot < VAR_2->slot)
  return 0;

 if(!VAR_2->mca_dev || VAR_2->mca_dev->slot >= VAR_3->slot)
  VAR_2->mca_dev = VAR_3;

 return 0;
}
