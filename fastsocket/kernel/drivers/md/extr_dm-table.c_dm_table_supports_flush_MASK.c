
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; scalar_t__ flush_supported; int num_flush_requests; } ;
struct dm_table {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* iterate_devices ) (struct dm_target*,int ,unsigned int*) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,int ) ;
 scalar_t__ FUNC_2 (struct dm_target*,int ,unsigned int*) ;

__attribute__((used)) static bool FUNC_3(struct dm_table *VAR_1, unsigned VAR_2)
{
 struct dm_target *VAR_3;
 unsigned VAR_4 = 0;







 while (VAR_4 < FUNC_0(VAR_1)) {
  VAR_3 = FUNC_1(VAR_1, VAR_4++);

  if (!VAR_3->num_flush_requests)
   continue;

  if (VAR_3->flush_supported)
   return 1;

  if (VAR_3->type->iterate_devices &&
      VAR_3->type->iterate_devices(VAR_3, VAR_0, &VAR_2))
   return 1;
 }

 return 0;
}
