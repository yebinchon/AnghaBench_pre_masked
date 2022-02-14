
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_gcm_ghash_ctx {int cryptlen; } ;
struct ablkcipher_request {int dummy; } ;
struct TYPE_2__ {struct ablkcipher_request abreq; } ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; TYPE_1__ u; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ablkcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (struct ablkcipher_request*,struct aead_request*,int ) ;
 struct crypto_gcm_req_priv_ctx* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct aead_request*,struct crypto_gcm_req_priv_ctx*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct aead_request *VAR_3, int VAR_4)
{
 struct crypto_gcm_req_priv_ctx *VAR_5 = FUNC_5(VAR_3);
 struct ablkcipher_request *VAR_6 = &VAR_5->u.abreq;
 struct crypto_gcm_ghash_ctx *VAR_7 = &VAR_5->ghash_ctx;

 if (!VAR_4) {
  FUNC_0(VAR_6, FUNC_2(VAR_3),
      VAR_2, VAR_3);
  FUNC_4(VAR_6, VAR_3, VAR_7->cryptlen);
  VAR_4 = FUNC_3(VAR_6);
  if (VAR_4 == -VAR_1 || VAR_4 == -VAR_0)
   return;
  else if (!VAR_4)
   VAR_4 = FUNC_6(VAR_3, VAR_5);
 }

 FUNC_1(VAR_3, VAR_4);
}
