
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_device {int dummy; } ;
struct dm_cell_key {int block; int dev; scalar_t__ virtual; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_thin_device*) ;

__attribute__((used)) static void FUNC_1(struct dm_thin_device *VAR_0,
      dm_block_t VAR_1, struct dm_cell_key *VAR_2)
{
 VAR_2->virtual = 0;
 VAR_2->dev = FUNC_0(VAR_0);
 VAR_2->block = VAR_1;
}
