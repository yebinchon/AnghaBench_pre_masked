
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_rfc4543_req_ctx {int auth_tag; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int cryptlen; int dst; } ;


 int FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct aead_request*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 struct aead_request* FUNC_3 (struct aead_request*,int) ;
 struct crypto_rfc4543_req_ctx* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct aead_request *VAR_0)
{
 struct crypto_aead *VAR_1 = FUNC_2(VAR_0);
 struct crypto_rfc4543_req_ctx *VAR_2 = FUNC_4(VAR_0);
 struct aead_request *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0, 1);
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_5(VAR_2->auth_tag, VAR_0->dst, VAR_0->cryptlen,
     FUNC_0(VAR_1), 1);

 return 0;
}
