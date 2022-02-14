
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct crypto_ecb_ctx {struct crypto_cipher* child; } ;
struct crypto_cipher {int dummy; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {struct crypto_blkcipher* tfm; } ;
struct TYPE_2__ {int cia_decrypt; } ;


 int FUNC_0 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 struct crypto_ecb_ctx* FUNC_1 (struct crypto_blkcipher*) ;
 TYPE_1__* FUNC_2 (struct crypto_cipher*) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*,struct crypto_cipher*,int ) ;

__attribute__((used)) static int FUNC_4(struct blkcipher_desc *VAR_0,
         struct scatterlist *VAR_1, struct scatterlist *VAR_2,
         unsigned int VAR_3)
{
 struct blkcipher_walk VAR_4;
 struct crypto_blkcipher *VAR_5 = VAR_0->tfm;
 struct crypto_ecb_ctx *VAR_6 = FUNC_1(VAR_5);
 struct crypto_cipher *VAR_7 = VAR_6->child;

 FUNC_0(&VAR_4, VAR_1, VAR_2, VAR_3);
 return FUNC_3(VAR_0, &VAR_4, VAR_7,
    FUNC_2(VAR_7)->cia_decrypt);
}
