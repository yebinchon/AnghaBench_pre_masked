
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_authenc_ctx {scalar_t__ reqoff; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int cryptlen; int sg; int complete; scalar_t__ tail; } ;
struct ahash_request {int result; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 struct authenc_request_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct ahash_request*,int,int ,struct aead_request*) ;
 int FUNC_3 (struct ahash_request*,int ,int ,int ) ;
 int FUNC_4 (struct aead_request*,int) ;
 int FUNC_5 (struct crypto_aead*) ;
 struct crypto_authenc_ctx* FUNC_6 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_7 (struct aead_request*) ;
 int FUNC_8 (struct ahash_request*) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_10(struct crypto_async_request *VAR_1,
         int VAR_2)
{
 struct aead_request *VAR_3 = VAR_1->data;
 struct crypto_aead *VAR_4 = FUNC_7(VAR_3);
 struct crypto_authenc_ctx *VAR_5 = FUNC_6(VAR_4);
 struct authenc_request_ctx *VAR_6 = FUNC_0(VAR_3);
 struct ahash_request *VAR_7 = (void *)(VAR_6->tail + VAR_5->reqoff);

 if (VAR_2)
  goto out;

 FUNC_3(VAR_7, VAR_6->sg, VAR_7->result,
    VAR_6->cryptlen);
 FUNC_2(VAR_7, FUNC_1(VAR_3) &
       VAR_0,
       VAR_6->complete, VAR_3);

 VAR_2 = FUNC_8(VAR_7);
 if (VAR_2)
  goto out;

 FUNC_9(VAR_7->result, VAR_6->sg,
     VAR_6->cryptlen,
     FUNC_5(VAR_4), 1);

out:
 FUNC_4(VAR_3, VAR_2);
}
