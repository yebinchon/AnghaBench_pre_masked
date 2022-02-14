
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_thin_device {int dummy; } ;
struct dm_pool_metadata {int details_root; int details_info; int root; int tl_info; int time; int tm; } ;
struct disk_device_details {int dummy; } ;
typedef int dm_thin_id ;
typedef int dm_block_t ;
typedef struct disk_device_details __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct dm_thin_device*) ;
 int FUNC_1 (struct disk_device_details*) ;
 int FUNC_2 (struct dm_pool_metadata*,int ,int,struct dm_thin_device**) ;
 int FUNC_3 (struct dm_pool_metadata*,struct dm_thin_device*,int ,int ) ;
 struct disk_device_details FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *,struct disk_device_details*,int *) ;
 int FUNC_6 (int *,int ,int *,struct disk_device_details*) ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct disk_device_details) ;

__attribute__((used)) static int FUNC_11(struct dm_pool_metadata *VAR_1,
    dm_thin_id VAR_2, dm_thin_id VAR_3)
{
 int VAR_4;
 dm_block_t VAR_5;
 uint64_t VAR_6 = VAR_3, VAR_7 = VAR_2;
 struct dm_thin_device *VAR_8;
 struct disk_device_details VAR_9;
 __le64 VAR_10;


 VAR_4 = FUNC_6(&VAR_1->details_info, VAR_1->details_root,
       &VAR_7, &VAR_9);
 if (!VAR_4)
  return -VAR_0;


 VAR_4 = FUNC_6(&VAR_1->tl_info, VAR_1->root, &VAR_6, &VAR_10);
 if (VAR_4)
  return VAR_4;
 VAR_5 = FUNC_10(VAR_10);


 FUNC_9(VAR_1->tm, VAR_5);


 VAR_10 = FUNC_4(VAR_5);
 FUNC_1(&VAR_10);
 VAR_6 = VAR_2;
 VAR_4 = FUNC_5(&VAR_1->tl_info, VAR_1->root, &VAR_6, &VAR_10, &VAR_1->root);
 if (VAR_4) {
  FUNC_8(VAR_1->tm, VAR_5);
  return VAR_4;
 }

 VAR_1->time++;

 VAR_4 = FUNC_2(VAR_1, VAR_2, 1, &VAR_8);
 if (VAR_4)
  goto bad;

 VAR_4 = FUNC_3(VAR_1, VAR_8, VAR_3, VAR_1->time);
 FUNC_0(VAR_8);

 if (VAR_4)
  goto bad;

 return 0;

bad:
 FUNC_7(&VAR_1->tl_info, VAR_1->root, &VAR_6, &VAR_1->root);
 FUNC_7(&VAR_1->details_info, VAR_1->details_root,
   &VAR_6, &VAR_1->details_root);
 return VAR_4;
}
