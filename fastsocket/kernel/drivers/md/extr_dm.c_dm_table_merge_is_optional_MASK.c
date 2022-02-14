
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* iterate_devices ) (struct dm_target*,int ,int *) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,int ) ;
 scalar_t__ FUNC_2 (struct dm_target*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct dm_table *VAR_1)
{
 unsigned VAR_2 = 0;
 struct dm_target *VAR_3;

 while (VAR_2 < FUNC_0(VAR_1)) {
  VAR_3 = FUNC_1(VAR_1, VAR_2++);

  if (VAR_3->type->iterate_devices &&
      VAR_3->type->iterate_devices(VAR_3, VAR_0, ((void*)0)))
   return 0;
 }

 return 1;
}
