
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_thin_device {int dummy; } ;
struct dm_pool_metadata {int bl_info; int root; int tl_info; int details_root; int details_info; } ;
struct disk_device_details {int dummy; } ;
typedef int dm_thin_id ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct dm_thin_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_pool_metadata*,int ,int,struct dm_thin_device**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int *,int *,int *) ;
 int FUNC_7 (int *,int ,int *,struct disk_device_details*) ;
 int FUNC_8 (int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_9(struct dm_pool_metadata *VAR_1,
    dm_thin_id VAR_2)
{
 int VAR_3;
 dm_block_t VAR_4;
 uint64_t VAR_5 = VAR_2;
 struct disk_device_details VAR_6;
 struct dm_thin_device *VAR_7;
 __le64 VAR_8;

 VAR_3 = FUNC_7(&VAR_1->details_info, VAR_1->details_root,
       &VAR_5, &VAR_6);
 if (!VAR_3)
  return -VAR_0;




 VAR_3 = FUNC_5(&VAR_1->bl_info, &VAR_4);
 if (VAR_3)
  return VAR_3;




 VAR_8 = FUNC_3(VAR_4);
 FUNC_1(&VAR_8);
 VAR_3 = FUNC_6(&VAR_1->tl_info, VAR_1->root, &VAR_5, &VAR_8, &VAR_1->root);
 if (VAR_3) {
  FUNC_4(&VAR_1->bl_info, VAR_4);
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2, 1, &VAR_7);
 if (VAR_3) {
  FUNC_8(&VAR_1->tl_info, VAR_1->root, &VAR_5, &VAR_1->root);
  FUNC_4(&VAR_1->bl_info, VAR_4);
  return VAR_3;
 }
 FUNC_0(VAR_7);

 return VAR_3;
}
