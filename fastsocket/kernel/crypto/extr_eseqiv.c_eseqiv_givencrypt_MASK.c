
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {int flags; void* data; int complete; } ;
struct TYPE_4__ {int * info; scalar_t__ nbytes; TYPE_1__ base; struct scatterlist* dst; struct scatterlist* src; } ;
struct skcipher_givcrypt_request {int * giv; int seq; TYPE_2__ creq; } ;
struct scatterlist {int offset; } ;
struct page {int dummy; } ;
struct eseqiv_request_ctx {struct scatterlist* src; struct scatterlist* dst; scalar_t__ tail; } ;
struct eseqiv_ctx {int * salt; scalar_t__ reqoff; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;
typedef int crypto_completion_t ;
typedef int __be64 ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct ablkcipher_request*,int ,int ,void*) ;
 int FUNC_3 (struct ablkcipher_request*,struct scatterlist*,struct scatterlist*,scalar_t__,int *) ;
 int FUNC_4 (struct ablkcipher_request*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct crypto_ablkcipher*) ;
 struct eseqiv_ctx* FUNC_7 (struct crypto_ablkcipher*) ;
 int FUNC_8 (struct ablkcipher_request*) ;
 unsigned int FUNC_9 (struct crypto_ablkcipher*) ;
 int VAR_0 ;
 int FUNC_10 (struct skcipher_givcrypt_request*) ;
 int FUNC_11 (int *,int *,unsigned int) ;
 int FUNC_12 (int *,int ,unsigned int) ;
 int * FUNC_13 (struct page*) ;
 int FUNC_14 (struct scatterlist*,struct scatterlist*,int,int) ;
 int FUNC_15 (struct scatterlist*,int) ;
 struct page* FUNC_16 (struct scatterlist*) ;
 int FUNC_17 (struct scatterlist*,int *,unsigned int) ;
 int FUNC_18 (struct crypto_ablkcipher*) ;
 struct eseqiv_request_ctx* FUNC_19 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_20 (struct skcipher_givcrypt_request*) ;

__attribute__((used)) static int FUNC_21(struct skcipher_givcrypt_request *VAR_1)
{
 struct crypto_ablkcipher *VAR_2 = FUNC_20(VAR_1);
 struct eseqiv_ctx *VAR_3 = FUNC_7(VAR_2);
 struct eseqiv_request_ctx *VAR_4 = FUNC_19(VAR_1);
 struct ablkcipher_request *VAR_5;
 crypto_completion_t VAR_6;
 void *VAR_7;
 struct scatterlist *VAR_8, *VAR_9;
 struct scatterlist *VAR_10;
 struct page *VAR_11;
 struct page *VAR_12;
 u8 *VAR_13;
 u8 *VAR_14;
 u8 *VAR_15;
 __be64 VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_5 = (void *)(VAR_4->tail + VAR_3->reqoff);
 FUNC_4(VAR_5, FUNC_18(VAR_2));

 VAR_13 = VAR_1->giv;
 VAR_6 = VAR_1->creq.base.complete;
 VAR_7 = VAR_1->creq.base.data;

 VAR_8 = VAR_1->creq.src;
 VAR_9 = VAR_1->creq.dst;
 VAR_11 = FUNC_16(VAR_8);
 VAR_12 = FUNC_16(VAR_9);
 VAR_14 = FUNC_1(VAR_11) ? ((void*)0) : FUNC_13(VAR_11) + VAR_8->offset;
 VAR_15 = FUNC_1(VAR_12) ? ((void*)0) : FUNC_13(VAR_12) + VAR_9->offset;

 VAR_17 = FUNC_9(VAR_2);

 if (VAR_14 != VAR_13 + VAR_17 && VAR_15 != VAR_13 + VAR_17) {
  VAR_13 = FUNC_0((u8 *)VAR_4->tail,
    FUNC_6(VAR_2) + 1);
  VAR_6 = VAR_0;
  VAR_7 = VAR_1;
 }

 FUNC_2(VAR_5, VAR_1->creq.base.flags, VAR_6,
     VAR_7);

 FUNC_15(VAR_4->src, 2);
 FUNC_17(VAR_4->src, VAR_13, VAR_17);
 FUNC_14(VAR_4->src, VAR_8, VAR_14 == VAR_13 + VAR_17, 2);

 VAR_10 = VAR_4->src;
 if (VAR_8 != VAR_9) {
  FUNC_15(VAR_4->dst, 2);
  FUNC_17(VAR_4->dst, VAR_13, VAR_17);
  FUNC_14(VAR_4->dst, VAR_9, VAR_15 == VAR_13 + VAR_17, 2);

  VAR_10 = VAR_4->dst;
 }

 FUNC_3(VAR_5, VAR_4->src, VAR_10,
         VAR_1->creq.nbytes + VAR_17,
         VAR_1->creq.info);

 FUNC_11(VAR_1->creq.info, VAR_3->salt, VAR_17);

 VAR_18 = VAR_17;
 if (VAR_17 > sizeof(u64)) {
  FUNC_12(VAR_1->giv, 0, VAR_17 - sizeof(u64));
  VAR_18 = sizeof(u64);
 }
 VAR_16 = FUNC_5(VAR_1->seq);
 FUNC_11(VAR_1->giv + VAR_17 - VAR_18, &VAR_16, VAR_18);

 VAR_19 = FUNC_8(VAR_5);
 if (VAR_19)
  goto out;

 if (VAR_13 != VAR_1->giv)
  FUNC_10(VAR_1);

out:
 return VAR_19;
}
