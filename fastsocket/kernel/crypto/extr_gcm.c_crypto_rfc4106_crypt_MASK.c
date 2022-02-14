
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_rfc4106_ctx {int nonce; struct crypto_aead* child; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct aead_request {int assoclen; int assoc; int cryptlen; int dst; int src; TYPE_1__ base; int iv; } ;


 int * FUNC_0 (int *,scalar_t__) ;
 struct aead_request* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int ,int ) ;
 int FUNC_3 (struct aead_request*,int ,int ,int ) ;
 int FUNC_4 (struct aead_request*,int ,int ,int ,int *) ;
 int FUNC_5 (struct aead_request*,struct crypto_aead*) ;
 scalar_t__ FUNC_6 (struct crypto_aead*) ;
 struct crypto_rfc4106_ctx* FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_9 (struct aead_request*) ;
 int FUNC_10 (int *,int ,int) ;

__attribute__((used)) static struct aead_request *FUNC_11(struct aead_request *VAR_0)
{
 struct aead_request *VAR_1 = FUNC_1(VAR_0);
 struct crypto_aead *VAR_2 = FUNC_9(VAR_0);
 struct crypto_rfc4106_ctx *VAR_3 = FUNC_7(VAR_2);
 struct crypto_aead *VAR_4 = VAR_3->child;
 u8 *VAR_5 = FUNC_0((u8 *)(VAR_1 + 1) + FUNC_8(VAR_4),
      FUNC_6(VAR_4) + 1);

 FUNC_10(VAR_5, VAR_3->nonce, 4);
 FUNC_10(VAR_5 + 4, VAR_0->iv, 8);

 FUNC_5(VAR_1, VAR_4);
 FUNC_3(VAR_1, VAR_0->base.flags, VAR_0->base.complete,
      VAR_0->base.data);
 FUNC_4(VAR_1, VAR_0->src, VAR_0->dst, VAR_0->cryptlen, VAR_5);
 FUNC_2(VAR_1, VAR_0->assoc, VAR_0->assoclen);

 return VAR_1;
}
