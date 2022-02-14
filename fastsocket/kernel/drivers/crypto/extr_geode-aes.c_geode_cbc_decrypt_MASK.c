
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct geode_aes_op {scalar_t__ keylen; unsigned int len; int dir; int mode; int dst; int src; int iv; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; int iv; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 struct geode_aes_op* FUNC_3 (int ) ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_5 (struct geode_aes_op*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct blkcipher_desc *VAR_4,
    struct scatterlist *VAR_5, struct scatterlist *VAR_6,
    unsigned int VAR_7)
{
 struct geode_aes_op *VAR_8 = FUNC_3(VAR_4->tfm);
 struct blkcipher_walk VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_6(VAR_8->keylen != VAR_1))
  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_1(&VAR_9, VAR_5, VAR_6, VAR_7);
 VAR_10 = FUNC_2(VAR_4, &VAR_9);
 VAR_8->iv = VAR_9.iv;

 while((VAR_7 = VAR_9.nbytes)) {
  VAR_8->src = VAR_9.src.virt.addr,
  VAR_8->dst = VAR_9.dst.virt.addr;
  VAR_8->mode = VAR_3;
  VAR_8->len = VAR_7 - (VAR_7 % VAR_2);
  VAR_8->dir = VAR_0;

  VAR_11 = FUNC_5(VAR_8);

  VAR_7 -= VAR_11;
  VAR_10 = FUNC_0(VAR_4, &VAR_9, VAR_7);
 }

 return VAR_10;
}
