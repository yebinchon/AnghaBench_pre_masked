
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct dm_thin_device {int changed; void* snapshotted_time; int mapped_blocks; } ;
struct dm_pool_metadata {int dummy; } ;
typedef int dm_thin_id ;


 int FUNC_0 (struct dm_thin_device*) ;
 int FUNC_1 (struct dm_pool_metadata*,int ,int ,struct dm_thin_device**) ;

__attribute__((used)) static int FUNC_2(struct dm_pool_metadata *VAR_0,
      struct dm_thin_device *VAR_1,
      dm_thin_id VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 struct dm_thin_device *VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_2, 0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_5->changed = 1;
 VAR_5->snapshotted_time = VAR_3;

 VAR_1->mapped_blocks = VAR_5->mapped_blocks;
 VAR_1->snapshotted_time = VAR_3;
 FUNC_0(VAR_5);

 return 0;
}
