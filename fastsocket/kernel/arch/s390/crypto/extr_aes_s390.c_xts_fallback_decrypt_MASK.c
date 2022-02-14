
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct s390_xts_ctx {struct crypto_blkcipher* fallback; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {struct crypto_blkcipher* tfm; } ;


 struct s390_xts_ctx* FUNC_0 (struct crypto_blkcipher*) ;
 unsigned int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct blkcipher_desc *VAR_0,
  struct scatterlist *VAR_1, struct scatterlist *VAR_2,
  unsigned int VAR_3)
{
 struct s390_xts_ctx *VAR_4 = FUNC_0(VAR_0->tfm);
 struct crypto_blkcipher *VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_0->tfm;
 VAR_0->tfm = VAR_4->fallback;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_0->tfm = VAR_5;
 return VAR_6;
}
