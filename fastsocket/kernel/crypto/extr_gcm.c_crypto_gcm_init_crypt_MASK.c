
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypto_gcm_req_priv_ctx {struct scatterlist* src; struct scatterlist* dst; int auth_tag; } ;
struct crypto_gcm_ctx {int ctr; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int iv; int dst; int src; } ;
struct ablkcipher_request {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct ablkcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ) ;
 int FUNC_2 (int) ;
 struct crypto_gcm_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 struct crypto_gcm_req_priv_ctx* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct scatterlist*,int,int ) ;
 int FUNC_9 (struct scatterlist*,int) ;
 int FUNC_10 (struct scatterlist*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct ablkcipher_request *VAR_0,
      struct aead_request *VAR_1,
      unsigned int VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_4(VAR_1);
 struct crypto_gcm_ctx *VAR_4 = FUNC_3(VAR_3);
 struct crypto_gcm_req_priv_ctx *VAR_5 = FUNC_5(VAR_1);
 struct scatterlist *VAR_6;
 __be32 VAR_7 = FUNC_2(1);

 FUNC_7(VAR_5->auth_tag, 0, sizeof(VAR_5->auth_tag));
 FUNC_6(VAR_1->iv + 12, &VAR_7, 4);

 FUNC_9(VAR_5->src, 2);
 FUNC_10(VAR_5->src, VAR_5->auth_tag, sizeof(VAR_5->auth_tag));
 FUNC_8(VAR_5->src, 2, VAR_1->src);

 VAR_6 = VAR_5->src;
 if (VAR_1->src != VAR_1->dst) {
  FUNC_9(VAR_5->dst, 2);
  FUNC_10(VAR_5->dst, VAR_5->auth_tag, sizeof(VAR_5->auth_tag));
  FUNC_8(VAR_5->dst, 2, VAR_1->dst);
  VAR_6 = VAR_5->dst;
 }

 FUNC_1(VAR_0, VAR_4->ctr);
 FUNC_0(VAR_0, VAR_5->src, VAR_6,
         VAR_2 + sizeof(VAR_5->auth_tag),
         VAR_1->iv);
}
