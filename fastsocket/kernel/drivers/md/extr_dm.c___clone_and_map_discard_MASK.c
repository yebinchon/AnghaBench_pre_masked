
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int num_discard_requests; int split_discard_requests; } ;
struct clone_info {int sector; int sector_count; int map; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clone_info*,struct dm_target*,int ,scalar_t__) ;
 struct dm_target* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dm_target*) ;
 int FUNC_3 (int ,struct dm_target*) ;
 int FUNC_4 (int ,struct dm_target*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct clone_info *VAR_2)
{
 struct dm_target *VAR_3;
 sector_t VAR_4;

 do {
  VAR_3 = FUNC_1(VAR_2->map, VAR_2->sector);
  if (!FUNC_2(VAR_3))
   return -VAR_0;







  if (!VAR_3->num_discard_requests)
   return -VAR_1;

  if (!VAR_3->split_discard_requests)
   VAR_4 = FUNC_5(VAR_2->sector_count, FUNC_4(VAR_2->sector, VAR_3));
  else
   VAR_4 = FUNC_5(VAR_2->sector_count, FUNC_3(VAR_2->sector, VAR_3));

  FUNC_0(VAR_2, VAR_3, VAR_3->num_discard_requests, VAR_4);

  VAR_2->sector += VAR_4;
 } while (VAR_2->sector_count -= VAR_4);

 return 0;
}
