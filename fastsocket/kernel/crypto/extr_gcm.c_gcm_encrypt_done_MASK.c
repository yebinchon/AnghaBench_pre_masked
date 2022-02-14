
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_gcm_req_priv_ctx {int iauth_tag; int auth_tag; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aead_request*,int) ;
 struct crypto_gcm_req_priv_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;
 int FUNC_4 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_2, int VAR_3)
{
 struct aead_request *VAR_4 = VAR_2->data;
 struct crypto_gcm_req_priv_ctx *VAR_5 = FUNC_1(VAR_4);

 if (!VAR_3) {
  VAR_3 = FUNC_4(VAR_4, VAR_5);
  if (VAR_3 == -VAR_1 || VAR_3 == -VAR_0)
   return;
  else if (!VAR_3) {
   FUNC_2(VAR_5->auth_tag, VAR_5->iauth_tag, 16);
   FUNC_3(VAR_4, VAR_5);
  }
 }

 FUNC_0(VAR_4, VAR_3);
}
