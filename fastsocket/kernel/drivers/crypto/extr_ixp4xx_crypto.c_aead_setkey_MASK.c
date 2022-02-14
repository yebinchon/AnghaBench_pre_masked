
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtattr {scalar_t__ rta_type; int rta_len; } ;
struct ixp_ctx {unsigned int enckey_len; unsigned int authkey_len; int authkey; int enckey; } ;
struct crypto_authenc_key_param {int enckeylen; } ;
struct crypto_aead {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct crypto_authenc_key_param* FUNC_1 (struct rtattr*) ;
 int FUNC_2 (struct rtattr*,unsigned int) ;
 int FUNC_3 (struct rtattr*) ;
 int FUNC_4 (struct crypto_aead*,int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct crypto_aead*) ;
 struct ixp_ctx* FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*,int ) ;
 int FUNC_9 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_10(struct crypto_aead *VAR_3, const u8 *VAR_4,
   unsigned int VAR_5)
{
 struct ixp_ctx *VAR_6 = FUNC_7(VAR_3);
 struct rtattr *VAR_7 = (struct rtattr *)VAR_4;
 struct crypto_authenc_key_param *VAR_8;

 if (!FUNC_2(VAR_7, VAR_5))
  goto badkey;
 if (VAR_7->rta_type != VAR_0)
  goto badkey;
 if (FUNC_3(VAR_7) < sizeof(*VAR_8))
  goto badkey;

 VAR_8 = FUNC_1(VAR_7);
 VAR_6->enckey_len = FUNC_5(VAR_8->enckeylen);

 VAR_4 += FUNC_0(VAR_7->rta_len);
 VAR_5 -= FUNC_0(VAR_7->rta_len);

 if (VAR_5 < VAR_6->enckey_len)
  goto badkey;

 VAR_6->authkey_len = VAR_5 - VAR_6->enckey_len;
 FUNC_9(VAR_6->enckey, VAR_4 + VAR_6->authkey_len, VAR_6->enckey_len);
 FUNC_9(VAR_6->authkey, VAR_4, VAR_6->authkey_len);

 return FUNC_4(VAR_3, FUNC_6(VAR_3));
badkey:
 VAR_6->enckey_len = 0;
 FUNC_8(VAR_3, VAR_1);
 return -VAR_2;
}
