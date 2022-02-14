
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dm_target {char* error; } ;
struct crypto_hash {int dummy; } ;
typedef struct crypto_hash crypto_cipher ;
struct TYPE_3__ {struct crypto_hash* hash_tfm; struct crypto_hash* tfm; int * salt; } ;
struct TYPE_4__ {TYPE_1__ essiv; } ;
struct crypt_config {TYPE_2__ iv_gen_private; int tfm; int cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct crypto_hash*) ;
 int FUNC_1 (struct crypto_hash*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct crypto_hash* FUNC_3 (int ,int ,int ) ;
 struct crypto_hash* FUNC_4 (char const*,int ,int ) ;
 scalar_t__ FUNC_5 (struct crypto_hash*) ;
 int FUNC_6 (struct crypto_hash*) ;
 int FUNC_7 (struct crypto_hash*) ;
 int FUNC_8 (struct crypto_hash*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct crypt_config *VAR_4, struct dm_target *VAR_5,
         const char *VAR_6)
{
 struct crypto_cipher *VAR_7 = ((void*)0);
 struct crypto_hash *VAR_8 = ((void*)0);
 u8 *VAR_9 = ((void*)0);
 int VAR_10;

 if (!VAR_6) {
  VAR_5->error = "Digest algorithm missing for ESSIV mode";
  return -VAR_1;
 }


 VAR_8 = FUNC_4(VAR_6, 0, VAR_0);
 if (FUNC_0(VAR_8)) {
  VAR_5->error = "Error initializing ESSIV hash";
  VAR_10 = FUNC_1(VAR_8);
  goto bad;
 }

 VAR_9 = FUNC_10(FUNC_8(VAR_8), VAR_3);
 if (!VAR_9) {
  VAR_5->error = "Error kmallocing salt storage in ESSIV";
  VAR_10 = -VAR_2;
  goto bad;
 }


 VAR_7 = FUNC_3(VAR_4->cipher, 0, VAR_0);
 if (FUNC_0(VAR_7)) {
  VAR_5->error = "Error allocating crypto tfm for ESSIV";
  VAR_10 = FUNC_1(VAR_7);
  goto bad;
 }
 if (FUNC_5(VAR_7) !=
     FUNC_2(VAR_4->tfm)) {
  VAR_5->error = "Block size of ESSIV cipher does "
       "not match IV size of block cipher";
  VAR_10 = -VAR_1;
  goto bad;
 }

 VAR_4->iv_gen_private.essiv.salt = VAR_9;
 VAR_4->iv_gen_private.essiv.tfm = VAR_7;
 VAR_4->iv_gen_private.essiv.hash_tfm = VAR_8;

 return 0;

bad:
 if (VAR_7 && !FUNC_0(VAR_7))
  FUNC_6(VAR_7);
 if (VAR_8 && !FUNC_0(VAR_8))
  FUNC_7(VAR_8);
 FUNC_9(VAR_9);
 return VAR_10;
}
