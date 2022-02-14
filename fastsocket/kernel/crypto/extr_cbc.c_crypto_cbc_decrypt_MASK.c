
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct crypto_cipher {int dummy; } ;
struct crypto_cbc_ctx {struct crypto_cipher* child; } ;
struct crypto_blkcipher {int dummy; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {struct crypto_blkcipher* tfm; } ;


 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 struct crypto_cbc_ctx* FUNC_3 (struct crypto_blkcipher*) ;
 unsigned int FUNC_4 (struct blkcipher_desc*,struct blkcipher_walk*,struct crypto_cipher*) ;
 unsigned int FUNC_5 (struct blkcipher_desc*,struct blkcipher_walk*,struct crypto_cipher*) ;

__attribute__((used)) static int FUNC_6(struct blkcipher_desc *VAR_0,
         struct scatterlist *VAR_1, struct scatterlist *VAR_2,
         unsigned int VAR_3)
{
 struct blkcipher_walk VAR_4;
 struct crypto_blkcipher *VAR_5 = VAR_0->tfm;
 struct crypto_cbc_ctx *VAR_6 = FUNC_3(VAR_5);
 struct crypto_cipher *VAR_7 = VAR_6->child;
 int VAR_8;

 FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3);
 VAR_8 = FUNC_2(VAR_0, &VAR_4);

 while ((VAR_3 = VAR_4.nbytes)) {
  if (VAR_4.src.virt.addr == VAR_4.dst.virt.addr)
   VAR_3 = FUNC_4(VAR_0, &VAR_4, VAR_7);
  else
   VAR_3 = FUNC_5(VAR_0, &VAR_4, VAR_7);
  VAR_8 = FUNC_0(VAR_0, &VAR_4, VAR_3);
 }

 return VAR_8;
}
