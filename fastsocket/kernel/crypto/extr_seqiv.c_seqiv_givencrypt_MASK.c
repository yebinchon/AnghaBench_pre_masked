
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int flags; void* data; int complete; } ;
struct TYPE_4__ {int * info; int nbytes; int dst; int src; TYPE_1__ base; } ;
struct skcipher_givcrypt_request {TYPE_2__ creq; int giv; int seq; } ;
struct seqiv_ctx {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;
typedef int crypto_completion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct ablkcipher_request*,int,int ,void*) ;
 int FUNC_2 (struct ablkcipher_request*,int ,int ,int ,int *) ;
 int FUNC_3 (struct ablkcipher_request*,int ) ;
 scalar_t__ FUNC_4 (struct crypto_ablkcipher*) ;
 struct seqiv_ctx* FUNC_5 (struct crypto_ablkcipher*) ;
 int FUNC_6 (struct ablkcipher_request*) ;
 unsigned int FUNC_7 (struct crypto_ablkcipher*) ;
 int * FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (int ,int *,unsigned int) ;
 int VAR_4 ;
 int FUNC_10 (struct skcipher_givcrypt_request*,int) ;
 int FUNC_11 (struct seqiv_ctx*,int *,int ,unsigned int) ;
 int FUNC_12 (struct crypto_ablkcipher*) ;
 struct ablkcipher_request* FUNC_13 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_14 (struct skcipher_givcrypt_request*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct skcipher_givcrypt_request *VAR_5)
{
 struct crypto_ablkcipher *VAR_6 = FUNC_14(VAR_5);
 struct seqiv_ctx *VAR_7 = FUNC_5(VAR_6);
 struct ablkcipher_request *VAR_8 = FUNC_13(VAR_5);
 crypto_completion_t VAR_9;
 void *VAR_10;
 u8 *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_3(VAR_8, FUNC_12(VAR_6));

 VAR_9 = VAR_5->creq.base.complete;
 VAR_10 = VAR_5->creq.base.data;
 VAR_11 = VAR_5->creq.info;

 VAR_12 = FUNC_7(VAR_6);

 if (FUNC_15(!FUNC_0((unsigned long)VAR_11,
     FUNC_4(VAR_6) + 1))) {
  VAR_11 = FUNC_8(VAR_12, VAR_5->creq.base.flags &
           VAR_0 ? VAR_3:
          VAR_2);
  if (!VAR_11)
   return -VAR_1;

  VAR_9 = VAR_4;
  VAR_10 = VAR_5;
 }

 FUNC_1(VAR_8, VAR_5->creq.base.flags, VAR_9,
     VAR_10);
 FUNC_2(VAR_8, VAR_5->creq.src, VAR_5->creq.dst,
         VAR_5->creq.nbytes, VAR_11);

 FUNC_11(VAR_7, VAR_11, VAR_5->seq, VAR_12);
 FUNC_9(VAR_5->giv, VAR_11, VAR_12);

 VAR_13 = FUNC_6(VAR_8);
 if (FUNC_15(VAR_11 != VAR_5->creq.info))
  FUNC_10(VAR_5, VAR_13);
 return VAR_13;
}
