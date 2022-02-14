
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_authenc_ctx {int enc; scalar_t__ reqoff; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int cryptlen; int sg; scalar_t__ tail; } ;
struct ahash_request {int * result; } ;
struct TYPE_2__ {int data; int complete; } ;
struct aead_request {int iv; int cryptlen; int dst; int src; TYPE_1__ base; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ablkcipher_request*,int ,int ,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ablkcipher_request*,int ) ;
 void* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct aead_request*,int) ;
 int FUNC_6 (struct ablkcipher_request*) ;
 unsigned int FUNC_7 (struct crypto_aead*) ;
 struct crypto_authenc_ctx* FUNC_8 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_9 (struct aead_request*) ;
 scalar_t__ FUNC_10 (int *,int *,unsigned int) ;
 int FUNC_11 (int *,int ,int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_12(struct crypto_async_request *VAR_1,
          int VAR_2)
{
 u8 *VAR_3;
 unsigned int VAR_4;
 struct ablkcipher_request *VAR_5;
 struct aead_request *VAR_6 = VAR_1->data;
 struct crypto_aead *VAR_7 = FUNC_9(VAR_6);
 struct crypto_authenc_ctx *VAR_8 = FUNC_8(VAR_7);
 struct authenc_request_ctx *VAR_9 = FUNC_3(VAR_6);
 struct ahash_request *VAR_10 = (void *)(VAR_9->tail + VAR_8->reqoff);

 if (VAR_2)
  goto out;

 VAR_4 = FUNC_7(VAR_7);
 VAR_3 = VAR_10->result + VAR_4;
 FUNC_11(VAR_3, VAR_9->sg, VAR_9->cryptlen,
     VAR_4, 0);

 VAR_2 = FUNC_10(VAR_3, VAR_10->result, VAR_4) ? -VAR_0: 0;
 if (VAR_2)
  goto out;

 VAR_5 = FUNC_3(VAR_6);
 FUNC_2(VAR_5, VAR_8->enc);
 FUNC_0(VAR_5, FUNC_4(VAR_6),
     VAR_6->base.complete, VAR_6->base.data);
 FUNC_1(VAR_5, VAR_6->src, VAR_6->dst,
         VAR_6->cryptlen, VAR_6->iv);

 VAR_2 = FUNC_6(VAR_5);

out:
 FUNC_5(VAR_6, VAR_2);
}
