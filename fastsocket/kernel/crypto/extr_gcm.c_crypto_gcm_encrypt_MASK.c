
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_gcm_ghash_ctx {int complete; int cryptlen; int src; } ;
struct ablkcipher_request {int dummy; } ;
struct TYPE_2__ {struct ablkcipher_request abreq; } ;
struct crypto_gcm_req_priv_ctx {int iauth_tag; int auth_tag; struct crypto_gcm_ghash_ctx ghash_ctx; TYPE_1__ u; } ;
struct aead_request {int cryptlen; int dst; } ;


 int FUNC_0 (struct ablkcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (struct ablkcipher_request*,struct aead_request*,int ) ;
 struct crypto_gcm_req_priv_ctx* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;

__attribute__((used)) static int FUNC_8(struct aead_request *VAR_2)
{
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_4(VAR_2);
 struct ablkcipher_request *VAR_4 = &VAR_3->u.abreq;
 struct crypto_gcm_ghash_ctx *VAR_5 = &VAR_3->ghash_ctx;
 int VAR_6;

 FUNC_3(VAR_4, VAR_2, VAR_2->cryptlen);
 FUNC_0(VAR_4, FUNC_1(VAR_2),
     VAR_1, VAR_2);

 VAR_5->src = VAR_2->dst;
 VAR_5->cryptlen = VAR_2->cryptlen;
 VAR_5->complete = VAR_0;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_7(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_5(VAR_3->auth_tag, VAR_3->iauth_tag, 16);
 FUNC_6(VAR_2, VAR_3);

 return 0;
}
