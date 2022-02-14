
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_gcm_req_priv_ctx {int dummy; } ;
struct aead_request {int assoclen; int assoc; } ;
typedef int crypto_completion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aead_request*,int) ;
 int FUNC_1 (struct aead_request*,int) ;
 struct crypto_gcm_req_priv_ctx* FUNC_2 (struct aead_request*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct aead_request*,struct crypto_gcm_req_priv_ctx*,int ,int ,int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct aead_request *VAR_4, int VAR_5)
{
 struct crypto_gcm_req_priv_ctx *VAR_6 = FUNC_2(VAR_4);
 crypto_completion_t VAR_7;
 unsigned int VAR_8 = 0;

 if (!VAR_5 && VAR_4->assoclen) {
  VAR_8 = FUNC_4(VAR_4->assoclen);
  VAR_7 = VAR_8 ? VAR_2 :
   VAR_3;
  VAR_5 = FUNC_3(VAR_4, VAR_6, VAR_7,
          VAR_4->assoc, VAR_4->assoclen);
  if (VAR_5 == -VAR_1 || VAR_5 == -VAR_0)
   return;
 }

 if (VAR_8)
  FUNC_0(VAR_4, VAR_5);
 else
  FUNC_1(VAR_4, VAR_5);
}
