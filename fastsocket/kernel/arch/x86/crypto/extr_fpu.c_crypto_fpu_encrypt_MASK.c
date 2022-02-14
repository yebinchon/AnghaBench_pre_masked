
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct crypto_fpu_ctx {struct crypto_blkcipher* child; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {int flags; struct crypto_blkcipher* tfm; int info; } ;
struct TYPE_2__ {int (* encrypt ) (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct crypto_blkcipher*) ;
 struct crypto_fpu_ctx* FUNC_1 (struct crypto_blkcipher*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_1,
         struct scatterlist *VAR_2, struct scatterlist *VAR_3,
         unsigned int VAR_4)
{
 int VAR_5;
 struct crypto_fpu_ctx *VAR_6 = FUNC_1(VAR_1->tfm);
 struct crypto_blkcipher *VAR_7 = VAR_6->child;
 struct blkcipher_desc VAR_8 = {
  .tfm = VAR_7,
  .info = VAR_1->info,
  .flags = VAR_1->flags & ~VAR_0,
 };

 FUNC_2();
 VAR_5 = FUNC_0(VAR_8.tfm)->encrypt(&VAR_8, VAR_2, VAR_3, VAR_4);
 FUNC_3();
 return VAR_5;
}
