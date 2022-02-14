
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int max_recovery; int recovery_count; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dm_region_hash *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->max_recovery; VAR_1++)
  FUNC_0(&VAR_0->recovery_count);
}
