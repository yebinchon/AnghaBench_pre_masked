
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct aesni_xts_ctx {int raw_tweak_ctx; int raw_crypt_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_tfm*,int ,int const*,unsigned int) ;
 struct aesni_xts_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 struct aesni_xts_ctx *VAR_5 = FUNC_1(VAR_2);
 u32 *VAR_6 = &VAR_2->crt_flags;
 int VAR_7;




 if (VAR_4 % 2) {
  *VAR_6 |= VAR_0;
  return -VAR_1;
 }


 VAR_7 = FUNC_0(VAR_2, VAR_5->raw_crypt_ctx, VAR_3, VAR_4 / 2);
 if (VAR_7)
  return VAR_7;


 return FUNC_0(VAR_2, VAR_5->raw_tweak_ctx, VAR_3 + VAR_4 / 2,
      VAR_4 / 2);
}
