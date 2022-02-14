
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_givcrypt_request {int dummy; } ;
struct crypto_authenc_ctx {int enc; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int iv; int cryptlen; int dst; int src; } ;
struct aead_givcrypt_request {int seq; int * giv; struct aead_request areq; } ;


 int VAR_0 ;
 struct crypto_aead* FUNC_0 (struct aead_givcrypt_request*) ;
 struct skcipher_givcrypt_request* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*) ;
 struct crypto_authenc_ctx* FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct aead_request*,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct skcipher_givcrypt_request*) ;
 int FUNC_6 (struct skcipher_givcrypt_request*,int ,int ,struct aead_request*) ;
 int FUNC_7 (struct skcipher_givcrypt_request*,int ,int ,int ,int ) ;
 int FUNC_8 (struct skcipher_givcrypt_request*,int *,int ) ;
 int FUNC_9 (struct skcipher_givcrypt_request*,int ) ;

__attribute__((used)) static int FUNC_10(struct aead_givcrypt_request *VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_0(VAR_2);
 struct crypto_authenc_ctx *VAR_4 = FUNC_3(VAR_3);
 struct aead_request *VAR_5 = &VAR_2->areq;
 struct skcipher_givcrypt_request *VAR_6 = FUNC_1(VAR_5);
 u8 *VAR_7 = VAR_2->giv;
 int VAR_8;

 FUNC_9(VAR_6, VAR_4->enc);
 FUNC_6(VAR_6, FUNC_2(VAR_5),
           VAR_1, VAR_5);
 FUNC_7(VAR_6, VAR_5->src, VAR_5->dst, VAR_5->cryptlen,
        VAR_5->iv);
 FUNC_8(VAR_6, VAR_7, VAR_2->seq);

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_4(VAR_5, VAR_7, VAR_0);
}
