
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int num_targets; scalar_t__* highs; } ;
typedef scalar_t__ sector_t ;



sector_t FUNC_0(struct dm_table *VAR_0)
{
 return VAR_0->num_targets ? (VAR_0->highs[VAR_0->num_targets - 1] + 1) : 0;
}
