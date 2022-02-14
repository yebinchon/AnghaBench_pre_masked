
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_thin_device {int open_count; int list; } ;
struct dm_pool_metadata {int root; int tl_info; int details_root; int details_info; } ;
typedef int dm_thin_id ;


 int VAR_0 ;
 int FUNC_0 (struct dm_thin_device*) ;
 int FUNC_1 (struct dm_pool_metadata*,int ,int ,struct dm_thin_device**) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (struct dm_thin_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dm_pool_metadata *VAR_1, dm_thin_id VAR_2)
{
 int VAR_3;
 uint64_t VAR_4 = VAR_2;
 struct dm_thin_device *VAR_5;


 VAR_3 = FUNC_1(VAR_1, VAR_2, 0, &VAR_5);
 if (VAR_3)
  return VAR_3;

 if (VAR_5->open_count > 1) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 FUNC_4(&VAR_5->list);
 FUNC_3(VAR_5);
 VAR_3 = FUNC_2(&VAR_1->details_info, VAR_1->details_root,
       &VAR_4, &VAR_1->details_root);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(&VAR_1->tl_info, VAR_1->root, &VAR_4, &VAR_1->root);
 if (VAR_3)
  return VAR_3;

 return 0;
}
