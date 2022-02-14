
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_gcm_ghash_ctx {int (* complete ) (struct aead_request*,int) ;} ;
struct crypto_gcm_req_priv_ctx {int iauth_tag; int auth_tag; struct crypto_gcm_ghash_ctx ghash_ctx; } ;
struct aead_request {int dummy; } ;


 struct crypto_gcm_req_priv_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct aead_request*,int) ;

__attribute__((used)) static void FUNC_3(struct aead_request *VAR_0, int VAR_1)
{
 struct crypto_gcm_req_priv_ctx *VAR_2 = FUNC_0(VAR_0);
 struct crypto_gcm_ghash_ctx *VAR_3 = &VAR_2->ghash_ctx;

 if (!VAR_1)
  FUNC_1(VAR_2->auth_tag, VAR_2->iauth_tag, 16);

 VAR_3->complete(VAR_0, VAR_1);
}
