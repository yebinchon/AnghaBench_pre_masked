
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rfc4543_ctx {int nonce; struct crypto_aead* child; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_aead*,int) ;
 struct crypto_rfc4543_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int) ;
 int FUNC_4 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_5 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_6(struct crypto_aead *VAR_3, const u8 *VAR_4,
     unsigned int VAR_5)
{
 struct crypto_rfc4543_ctx *VAR_6 = FUNC_1(VAR_3);
 struct crypto_aead *VAR_7 = VAR_6->child;
 int VAR_8;

 if (VAR_5 < 4)
  return -VAR_2;

 VAR_5 -= 4;
 FUNC_5(VAR_6->nonce, VAR_4 + VAR_5, 4);

 FUNC_0(VAR_7, VAR_0);
 FUNC_3(VAR_7, FUNC_2(VAR_3) &
         VAR_0);
 VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5);
 FUNC_3(VAR_3, FUNC_2(VAR_7) &
          VAR_1);

 return VAR_8;
}
