
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int* iv; int nonce; } ;
struct TYPE_6__ {TYPE_2__ ccm; } ;
struct nx_crypto_ctx {TYPE_3__ priv; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {int* info; struct crypto_blkcipher* tfm; } ;
struct TYPE_4__ {scalar_t__ tfm; } ;
struct aead_request {TYPE_1__ base; int iv; } ;


 int FUNC_0 (struct aead_request*,struct blkcipher_desc*) ;
 struct nx_crypto_ctx* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_0)
{
 struct nx_crypto_ctx *VAR_1 = FUNC_1(VAR_0->base.tfm);
 struct blkcipher_desc VAR_2;
 u8 *VAR_3 = VAR_1->priv.ccm.iv;

 VAR_3[0] = 3;
 FUNC_2(VAR_3 + 1, VAR_1->priv.ccm.nonce, 3);
 FUNC_2(VAR_3 + 4, VAR_0->iv, 8);

 VAR_2.info = VAR_3;
 VAR_2.tfm = (struct crypto_blkcipher *)VAR_0->base.tfm;

 return FUNC_0(VAR_0, &VAR_2);
}
