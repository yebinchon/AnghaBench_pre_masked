
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct salsa20_ctx {int dummy; } ;
struct crypto_blkcipher {int dummy; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; int iv; } ;
struct blkcipher_desc {struct crypto_blkcipher* tfm; } ;


 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,int) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,int) ;
 struct salsa20_ctx* FUNC_3 (struct crypto_blkcipher*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct salsa20_ctx*,int ,int ,int) ;
 int FUNC_6 (struct salsa20_ctx*,int ) ;

__attribute__((used)) static int FUNC_7(struct blkcipher_desc *VAR_0,
     struct scatterlist *VAR_1, struct scatterlist *VAR_2,
     unsigned int VAR_3)
{
 struct blkcipher_walk VAR_4;
 struct crypto_blkcipher *VAR_5 = VAR_0->tfm;
 struct salsa20_ctx *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3);
 VAR_7 = FUNC_2(VAR_0, &VAR_4, 64);

 FUNC_6(VAR_6, VAR_4.iv);

 if (FUNC_4(VAR_4.nbytes == VAR_3))
 {
  FUNC_5(VAR_6, VAR_4.src.virt.addr,
          VAR_4.dst.virt.addr, VAR_3);
  return FUNC_0(VAR_0, &VAR_4, 0);
 }

 while (VAR_4.nbytes >= 64) {
  FUNC_5(VAR_6, VAR_4.src.virt.addr,
          VAR_4.dst.virt.addr,
          VAR_4.nbytes - (VAR_4.nbytes % 64));
  VAR_7 = FUNC_0(VAR_0, &VAR_4, VAR_4.nbytes % 64);
 }

 if (VAR_4.nbytes) {
  FUNC_5(VAR_6, VAR_4.src.virt.addr,
          VAR_4.dst.virt.addr, VAR_4.nbytes);
  VAR_7 = FUNC_0(VAR_0, &VAR_4, 0);
 }

 return VAR_7;
}
