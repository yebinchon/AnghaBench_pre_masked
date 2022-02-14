
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct seqiv_ctx {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int flags; void* data; int complete; } ;
struct aead_request {int * iv; int assoclen; int assoc; int cryptlen; int dst; int src; TYPE_1__ base; } ;
struct aead_givcrypt_request {int giv; int seq; struct aead_request areq; } ;
typedef int crypto_completion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct aead_request* FUNC_2 (struct aead_givcrypt_request*) ;
 struct crypto_aead* FUNC_3 (struct aead_givcrypt_request*) ;
 int FUNC_4 (struct aead_request*,int ,int ) ;
 int FUNC_5 (struct aead_request*,int,int ,void*) ;
 int FUNC_6 (struct aead_request*,int ,int ,int ,int *) ;
 int FUNC_7 (struct aead_request*,int ) ;
 scalar_t__ FUNC_8 (struct crypto_aead*) ;
 struct seqiv_ctx* FUNC_9 (struct crypto_aead*) ;
 int FUNC_10 (struct aead_request*) ;
 unsigned int FUNC_11 (struct crypto_aead*) ;
 int * FUNC_12 (unsigned int,int ) ;
 int FUNC_13 (int ,int *,unsigned int) ;
 int VAR_4 ;
 int FUNC_14 (struct aead_givcrypt_request*,int) ;
 int FUNC_15 (struct seqiv_ctx*,int *,int ,unsigned int) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct aead_givcrypt_request *VAR_5)
{
 struct crypto_aead *VAR_6 = FUNC_3(VAR_5);
 struct seqiv_ctx *VAR_7 = FUNC_9(VAR_6);
 struct aead_request *VAR_8 = &VAR_5->areq;
 struct aead_request *VAR_9 = FUNC_2(VAR_5);
 crypto_completion_t VAR_10;
 void *VAR_11;
 u8 *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 FUNC_7(VAR_9, FUNC_1(VAR_6));

 VAR_10 = VAR_8->base.complete;
 VAR_11 = VAR_8->base.data;
 VAR_12 = VAR_8->iv;

 VAR_13 = FUNC_11(VAR_6);

 if (FUNC_16(!FUNC_0((unsigned long)VAR_12,
     FUNC_8(VAR_6) + 1))) {
  VAR_12 = FUNC_12(VAR_13, VAR_8->base.flags &
           VAR_0 ? VAR_3:
          VAR_2);
  if (!VAR_12)
   return -VAR_1;

  VAR_10 = VAR_4;
  VAR_11 = VAR_5;
 }

 FUNC_5(VAR_9, VAR_8->base.flags, VAR_10, VAR_11);
 FUNC_6(VAR_9, VAR_8->src, VAR_8->dst, VAR_8->cryptlen,
          VAR_12);
 FUNC_4(VAR_9, VAR_8->assoc, VAR_8->assoclen);

 FUNC_15(VAR_7, VAR_12, VAR_5->seq, VAR_13);
 FUNC_13(VAR_5->giv, VAR_12, VAR_13);

 VAR_14 = FUNC_10(VAR_9);
 if (FUNC_16(VAR_12 != VAR_8->iv))
  FUNC_14(VAR_5, VAR_14);
 return VAR_14;
}
