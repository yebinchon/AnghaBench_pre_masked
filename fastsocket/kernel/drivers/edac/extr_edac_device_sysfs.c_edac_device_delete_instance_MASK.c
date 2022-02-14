
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_instance {int nr_blocks; int kobj; int * blocks; } ;
struct edac_device_ctl_info {struct edac_device_instance* instances; } ;


 int FUNC_0 (struct edac_device_ctl_info*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct edac_device_ctl_info *VAR_0,
     int VAR_1)
{
 struct edac_device_instance *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_0->instances[VAR_1];


 for (VAR_3 = 0; VAR_3 < VAR_2->nr_blocks; VAR_3++)
  FUNC_0(VAR_0, &VAR_2->blocks[VAR_3]);




 FUNC_1(&VAR_2->kobj);
}
