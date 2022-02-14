
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_authenc_ctx {scalar_t__ reqoff; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int cryptlen; int sg; scalar_t__ tail; } ;
struct ahash_request {int result; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct aead_request*,int) ;
 struct authenc_request_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct crypto_aead*) ;
 struct crypto_authenc_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct aead_request *VAR_2 = VAR_0->data;
 struct crypto_aead *VAR_3 = FUNC_4(VAR_2);
 struct crypto_authenc_ctx *VAR_4 = FUNC_3(VAR_3);
 struct authenc_request_ctx *VAR_5 = FUNC_1(VAR_2);
 struct ahash_request *VAR_6 = (void *)(VAR_5->tail + VAR_4->reqoff);

 if (VAR_1)
  goto out;

 FUNC_5(VAR_6->result, VAR_5->sg,
     VAR_5->cryptlen,
     FUNC_2(VAR_3), 1);

out:
 FUNC_0(VAR_2, VAR_1);
}
