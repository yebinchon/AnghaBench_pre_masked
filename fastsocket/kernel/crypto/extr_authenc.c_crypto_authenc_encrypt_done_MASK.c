
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_authenc_ctx {int enc; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 struct ablkcipher_request* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int) ;
 int FUNC_2 (int ) ;
 struct crypto_authenc_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct aead_request*,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct crypto_async_request *VAR_0,
     int VAR_1)
{
 struct aead_request *VAR_2 = VAR_0->data;

 if (!VAR_1) {
  struct crypto_aead *VAR_3 = FUNC_4(VAR_2);
  struct crypto_authenc_ctx *VAR_4 = FUNC_3(VAR_3);
  struct ablkcipher_request *VAR_5 = FUNC_0(VAR_2);
  u8 *VAR_6 = (u8 *)(VAR_5 + 1) +
    FUNC_2(VAR_4->enc);

  VAR_1 = FUNC_5(VAR_2, VAR_6, 0);
 }

 FUNC_1(VAR_2, VAR_1);
}
