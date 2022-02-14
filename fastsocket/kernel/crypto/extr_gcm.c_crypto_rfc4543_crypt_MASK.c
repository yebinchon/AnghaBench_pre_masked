
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int offset; int length; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; TYPE_1__ base; struct scatterlist* assoc; int * iv; struct scatterlist* dst; } ;
struct crypto_rfc4543_req_ctx {int auth_tag; struct scatterlist* assoc; struct scatterlist* payload; struct scatterlist* cipher; struct aead_request subreq; } ;
struct crypto_rfc4543_ctx {int child; int * nonce; } ;
struct crypto_aead {int dummy; } ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct aead_request*,struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct aead_request*,int ,int ,int ) ;
 int FUNC_4 (struct aead_request*,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;
 int FUNC_5 (struct aead_request*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct crypto_aead*) ;
 struct crypto_rfc4543_ctx* FUNC_8 (struct crypto_aead*) ;
 int FUNC_9 (int ) ;
 struct crypto_aead* FUNC_10 (struct aead_request*) ;
 struct crypto_rfc4543_req_ctx* FUNC_11 (struct aead_request*) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int ,int ,unsigned int) ;
 int * FUNC_14 (struct page*) ;
 int FUNC_15 (struct scatterlist*,struct scatterlist*,int,int) ;
 int FUNC_16 (int ,struct scatterlist*,unsigned int,unsigned int,int ) ;
 int FUNC_17 (struct scatterlist*,int ,unsigned int) ;
 int FUNC_18 (struct scatterlist*,int) ;
 struct page* FUNC_19 (struct scatterlist*) ;
 int FUNC_20 (struct scatterlist*,int *,int) ;
 int FUNC_21 (struct scatterlist*,struct page*,int ,int) ;

__attribute__((used)) static struct aead_request *FUNC_22(struct aead_request *VAR_0,
       int VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_10(VAR_0);
 struct crypto_rfc4543_ctx *VAR_3 = FUNC_8(VAR_2);
 struct crypto_rfc4543_req_ctx *VAR_4 = FUNC_11(VAR_0);
 struct aead_request *VAR_5 = &VAR_4->subreq;
 struct scatterlist *VAR_6 = VAR_0->dst;
 struct scatterlist *VAR_7 = VAR_4->cipher;
 struct scatterlist *VAR_8 = VAR_4->payload;
 struct scatterlist *VAR_9 = VAR_4->assoc;
 unsigned int VAR_10 = FUNC_7(VAR_2);
 unsigned int VAR_11 = VAR_0->assoclen;
 struct page *VAR_12;
 u8 *VAR_13;
 u8 *VAR_14 = FUNC_0((u8 *)(VAR_4 + 1) + FUNC_9(VAR_3->child),
      FUNC_6(VAR_3->child) + 1);

 FUNC_12(VAR_14, VAR_3->nonce, 4);
 FUNC_12(VAR_14 + 4, VAR_0->iv, 8);


 if (VAR_1)
  FUNC_13(VAR_4->auth_tag, 0, VAR_10);
 else
  FUNC_16(VAR_4->auth_tag, VAR_6,
      VAR_0->cryptlen - VAR_10,
      VAR_10, 0);

 FUNC_17(VAR_7, VAR_4->auth_tag, VAR_10);


 VAR_12 = FUNC_19(VAR_6);
 VAR_13 = FUNC_1(VAR_12) ? ((void*)0) : FUNC_14(VAR_12) + VAR_6->offset;

 FUNC_18(VAR_8, 2);
 FUNC_20(VAR_8, VAR_0->iv, 8);
 FUNC_15(VAR_8, VAR_6, VAR_13 == VAR_0->iv + 8, 2);
 VAR_11 += 8 + VAR_0->cryptlen - (VAR_1 ? 0 : VAR_10);

 FUNC_18(VAR_9, 2);
 FUNC_21(VAR_9, FUNC_19(VAR_0->assoc), VAR_0->assoc->length,
      VAR_0->assoc->offset);
 FUNC_15(VAR_9, VAR_8, 0, 2);

 FUNC_5(VAR_5, VAR_3->child);
 FUNC_3(VAR_5, VAR_0->base.flags, VAR_0->base.complete,
      VAR_0->base.data);
 FUNC_4(VAR_5, VAR_7, VAR_7, VAR_1 ? 0 : VAR_10, VAR_14);
 FUNC_2(VAR_5, VAR_9, VAR_11);

 return VAR_5;
}
