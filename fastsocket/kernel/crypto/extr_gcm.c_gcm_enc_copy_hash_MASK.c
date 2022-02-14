
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_gcm_req_priv_ctx {int * auth_tag; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int cryptlen; int dst; } ;


 int FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (int *,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct aead_request *VAR_0,
         struct crypto_gcm_req_priv_ctx *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_1(VAR_0);
 u8 *VAR_3 = VAR_1->auth_tag;

 FUNC_2(VAR_3, VAR_0->dst, VAR_0->cryptlen,
     FUNC_0(VAR_2), 1);
}
