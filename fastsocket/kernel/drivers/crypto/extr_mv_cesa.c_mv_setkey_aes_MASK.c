
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv_ctx {unsigned int key_len; int need_calc_aes_dkey; int aes_enc_key; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 struct mv_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_3, const u8 *VAR_4,
  unsigned int VAR_5)
{
 struct crypto_tfm *VAR_6 = FUNC_1(VAR_3);
 struct mv_ctx *VAR_7 = FUNC_2(VAR_6);

 switch (VAR_5) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_0(VAR_3, VAR_1);
  return -VAR_2;
 }
 VAR_7->key_len = VAR_5;
 VAR_7->need_calc_aes_dkey = 1;

 FUNC_3(VAR_7->aes_enc_key, VAR_4, VAR_0);
 return 0;
}
