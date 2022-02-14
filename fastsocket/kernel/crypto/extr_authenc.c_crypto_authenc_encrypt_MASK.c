
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct crypto_authenc_ctx {struct crypto_ablkcipher* enc; } ;
struct crypto_aead {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct aead_request {unsigned int cryptlen; int iv; int src; struct scatterlist* dst; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ablkcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct ablkcipher_request*,int ,struct scatterlist*,unsigned int,int ) ;
 int FUNC_2 (struct ablkcipher_request*,struct crypto_ablkcipher*) ;
 struct ablkcipher_request* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (struct crypto_ablkcipher*) ;
 struct crypto_authenc_ctx* FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_9 (struct aead_request*) ;
 int VAR_1 ;
 int FUNC_10 (struct aead_request*,int *,int ) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct aead_request *VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_9(VAR_2);
 struct crypto_authenc_ctx *VAR_4 = FUNC_7(VAR_3);
 struct ablkcipher_request *VAR_5 = FUNC_3(VAR_2);
 struct crypto_ablkcipher *VAR_6 = VAR_4->enc;
 struct scatterlist *VAR_7 = VAR_2->dst;
 unsigned int VAR_8 = VAR_2->cryptlen;
 u8 *VAR_9 = (u8 *)(VAR_5 + 1) + FUNC_6(VAR_6);
 int VAR_10;

 FUNC_2(VAR_5, VAR_6);
 FUNC_0(VAR_5, FUNC_4(VAR_2),
     VAR_1, VAR_2);
 FUNC_1(VAR_5, VAR_2->src, VAR_7, VAR_8, VAR_2->iv);

 FUNC_11(VAR_9, VAR_2->iv, FUNC_8(VAR_3));

 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10)
  return VAR_10;

 return FUNC_10(VAR_2, VAR_9, VAR_0);
}
