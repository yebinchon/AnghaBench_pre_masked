
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ecryptfs_crypt_stat {int flags; int key_size; int cs_tfm_mutex; int key; int tfm; } ;
struct blkcipher_desc {unsigned char* info; int flags; int tfm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ecryptfs_crypt_stat *VAR_7,
          struct scatterlist *VAR_8,
          struct scatterlist *VAR_9, int VAR_10,
          unsigned char *VAR_11)
{
 struct blkcipher_desc VAR_12 = {
  .tfm = VAR_7->tfm,
  .info = VAR_11,
  .flags = VAR_0
 };
 int VAR_13 = 0;

 FUNC_0(!VAR_7 || !VAR_7->tfm
        || !(VAR_7->flags & VAR_2));
 if (FUNC_7(VAR_6 > 0)) {
  FUNC_4(VAR_4, "Key size [%d]; key:\n",
    VAR_7->key_size);
  FUNC_3(VAR_7->key,
      VAR_7->key_size);
 }

 FUNC_5(&VAR_7->cs_tfm_mutex);
 if (!(VAR_7->flags & VAR_1)) {
  VAR_13 = FUNC_2(VAR_7->tfm, VAR_7->key,
          VAR_7->key_size);
  VAR_7->flags |= VAR_1;
 }
 if (VAR_13) {
  FUNC_4(VAR_5, "Error setting key; rc = [%d]\n",
    VAR_13);
  FUNC_6(&VAR_7->cs_tfm_mutex);
  VAR_13 = -VAR_3;
  goto out;
 }
 FUNC_4(VAR_4, "Encrypting [%d] bytes.\n", VAR_10);
 FUNC_1(&VAR_12, VAR_8, VAR_9, VAR_10);
 FUNC_6(&VAR_7->cs_tfm_mutex);
out:
 return VAR_13;
}
