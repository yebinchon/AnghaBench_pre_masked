
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtattr {scalar_t__ rta_type; int rta_len; } ;
struct crypto_authenc_key_param {int enckeylen; } ;
struct crypto_authenc_ctx {struct crypto_ablkcipher* enc; struct crypto_ahash* auth; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct crypto_authenc_key_param* FUNC_1 (struct rtattr*) ;
 int FUNC_2 (struct rtattr*,unsigned int) ;
 int FUNC_3 (struct rtattr*) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct crypto_ablkcipher*,int) ;
 int FUNC_6 (struct crypto_ablkcipher*) ;
 int FUNC_7 (struct crypto_ablkcipher*,int) ;
 int FUNC_8 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 struct crypto_authenc_ctx* FUNC_9 (struct crypto_aead*) ;
 int FUNC_10 (struct crypto_aead*) ;
 int FUNC_11 (struct crypto_aead*,int) ;
 int FUNC_12 (struct crypto_ahash*,int) ;
 int FUNC_13 (struct crypto_ahash*) ;
 int FUNC_14 (struct crypto_ahash*,int) ;
 int FUNC_15 (struct crypto_ahash*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_16(struct crypto_aead *VAR_5, const u8 *VAR_6,
     unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct crypto_authenc_ctx *VAR_10 = FUNC_9(VAR_5);
 struct crypto_ahash *VAR_11 = VAR_10->auth;
 struct crypto_ablkcipher *VAR_12 = VAR_10->enc;
 struct rtattr *VAR_13 = (void *)VAR_6;
 struct crypto_authenc_key_param *VAR_14;
 int VAR_15 = -VAR_4;

 if (!FUNC_2(VAR_13, VAR_7))
  goto badkey;
 if (VAR_13->rta_type != VAR_0)
  goto badkey;
 if (FUNC_3(VAR_13) < sizeof(*VAR_14))
  goto badkey;

 VAR_14 = FUNC_1(VAR_13);
 VAR_9 = FUNC_4(VAR_14->enckeylen);

 VAR_6 += FUNC_0(VAR_13->rta_len);
 VAR_7 -= FUNC_0(VAR_13->rta_len);

 if (VAR_7 < VAR_9)
  goto badkey;

 VAR_8 = VAR_7 - VAR_9;

 FUNC_12(VAR_11, VAR_1);
 FUNC_14(VAR_11, FUNC_10(VAR_5) &
        VAR_1);
 VAR_15 = FUNC_15(VAR_11, VAR_6, VAR_8);
 FUNC_11(VAR_5, FUNC_13(VAR_11) &
           VAR_3);

 if (VAR_15)
  goto out;

 FUNC_5(VAR_12, VAR_1);
 FUNC_7(VAR_12, FUNC_10(VAR_5) &
      VAR_1);
 VAR_15 = FUNC_8(VAR_12, VAR_6 + VAR_8, VAR_9);
 FUNC_11(VAR_5, FUNC_6(VAR_12) &
           VAR_3);

out:
 return VAR_15;

badkey:
 FUNC_11(VAR_5, VAR_2);
 goto out;
}
