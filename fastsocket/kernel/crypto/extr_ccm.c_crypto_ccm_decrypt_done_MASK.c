
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ccm_req_priv_ctx {int odata; int auth_tag; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; int dst; } ;


 int VAR_0 ;
 int FUNC_0 (struct aead_request*,int) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*,int ,unsigned int) ;
 struct crypto_ccm_req_priv_ctx* FUNC_4 (struct aead_request*) ;
 scalar_t__ FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct crypto_async_request *VAR_1,
       int VAR_2)
{
 struct aead_request *VAR_3 = VAR_1->data;
 struct crypto_ccm_req_priv_ctx *VAR_4 = FUNC_4(VAR_3);
 struct crypto_aead *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7 = VAR_3->cryptlen - VAR_6;

 if (!VAR_2) {
  VAR_2 = FUNC_3(VAR_3, VAR_3->dst, VAR_7);
  if (!VAR_2 && FUNC_5(VAR_4->auth_tag, VAR_4->odata, VAR_6))
   VAR_2 = -VAR_0;
 }
 FUNC_0(VAR_3, VAR_2);
}
