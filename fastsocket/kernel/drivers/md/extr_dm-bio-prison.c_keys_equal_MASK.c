
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key {scalar_t__ virtual; scalar_t__ dev; scalar_t__ block; } ;



__attribute__((used)) static int FUNC_0(struct dm_cell_key *VAR_0, struct dm_cell_key *VAR_1)
{
        return (VAR_0->virtual == VAR_1->virtual) &&
         (VAR_0->dev == VAR_1->dev) &&
         (VAR_0->block == VAR_1->block);
}
