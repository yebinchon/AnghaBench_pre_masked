
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {int data_space_map_root; int metadata_space_map_root; } ;
struct dm_pool_metadata {int metadata_sm; int tm; int data_sm; int nb_tm; int bm; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct thin_disk_superblock*,struct dm_pool_metadata*) ;
 int FUNC_4 (struct dm_pool_metadata*) ;
 struct thin_disk_superblock* FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int ,int ,int *,struct dm_block**) ;
 int FUNC_7 (struct dm_block*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_13(struct dm_pool_metadata *VAR_3)
{
 int VAR_4;
 struct dm_block *VAR_5;
 struct thin_disk_superblock *VAR_6;

 VAR_4 = FUNC_6(VAR_3->bm, VAR_1,
       &VAR_2, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_0("couldn't read superblock");
  return VAR_4;
 }

 VAR_6 = FUNC_5(VAR_5);

 VAR_4 = FUNC_3(VAR_6, VAR_3);
 if (VAR_4 < 0)
  goto bad_unlock_sblock;

 VAR_4 = FUNC_12(VAR_3->bm, VAR_1,
          VAR_6->metadata_space_map_root,
          sizeof(VAR_6->metadata_space_map_root),
          &VAR_3->tm, &VAR_3->metadata_sm);
 if (VAR_4 < 0) {
  FUNC_0("tm_open_with_sm failed");
  goto bad_unlock_sblock;
 }

 VAR_3->data_sm = FUNC_9(VAR_3->tm, VAR_6->data_space_map_root,
           sizeof(VAR_6->data_space_map_root));
 if (FUNC_1(VAR_3->data_sm)) {
  FUNC_0("sm_disk_open failed");
  VAR_4 = FUNC_2(VAR_3->data_sm);
  goto bad_cleanup_tm;
 }

 VAR_3->nb_tm = FUNC_10(VAR_3->tm);
 if (!VAR_3->nb_tm) {
  FUNC_0("could not create non-blocking clone tm");
  VAR_4 = -VAR_0;
  goto bad_cleanup_data_sm;
 }

 FUNC_4(VAR_3);
 return FUNC_7(VAR_5);

bad_cleanup_data_sm:
 FUNC_8(VAR_3->data_sm);
bad_cleanup_tm:
 FUNC_11(VAR_3->tm);
 FUNC_8(VAR_3->metadata_sm);
bad_unlock_sblock:
 FUNC_7(VAR_5);

 return VAR_4;
}
