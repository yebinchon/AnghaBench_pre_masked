
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_gcm_req_priv_ctx {int dummy; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct aead_request*,int) ;
 struct crypto_gcm_req_priv_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;

__attribute__((used)) static void FUNC_3(struct aead_request *VAR_0, int VAR_1)
{
 struct crypto_gcm_req_priv_ctx *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_1)
  FUNC_2(VAR_0, VAR_2);

 FUNC_0(VAR_0, VAR_1);
}
