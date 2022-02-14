
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union map_info {int dummy; } map_info ;
struct dm_target {int dummy; } ;
struct bio {int bi_sector; } ;


 int FUNC_0 (struct dm_target*,int ) ;
 int FUNC_1 (struct dm_target*,struct bio*,union map_info*) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_0, struct bio *VAR_1,
      union map_info *VAR_2)
{
 VAR_1->bi_sector = FUNC_0(VAR_0, VAR_1->bi_sector);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
