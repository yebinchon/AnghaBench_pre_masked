
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int metadata_sm; int tm; int data_sm; int nb_tm; int details_root; int details_info; int root; int info; int bm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct dm_pool_metadata*) ;
 int FUNC_4 (struct dm_pool_metadata*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct dm_pool_metadata *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_9(VAR_2->bm, VAR_1,
     &VAR_2->tm, &VAR_2->metadata_sm);
 if (VAR_3 < 0) {
  FUNC_0("tm_create_with_sm failed");
  return VAR_3;
 }

 VAR_2->data_sm = FUNC_7(VAR_2->tm, 0);
 if (FUNC_1(VAR_2->data_sm)) {
  FUNC_0("sm_disk_create failed");
  VAR_3 = FUNC_2(VAR_2->data_sm);
  goto bad_cleanup_tm;
 }

 VAR_2->nb_tm = FUNC_8(VAR_2->tm);
 if (!VAR_2->nb_tm) {
  FUNC_0("could not create non-blocking clone tm");
  VAR_3 = -VAR_0;
  goto bad_cleanup_data_sm;
 }

 FUNC_3(VAR_2);

 VAR_3 = FUNC_5(&VAR_2->info, &VAR_2->root);
 if (VAR_3 < 0)
  goto bad_cleanup_nb_tm;

 VAR_3 = FUNC_5(&VAR_2->details_info, &VAR_2->details_root);
 if (VAR_3 < 0) {
  FUNC_0("couldn't create devices root");
  goto bad_cleanup_nb_tm;
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto bad_cleanup_nb_tm;

 return 0;

bad_cleanup_nb_tm:
 FUNC_10(VAR_2->nb_tm);
bad_cleanup_data_sm:
 FUNC_6(VAR_2->data_sm);
bad_cleanup_tm:
 FUNC_10(VAR_2->tm);
 FUNC_6(VAR_2->metadata_sm);

 return VAR_3;
}
