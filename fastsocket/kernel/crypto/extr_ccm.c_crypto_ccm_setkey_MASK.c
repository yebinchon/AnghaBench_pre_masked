
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;
struct crypto_ccm_ctx {struct crypto_cipher* cipher; struct crypto_ablkcipher* ctr; } ;
struct crypto_aead {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_ablkcipher*,int) ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*,int) ;
 int FUNC_3 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 struct crypto_ccm_ctx* FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (struct crypto_aead*,int) ;
 int FUNC_7 (struct crypto_cipher*,int) ;
 int FUNC_8 (struct crypto_cipher*) ;
 int FUNC_9 (struct crypto_cipher*,int) ;
 int FUNC_10 (struct crypto_cipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct crypto_aead *VAR_2, const u8 *VAR_3,
        unsigned int VAR_4)
{
 struct crypto_ccm_ctx *VAR_5 = FUNC_4(VAR_2);
 struct crypto_ablkcipher *VAR_6 = VAR_5->ctr;
 struct crypto_cipher *VAR_7 = VAR_5->cipher;
 int VAR_8 = 0;

 FUNC_0(VAR_6, VAR_0);
 FUNC_2(VAR_6, FUNC_5(VAR_2) &
        VAR_0);
 VAR_8 = FUNC_3(VAR_6, VAR_3, VAR_4);
 FUNC_6(VAR_2, FUNC_1(VAR_6) &
         VAR_1);
 if (VAR_8)
  goto out;

 FUNC_7(VAR_7, VAR_0);
 FUNC_9(VAR_7, FUNC_5(VAR_2) &
        VAR_0);
 VAR_8 = FUNC_10(VAR_7, VAR_3, VAR_4);
 FUNC_6(VAR_2, FUNC_8(VAR_7) &
         VAR_1);

out:
 return VAR_8;
}
