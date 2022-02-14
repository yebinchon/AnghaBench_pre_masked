
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_authenc_ctx {int enc; scalar_t__ reqoff; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int cryptlen; int sg; int complete; scalar_t__ tail; } ;
struct ahash_request {int * result; } ;
struct TYPE_2__ {int data; int complete; } ;
struct aead_request {int iv; int cryptlen; int dst; int src; TYPE_1__ base; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ablkcipher_request*,int,int ,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ablkcipher_request*,int ) ;
 void* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct ahash_request*,int,int ,struct aead_request*) ;
 int FUNC_6 (struct ahash_request*,int ,int *,int ) ;
 int FUNC_7 (struct aead_request*,int) ;
 int FUNC_8 (struct ablkcipher_request*) ;
 unsigned int FUNC_9 (struct crypto_aead*) ;
 struct crypto_authenc_ctx* FUNC_10 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_11 (struct aead_request*) ;
 int FUNC_12 (struct ahash_request*) ;
 scalar_t__ FUNC_13 (int *,int *,unsigned int) ;
 int FUNC_14 (int *,int ,int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_15(struct crypto_async_request *VAR_2,
          int VAR_3)
{
 u8 *VAR_4;
 unsigned int VAR_5;
 struct ablkcipher_request *VAR_6;
 struct aead_request *VAR_7 = VAR_2->data;
 struct crypto_aead *VAR_8 = FUNC_11(VAR_7);
 struct crypto_authenc_ctx *VAR_9 = FUNC_10(VAR_8);
 struct authenc_request_ctx *VAR_10 = FUNC_3(VAR_7);
 struct ahash_request *VAR_11 = (void *)(VAR_10->tail + VAR_9->reqoff);

 if (VAR_3)
  goto out;

 FUNC_6(VAR_11, VAR_10->sg, VAR_11->result,
    VAR_10->cryptlen);
 FUNC_5(VAR_11, FUNC_4(VAR_7) &
       VAR_0,
       VAR_10->complete, VAR_7);

 VAR_3 = FUNC_12(VAR_11);
 if (VAR_3)
  goto out;

 VAR_5 = FUNC_9(VAR_8);
 VAR_4 = VAR_11->result + VAR_5;
 FUNC_14(VAR_4, VAR_10->sg, VAR_10->cryptlen,
     VAR_5, 0);

 VAR_3 = FUNC_13(VAR_4, VAR_11->result, VAR_5) ? -VAR_1: 0;
 if (VAR_3)
  goto out;

 VAR_6 = FUNC_3(VAR_7);
 FUNC_2(VAR_6, VAR_9->enc);
 FUNC_0(VAR_6, FUNC_4(VAR_7),
     VAR_7->base.complete, VAR_7->base.data);
 FUNC_1(VAR_6, VAR_7->src, VAR_7->dst,
         VAR_7->cryptlen, VAR_7->iv);

 VAR_3 = FUNC_8(VAR_6);

out:
 FUNC_7(VAR_7, VAR_3);
}
