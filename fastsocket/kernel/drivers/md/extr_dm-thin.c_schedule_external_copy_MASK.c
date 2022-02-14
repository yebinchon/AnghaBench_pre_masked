
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int origin_dev; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct thin_c*,int ,int ,int ,int ,struct dm_bio_prison_cell*,struct bio*) ;

__attribute__((used)) static void FUNC_1(struct thin_c *VAR_0, dm_block_t VAR_1,
       dm_block_t VAR_2,
       struct dm_bio_prison_cell *VAR_3, struct bio *VAR_4)
{
 FUNC_0(VAR_0, VAR_1, VAR_0->origin_dev,
        VAR_1, VAR_2, VAR_3, VAR_4);
}
