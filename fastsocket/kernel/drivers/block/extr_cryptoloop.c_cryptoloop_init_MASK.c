
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_info64 {int lo_offset; int lo_encrypt_key_size; int lo_encrypt_key; int lo_crypt_name; } ;
struct loop_device {struct crypto_blkcipher* key_data; } ;
struct crypto_blkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_blkcipher*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct crypto_blkcipher*) ;
 struct crypto_blkcipher* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct crypto_blkcipher*,int ,int ) ;
 int FUNC_4 (struct crypto_blkcipher*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct loop_device *VAR_4, const struct loop_info64 *VAR_5)
{
 int VAR_6 = -VAR_1;
 int VAR_7;
 int VAR_8;
 char VAR_9[VAR_3];
 char *VAR_10;
 char *VAR_11;
 char *VAR_12 = VAR_9;
 struct crypto_blkcipher *VAR_13;



 if (VAR_5->lo_offset % VAR_2)
  goto out;

 FUNC_8(VAR_9, VAR_5->lo_crypt_name, VAR_3);
 VAR_9[VAR_3 - 1] = 0;

 VAR_10 = VAR_12;
 VAR_7 = FUNC_7(VAR_12, "-");

 VAR_11 = VAR_12 + VAR_7;
 VAR_8 = 0;
 if (*VAR_11) {
  VAR_11++;
  VAR_8 = FUNC_7(VAR_11, "-");
 }

 if (!VAR_8) {
  VAR_11 = "cbc";
  VAR_8 = 3;
 }

 if (VAR_7 + VAR_8 + 3 > VAR_3)
  return -VAR_1;

 FUNC_6(VAR_9, VAR_11, VAR_8);
 VAR_12 = VAR_9 + VAR_8;
 *VAR_12++ = '(';
 FUNC_5(VAR_12, VAR_5->lo_crypt_name, VAR_7);
 VAR_12 += VAR_7;
 *VAR_12++ = ')';
 *VAR_12 = 0;

 VAR_13 = FUNC_2(VAR_9, 0, VAR_0);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_6 = FUNC_3(VAR_13, VAR_5->lo_encrypt_key,
          VAR_5->lo_encrypt_key_size);

 if (VAR_6 != 0)
  goto out_free_tfm;

 VAR_4->key_data = VAR_13;
 return 0;

 out_free_tfm:
 FUNC_4(VAR_13);

 out:
 return VAR_6;
}
