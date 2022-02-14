
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct talitos_ctx {unsigned int keylen; unsigned int enckeylen; unsigned int authkeylen; int key; } ;
struct rtattr {scalar_t__ rta_type; int rta_len; } ;
struct crypto_authenc_key_param {int enckeylen; } ;
struct crypto_aead {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct crypto_authenc_key_param* FUNC_1 (struct rtattr*) ;
 int FUNC_2 (struct rtattr*,unsigned int) ;
 int FUNC_3 (struct rtattr*) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_4 (int ) ;
 struct talitos_ctx* FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (struct crypto_aead*,int ) ;
 int FUNC_7 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct crypto_aead *VAR_4,
         const u8 *VAR_5, unsigned int VAR_6)
{
 struct talitos_ctx *VAR_7 = FUNC_5(VAR_4);
 struct rtattr *VAR_8 = (void *)VAR_5;
 struct crypto_authenc_key_param *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 if (!FUNC_2(VAR_8, VAR_6))
  goto badkey;

 if (VAR_8->rta_type != VAR_0)
  goto badkey;

 if (FUNC_3(VAR_8) < sizeof(*VAR_9))
  goto badkey;

 VAR_9 = FUNC_1(VAR_8);
 VAR_11 = FUNC_4(VAR_9->enckeylen);

 VAR_5 += FUNC_0(VAR_8->rta_len);
 VAR_6 -= FUNC_0(VAR_8->rta_len);

 if (VAR_6 < VAR_11)
  goto badkey;

 VAR_10 = VAR_6 - VAR_11;

 if (VAR_6 > VAR_3)
  goto badkey;

 FUNC_7(&VAR_7->key, VAR_5, VAR_6);

 VAR_7->keylen = VAR_6;
 VAR_7->enckeylen = VAR_11;
 VAR_7->authkeylen = VAR_10;

 return 0;

badkey:
 FUNC_6(VAR_4, VAR_1);
 return -VAR_2;
}
