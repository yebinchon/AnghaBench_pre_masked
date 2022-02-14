
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ecryptfs_crypt_stat {int cs_tfm_mutex; int key_size; int key; int tfm; } ;
struct blkcipher_desc {unsigned char* info; int flags; int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ecryptfs_crypt_stat *VAR_4,
          struct scatterlist *VAR_5,
          struct scatterlist *VAR_6, int VAR_7,
          unsigned char *VAR_8)
{
 struct blkcipher_desc VAR_9 = {
  .tfm = VAR_4->tfm,
  .info = VAR_8,
  .flags = VAR_0
 };
 int VAR_10 = 0;


 FUNC_3(&VAR_4->cs_tfm_mutex);
 VAR_10 = FUNC_1(VAR_4->tfm, VAR_4->key,
         VAR_4->key_size);
 if (VAR_10) {
  FUNC_2(VAR_3, "Error setting key; rc = [%d]\n",
    VAR_10);
  FUNC_4(&VAR_4->cs_tfm_mutex);
  VAR_10 = -VAR_1;
  goto out;
 }
 FUNC_2(VAR_2, "Decrypting [%d] bytes.\n", VAR_7);
 VAR_10 = FUNC_0(&VAR_9, VAR_5, VAR_6, VAR_7);
 FUNC_4(&VAR_4->cs_tfm_mutex);
 if (VAR_10) {
  FUNC_2(VAR_3, "Error decrypting; rc = [%d]\n",
    VAR_10);
  goto out;
 }
 VAR_10 = VAR_7;
out:
 return VAR_10;
}
