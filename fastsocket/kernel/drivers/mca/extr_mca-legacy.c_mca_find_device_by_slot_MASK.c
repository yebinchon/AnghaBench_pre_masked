
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_find_device_by_slot_info {int slot; struct mca_device* mca_dev; } ;
struct mca_device {int dummy; } ;


 int FUNC_0 (int *,int *,struct mca_find_device_by_slot_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

struct mca_device *FUNC_1(int VAR_2)
{
 struct mca_find_device_by_slot_info VAR_3;

 VAR_3.slot = VAR_2;
 VAR_3.mca_dev = ((void*)0);

 FUNC_0(&VAR_0, ((void*)0), &VAR_3, VAR_1);

 return VAR_3.mca_dev;
}
