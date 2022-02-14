
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int offset; int length; } ;
struct page {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {unsigned int cryptlen; struct scatterlist* sg; struct scatterlist* asg; struct scatterlist* cipher; } ;
struct aead_request {scalar_t__ assoclen; struct scatterlist* assoc; struct scatterlist* src; } ;
typedef int authenc_ahash_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 struct authenc_request_ctx* FUNC_1 (struct aead_request*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct aead_request*,int ) ;
 int * FUNC_5 (struct page*) ;
 int FUNC_6 (struct scatterlist*,struct scatterlist*,int,int) ;
 int FUNC_7 (struct scatterlist*,int) ;
 scalar_t__ FUNC_8 (struct scatterlist*) ;
 struct page* FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (struct scatterlist*,int *,unsigned int) ;
 int FUNC_11 (struct scatterlist*,struct page*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct aead_request *VAR_2, u8 *VAR_3,
      unsigned int VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_3(VAR_2);
 struct authenc_request_ctx *VAR_6 = FUNC_1(VAR_2);
 struct scatterlist *VAR_7 = VAR_2->src;
 struct scatterlist *VAR_8 = VAR_2->assoc;
 struct scatterlist *VAR_9 = VAR_6->cipher;
 struct scatterlist *VAR_10 = VAR_6->asg;
 unsigned int VAR_11 = FUNC_2(VAR_5);
 authenc_ahash_t VAR_12 = VAR_1;
 struct page *VAR_13;
 u8 *VAR_14;

 VAR_13 = FUNC_9(VAR_7);
 VAR_14 = FUNC_0(VAR_13) ? ((void*)0) : FUNC_5(VAR_13) + VAR_7->offset;

 if (VAR_11) {
  FUNC_7(VAR_9, 2);
  FUNC_10(VAR_9, VAR_3, VAR_11);
  FUNC_6(VAR_9, VAR_7, VAR_14 == VAR_3 + VAR_11, 2);
  VAR_7 = VAR_9;
  VAR_4 += VAR_11;
 }

 if (FUNC_8(VAR_8)) {
  VAR_12 = VAR_0;
  FUNC_7(VAR_10, 2);
  FUNC_11(VAR_10, FUNC_9(VAR_8), VAR_8->length, VAR_8->offset);
  FUNC_6(VAR_10, VAR_7, 0, 2);
  VAR_7 = VAR_10;
  VAR_4 += VAR_2->assoclen;
 }

 VAR_6->cryptlen = VAR_4;
 VAR_6->sg = VAR_7;

 return FUNC_4(VAR_2, VAR_12);
}
