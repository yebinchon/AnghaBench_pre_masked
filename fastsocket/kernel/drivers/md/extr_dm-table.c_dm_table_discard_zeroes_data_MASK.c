
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {scalar_t__ discard_zeroes_data_unsupported; } ;
struct dm_table {int dummy; } ;


 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,int ) ;

__attribute__((used)) static bool FUNC_2(struct dm_table *VAR_0)
{
 struct dm_target *VAR_1;
 unsigned VAR_2 = 0;


 while (VAR_2 < FUNC_0(VAR_0)) {
  VAR_1 = FUNC_1(VAR_0, VAR_2++);

  if (VAR_1->discard_zeroes_data_unsupported)
   return 0;
 }

 return 1;
}
