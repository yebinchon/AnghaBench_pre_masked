
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_ctx {int key_len; scalar_t__ need_calc_aes_dkey; int * aes_dec_key; int aes_enc_key; } ;
struct crypto_aes_ctx {int * key_enc; } ;




 int FUNC_0 (struct crypto_aes_ctx*,int ,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct mv_ctx *VAR_0)
{
 struct crypto_aes_ctx VAR_1;
 int VAR_2;

 if (!VAR_0->need_calc_aes_dkey)
  return;

 FUNC_0(&VAR_1, VAR_0->aes_enc_key, VAR_0->key_len);

 VAR_2 = VAR_0->key_len + 24;
 FUNC_1(VAR_0->aes_dec_key, &VAR_1.key_enc[VAR_2], 4 * 4);
 switch (VAR_0->key_len) {
 case 128:
  VAR_2 -= 2;

 case 129:
  VAR_2 -= 2;
  FUNC_1(&VAR_0->aes_dec_key[4], &VAR_1.key_enc[VAR_2],
    4 * 4);
  break;
 }
 VAR_0->need_calc_aes_dkey = 0;
}
