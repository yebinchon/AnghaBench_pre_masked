
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct ablkcipher_request {int dummy; } ;
struct crypto_ccm_req_priv_ctx {int* auth_tag; int* odata; struct scatterlist* src; int flags; struct scatterlist* dst; struct ablkcipher_request abreq; } ;
struct crypto_ccm_ctx {int ctr; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; int* iv; int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ablkcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct ablkcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int*) ;
 int FUNC_2 (struct ablkcipher_request*,int ) ;
 int FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct ablkcipher_request*) ;
 unsigned int FUNC_5 (struct crypto_aead*) ;
 struct crypto_ccm_ctx* FUNC_6 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_7 (struct aead_request*) ;
 int FUNC_8 (struct aead_request*,int ,unsigned int) ;
 int FUNC_9 (int*) ;
 int VAR_2 ;
 struct crypto_ccm_req_priv_ctx* FUNC_10 (struct aead_request*) ;
 scalar_t__ FUNC_11 (int*,int*,unsigned int) ;
 int FUNC_12 (int*,int ,int) ;
 int FUNC_13 (int*,int ,unsigned int,unsigned int,int ) ;
 int FUNC_14 (struct scatterlist*,int,int ) ;
 int FUNC_15 (struct scatterlist*,int) ;
 int FUNC_16 (struct scatterlist*,int*,int) ;

__attribute__((used)) static int FUNC_17(struct aead_request *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_7(VAR_3);
 struct crypto_ccm_ctx *VAR_5 = FUNC_6(VAR_4);
 struct crypto_ccm_req_priv_ctx *VAR_6 = FUNC_10(VAR_3);
 struct ablkcipher_request *VAR_7 = &VAR_6->abreq;
 struct scatterlist *VAR_8;
 unsigned int VAR_9 = FUNC_5(VAR_4);
 unsigned int VAR_10 = VAR_3->cryptlen;
 u8 *VAR_11 = VAR_6->auth_tag;
 u8 *VAR_12 = VAR_6->odata;
 u8 *VAR_13 = VAR_3->iv;
 int VAR_14;

 if (VAR_10 < VAR_9)
  return -VAR_1;
 VAR_10 -= VAR_9;

 VAR_14 = FUNC_9(VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_6->flags = FUNC_3(VAR_3);

 FUNC_13(VAR_11, VAR_3->src, VAR_10, VAR_9, 0);

 FUNC_12(VAR_13 + 15 - VAR_13[0], 0, VAR_13[0] + 1);

 FUNC_15(VAR_6->src, 2);
 FUNC_16(VAR_6->src, VAR_11, 16);
 FUNC_14(VAR_6->src, 2, VAR_3->src);

 VAR_8 = VAR_6->src;
 if (VAR_3->src != VAR_3->dst) {
  FUNC_15(VAR_6->dst, 2);
  FUNC_16(VAR_6->dst, VAR_11, 16);
  FUNC_14(VAR_6->dst, 2, VAR_3->dst);
  VAR_8 = VAR_6->dst;
 }

 FUNC_2(VAR_7, VAR_5->ctr);
 FUNC_0(VAR_7, VAR_6->flags,
     VAR_2, VAR_3);
 FUNC_1(VAR_7, VAR_6->src, VAR_8, VAR_10 + 16, VAR_13);
 VAR_14 = FUNC_4(VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_8(VAR_3, VAR_3->dst, VAR_10);
 if (VAR_14)
  return VAR_14;


 if (FUNC_11(VAR_11, VAR_12, VAR_9))
  return -VAR_0;

 return VAR_14;
}
