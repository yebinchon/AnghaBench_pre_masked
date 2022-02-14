
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int dummy; } ;
typedef scalar_t__ dm_block_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dm_space_map*,scalar_t__) ;
 int FUNC_2 (struct dm_space_map*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct dm_space_map *VAR_1, dm_block_t VAR_2)
{
 int VAR_3;
 dm_block_t VAR_4;

 VAR_3 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 if (VAR_2 == VAR_4)
  return 0;

 if (VAR_2 < VAR_4) {
  FUNC_0("cannot reduce size of space map");
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_2 - VAR_4);
}
