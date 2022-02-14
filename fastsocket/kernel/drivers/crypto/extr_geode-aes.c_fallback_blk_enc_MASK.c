
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_2__ {struct crypto_blkcipher* blk; } ;
struct geode_aes_op {TYPE_1__ fallback; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {struct crypto_blkcipher* tfm; } ;


 struct geode_aes_op* FUNC_0 (struct crypto_blkcipher*) ;
 unsigned int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct blkcipher_desc *VAR_0,
  struct scatterlist *VAR_1, struct scatterlist *VAR_2,
  unsigned int VAR_3)
{
 unsigned int VAR_4;
 struct crypto_blkcipher *VAR_5;
 struct geode_aes_op *VAR_6 = FUNC_0(VAR_0->tfm);

 VAR_5 = VAR_0->tfm;
 VAR_0->tfm = VAR_6->fallback.blk;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_0->tfm = VAR_5;
 return VAR_4;
}
