
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_gcm_ghash_ctx {int cryptlen; } ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aead_request*,int) ;
 struct crypto_gcm_req_priv_ctx* FUNC_2 (struct aead_request*) ;
 int VAR_2 ;
 int FUNC_3 (struct aead_request*,struct crypto_gcm_req_priv_ctx*,unsigned int,int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct aead_request *VAR_3, int VAR_4)
{
 struct crypto_gcm_req_priv_ctx *VAR_5 = FUNC_2(VAR_3);
 struct crypto_gcm_ghash_ctx *VAR_6 = &VAR_5->ghash_ctx;
 unsigned int VAR_7;

 if (!VAR_4) {
  VAR_7 = FUNC_4(VAR_6->cryptlen);
  FUNC_0(!VAR_7);
  VAR_4 = FUNC_3(VAR_3, VAR_5, VAR_7,
          VAR_2);
  if (VAR_4 == -VAR_1 || VAR_4 == -VAR_0)
   return;
 }

 FUNC_1(VAR_3, VAR_4);
}
