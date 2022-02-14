
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {int data_space_map_root; int metadata_space_map_root; } ;
struct dm_pool_metadata {int data_space_map_root; int metadata_space_map_root; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct dm_pool_metadata *VAR_0,
     struct thin_disk_superblock *VAR_1)
{
 FUNC_0(&VAR_1->metadata_space_map_root,
        &VAR_0->metadata_space_map_root,
        sizeof(VAR_0->metadata_space_map_root));

 FUNC_0(&VAR_1->data_space_map_root,
        &VAR_0->data_space_map_root,
        sizeof(VAR_0->data_space_map_root));
}
