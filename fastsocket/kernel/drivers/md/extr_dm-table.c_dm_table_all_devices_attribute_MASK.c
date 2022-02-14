
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
typedef int iterate_devices_callout_fn ;
struct TYPE_2__ {int (* iterate_devices ) (struct dm_target*,int ,int *) ;} ;


 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,int ) ;
 int FUNC_2 (struct dm_target*,int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct dm_table *VAR_0,
        iterate_devices_callout_fn VAR_1)
{
 struct dm_target *VAR_2;
 unsigned VAR_3 = 0;

 while (VAR_3 < FUNC_0(VAR_0)) {
  VAR_2 = FUNC_1(VAR_0, VAR_3++);

  if (!VAR_2->type->iterate_devices ||
      !VAR_2->type->iterate_devices(VAR_2, VAR_1, ((void*)0)))
   return 0;
 }

 return 1;
}
