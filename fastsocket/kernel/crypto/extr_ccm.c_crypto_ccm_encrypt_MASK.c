
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct ablkcipher_request {int dummy; } ;
struct crypto_ccm_req_priv_ctx {int* odata; struct scatterlist* src; int flags; struct scatterlist* dst; struct ablkcipher_request abreq; } ;
struct crypto_ccm_ctx {int ctr; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; int* iv; int dst; int src; } ;


 int FUNC_0 (struct ablkcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct ablkcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int*) ;
 int FUNC_2 (struct ablkcipher_request*,int ) ;
 int FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct ablkcipher_request*) ;
 int FUNC_5 (struct crypto_aead*) ;
 struct crypto_ccm_ctx* FUNC_6 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_7 (struct aead_request*) ;
 int FUNC_8 (struct aead_request*,int ,unsigned int) ;
 int FUNC_9 (int*) ;
 int VAR_0 ;
 struct crypto_ccm_req_priv_ctx* FUNC_10 (struct aead_request*) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int*,int ,unsigned int,int ,int) ;
 int FUNC_13 (struct scatterlist*,int,int ) ;
 int FUNC_14 (struct scatterlist*,int) ;
 int FUNC_15 (struct scatterlist*,int*,int) ;

__attribute__((used)) static int FUNC_16(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_7(VAR_1);
 struct crypto_ccm_ctx *VAR_3 = FUNC_6(VAR_2);
 struct crypto_ccm_req_priv_ctx *VAR_4 = FUNC_10(VAR_1);
 struct ablkcipher_request *VAR_5 = &VAR_4->abreq;
 struct scatterlist *VAR_6;
 unsigned int VAR_7 = VAR_1->cryptlen;
 u8 *VAR_8 = VAR_4->odata;
 u8 *VAR_9 = VAR_1->iv;
 int VAR_10;

 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_4->flags = FUNC_3(VAR_1);

 VAR_10 = FUNC_8(VAR_1, VAR_1->src, VAR_7);
 if (VAR_10)
  return VAR_10;




 FUNC_11(VAR_9 + 15 - VAR_9[0], 0, VAR_9[0] + 1);

 FUNC_14(VAR_4->src, 2);
 FUNC_15(VAR_4->src, VAR_8, 16);
 FUNC_13(VAR_4->src, 2, VAR_1->src);

 VAR_6 = VAR_4->src;
 if (VAR_1->src != VAR_1->dst) {
  FUNC_14(VAR_4->dst, 2);
  FUNC_15(VAR_4->dst, VAR_8, 16);
  FUNC_13(VAR_4->dst, 2, VAR_1->dst);
  VAR_6 = VAR_4->dst;
 }

 FUNC_2(VAR_5, VAR_3->ctr);
 FUNC_0(VAR_5, VAR_4->flags,
     VAR_0, VAR_1);
 FUNC_1(VAR_5, VAR_4->src, VAR_6, VAR_7 + 16, VAR_9);
 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10)
  return VAR_10;


 FUNC_12(VAR_8, VAR_1->dst, VAR_7,
     FUNC_5(VAR_2), 1);
 return VAR_10;
}
