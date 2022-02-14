
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct ablkcipher_request {int nbytes; int dst; int src; TYPE_1__ base; int info; } ;
struct crypto_rfc3686_req_ctx {int * iv; struct ablkcipher_request subreq; } ;
struct crypto_rfc3686_ctx {int nonce; struct crypto_ablkcipher* child; } ;
struct crypto_ablkcipher {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct ablkcipher_request*,int ,int ,int ) ;
 int FUNC_3 (struct ablkcipher_request*,int ,int ,int ,int *) ;
 int FUNC_4 (struct ablkcipher_request*,struct crypto_ablkcipher*) ;
 int FUNC_5 (int) ;
 unsigned long FUNC_6 (struct crypto_ablkcipher*) ;
 struct crypto_rfc3686_ctx* FUNC_7 (struct crypto_ablkcipher*) ;
 int FUNC_8 (struct ablkcipher_request*) ;
 struct crypto_ablkcipher* FUNC_9 (struct ablkcipher_request*) ;
 int FUNC_10 (int *,int ,int) ;

__attribute__((used)) static int FUNC_11(struct ablkcipher_request *VAR_2)
{
 struct crypto_ablkcipher *VAR_3 = FUNC_9(VAR_2);
 struct crypto_rfc3686_ctx *VAR_4 = FUNC_7(VAR_3);
 struct crypto_ablkcipher *VAR_5 = VAR_4->child;
 unsigned long VAR_6 = FUNC_6(VAR_3);
 struct crypto_rfc3686_req_ctx *VAR_7 =
  (void *)FUNC_0((u8 *)FUNC_1(VAR_2), VAR_6 + 1);
 struct ablkcipher_request *VAR_8 = &VAR_7->subreq;
 u8 *VAR_9 = VAR_7->iv;


 FUNC_10(VAR_9, VAR_4->nonce, VAR_1);
 FUNC_10(VAR_9 + VAR_1, VAR_2->info, VAR_0);


 *(__be32 *)(VAR_9 + VAR_1 + VAR_0) =
  FUNC_5(1);

 FUNC_4(VAR_8, VAR_5);
 FUNC_2(VAR_8, VAR_2->base.flags,
     VAR_2->base.complete, VAR_2->base.data);
 FUNC_3(VAR_8, VAR_2->src, VAR_2->dst, VAR_2->nbytes,
         VAR_9);

 return FUNC_8(VAR_8);
}
