
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_gcm_ghash_ctx {unsigned int cryptlen; int complete; int src; } ;
struct ablkcipher_request {int dummy; } ;
struct TYPE_2__ {struct ablkcipher_request abreq; } ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; TYPE_1__ u; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; int src; } ;


 int VAR_0 ;
 int FUNC_0 (struct ablkcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct ablkcipher_request*) ;
 unsigned int FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct ablkcipher_request*,struct aead_request*,unsigned int) ;
 struct crypto_gcm_req_priv_ctx* FUNC_6 (struct aead_request*) ;
 int FUNC_7 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;

__attribute__((used)) static int FUNC_9(struct aead_request *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_4(VAR_3);
 struct crypto_gcm_req_priv_ctx *VAR_5 = FUNC_6(VAR_3);
 struct ablkcipher_request *VAR_6 = &VAR_5->u.abreq;
 struct crypto_gcm_ghash_ctx *VAR_7 = &VAR_5->ghash_ctx;
 unsigned int VAR_8 = FUNC_3(VAR_4);
 unsigned int VAR_9 = VAR_3->cryptlen;
 int VAR_10;

 if (VAR_9 < VAR_8)
  return -VAR_0;
 VAR_9 -= VAR_8;

 VAR_7->src = VAR_3->src;
 VAR_7->cryptlen = VAR_9;
 VAR_7->complete = VAR_1;

 VAR_10 = FUNC_8(VAR_3, VAR_5);
 if (VAR_10)
  return VAR_10;

 FUNC_0(VAR_6, FUNC_1(VAR_3),
     VAR_2, VAR_3);
 FUNC_5(VAR_6, VAR_3, VAR_9);
 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10)
  return VAR_10;

 return FUNC_7(VAR_3, VAR_5);
}
