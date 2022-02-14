
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_table {int num_targets; unsigned int num_allocated; struct dm_target* targets; struct dm_target* highs; } ;
typedef struct dm_target sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct dm_target*,struct dm_target*,int) ;
 int FUNC_2 (struct dm_target*,int,int) ;
 int FUNC_3 (struct dm_target*) ;

__attribute__((used)) static int FUNC_4(struct dm_table *VAR_1, unsigned int VAR_2)
{
 sector_t *VAR_3;
 struct dm_target *VAR_4;
 int VAR_5 = VAR_1->num_targets;






 VAR_3 = (sector_t *) FUNC_0(VAR_2 + 1, sizeof(struct dm_target) +
       sizeof(sector_t));
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = (struct dm_target *) (VAR_3 + VAR_2);

 if (VAR_5) {
  FUNC_1(VAR_3, VAR_1->highs, sizeof(*VAR_3) * VAR_5);
  FUNC_1(VAR_4, VAR_1->targets, sizeof(*VAR_4) * VAR_5);
 }

 FUNC_2(VAR_3 + VAR_5, -1, sizeof(*VAR_3) * (VAR_2 - VAR_5));
 FUNC_3(VAR_1->highs);

 VAR_1->num_allocated = VAR_2;
 VAR_1->highs = VAR_3;
 VAR_1->targets = VAR_4;

 return 0;
}
