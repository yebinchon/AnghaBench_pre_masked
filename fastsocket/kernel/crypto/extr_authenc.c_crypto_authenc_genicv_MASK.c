
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int offset; int length; } ;
struct page {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {unsigned int cryptlen; int update_complete; int complete; struct scatterlist* sg; struct scatterlist* asg; struct scatterlist* cipher; } ;
struct aead_request {unsigned int cryptlen; scalar_t__ assoclen; struct scatterlist* assoc; struct scatterlist* dst; } ;
typedef int * (* authenc_ahash_t ) (struct aead_request*,unsigned int) ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct authenc_request_ctx* FUNC_3 (struct aead_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct crypto_aead*) ;
 unsigned int FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 int * FUNC_7 (struct aead_request*,unsigned int) ;
 int * FUNC_8 (struct aead_request*,unsigned int) ;
 int * FUNC_9 (struct page*) ;
 int FUNC_10 (struct scatterlist*,struct scatterlist*,int,int) ;
 int FUNC_11 (int *,struct scatterlist*,unsigned int,int ,int) ;
 int FUNC_12 (struct scatterlist*,int) ;
 scalar_t__ FUNC_13 (struct scatterlist*) ;
 struct page* FUNC_14 (struct scatterlist*) ;
 int FUNC_15 (struct scatterlist*,int *,unsigned int) ;
 int FUNC_16 (struct scatterlist*,struct page*,int ,int) ;

__attribute__((used)) static int FUNC_17(struct aead_request *VAR_2, u8 *VAR_3,
     unsigned int VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_6(VAR_2);
 struct authenc_request_ctx *VAR_6 = FUNC_3(VAR_2);
 struct scatterlist *VAR_7 = VAR_2->dst;
 struct scatterlist *VAR_8 = VAR_2->assoc;
 struct scatterlist *VAR_9 = VAR_6->cipher;
 struct scatterlist *VAR_10 = VAR_6->asg;
 unsigned int VAR_11 = FUNC_5(VAR_5);
 unsigned int VAR_12 = VAR_2->cryptlen;
 authenc_ahash_t VAR_13 = FUNC_8;
 struct page *VAR_14;
 u8 *VAR_15;
 u8 *VAR_16;

 VAR_14 = FUNC_14(VAR_7);
 VAR_15 = FUNC_2(VAR_14) ? ((void*)0) : FUNC_9(VAR_14) + VAR_7->offset;

 if (VAR_11) {
  FUNC_12(VAR_9, 2);
  FUNC_15(VAR_9, VAR_3, VAR_11);
  FUNC_10(VAR_9, VAR_7, VAR_15 == VAR_3 + VAR_11, 2);
  VAR_7 = VAR_9;
  VAR_12 += VAR_11;
 }

 if (FUNC_13(VAR_8)) {
  VAR_13 = FUNC_7;
  FUNC_12(VAR_10, 2);
  FUNC_16(VAR_10, FUNC_14(VAR_8), VAR_8->length, VAR_8->offset);
  FUNC_10(VAR_10, VAR_7, 0, 2);
  VAR_7 = VAR_10;
  VAR_12 += VAR_2->assoclen;
 }

 VAR_6->cryptlen = VAR_12;
 VAR_6->sg = VAR_7;

 VAR_6->complete = VAR_0;
 VAR_6->update_complete = VAR_1;

 VAR_16 = VAR_13(VAR_2, VAR_4);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 FUNC_11(VAR_16, VAR_7, VAR_12,
     FUNC_4(VAR_5), 1);
 return 0;
}
