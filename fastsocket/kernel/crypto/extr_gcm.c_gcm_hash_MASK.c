
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_gcm_ghash_ctx {int cryptlen; int src; } ;
struct ahash_request {int dummy; } ;
struct TYPE_3__ {struct ahash_request ahreq; } ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; TYPE_1__ u; } ;
struct crypto_gcm_ctx {int ghash; } ;
struct TYPE_4__ {int tfm; } ;
struct aead_request {int assoclen; int assoc; TYPE_2__ base; } ;
typedef int crypto_completion_t ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_2 (struct ahash_request*,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 struct crypto_gcm_ctx* FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;
 int VAR_4 ;
 int FUNC_6 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;
 int FUNC_7 (struct aead_request*,struct crypto_gcm_req_priv_ctx*,unsigned int,int ) ;
 int FUNC_8 (struct aead_request*,struct crypto_gcm_req_priv_ctx*,int ,int ,int ) ;
 unsigned int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_5,
      struct crypto_gcm_req_priv_ctx *VAR_6)
{
 struct ahash_request *VAR_7 = &VAR_6->u.ahreq;
 struct crypto_gcm_ghash_ctx *VAR_8 = &VAR_6->ghash_ctx;
 struct crypto_gcm_ctx *VAR_9 = FUNC_4(VAR_5->base.tfm);
 unsigned int VAR_10;
 crypto_completion_t VAR_11;
 int VAR_12;

 FUNC_2(VAR_7, VAR_9->ghash);

 FUNC_1(VAR_7, FUNC_0(VAR_5),
       VAR_4, VAR_5);
 VAR_12 = FUNC_3(VAR_7);
 if (VAR_12)
  return VAR_12;
 VAR_10 = FUNC_9(VAR_5->assoclen);
 VAR_11 = VAR_10 ? VAR_0 : VAR_1;
 VAR_12 = FUNC_8(VAR_5, VAR_6, VAR_11, VAR_5->assoc, VAR_5->assoclen);
 if (VAR_12)
  return VAR_12;
 if (VAR_10) {
  VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_10,
          VAR_1);
  if (VAR_12)
   return VAR_12;
 }
 VAR_10 = FUNC_9(VAR_8->cryptlen);
 VAR_11 = VAR_10 ? VAR_2 : VAR_3;
 VAR_12 = FUNC_8(VAR_5, VAR_6, VAR_11, VAR_8->src, VAR_8->cryptlen);
 if (VAR_12)
  return VAR_12;
 if (VAR_10) {
  VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_10,
          VAR_3);
  if (VAR_12)
   return VAR_12;
 }
 VAR_12 = FUNC_6(VAR_5, VAR_6);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_5(VAR_5, VAR_6);
 if (VAR_12)
  return VAR_12;

 return 0;
}
