
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_gcm_req_priv_ctx {int dummy; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aead_request*,int) ;
 struct crypto_gcm_req_priv_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;

__attribute__((used)) static void FUNC_3(struct aead_request *VAR_2, int VAR_3)
{
 struct crypto_gcm_req_priv_ctx *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_2, VAR_4);
  if (VAR_3 == -VAR_1 || VAR_3 == -VAR_0)
   return;
 }

 FUNC_0(VAR_2, VAR_3);
}
