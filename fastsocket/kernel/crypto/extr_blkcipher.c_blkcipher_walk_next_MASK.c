
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct crypto_blkcipher {int dummy; } ;
struct TYPE_11__ {int offset; void* page; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_12__ {TYPE_5__ phys; TYPE_2__ virt; } ;
struct TYPE_9__ {int offset; void* page; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_10__ {TYPE_3__ phys; TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int total; int flags; unsigned int nbytes; TYPE_6__ dst; TYPE_4__ src; int out; int in; int blocksize; void* page; } ;
struct blkcipher_desc {int flags; struct crypto_blkcipher* tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct blkcipher_walk*) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int,unsigned int) ;
 int FUNC_4 (struct blkcipher_desc*,struct blkcipher_walk*,int ) ;
 unsigned int FUNC_5 (struct crypto_blkcipher*) ;
 unsigned int FUNC_6 (struct crypto_blkcipher*) ;
 unsigned int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int *,unsigned int) ;
 unsigned int FUNC_9 (int *,unsigned int) ;
 scalar_t__ FUNC_10 (int) ;
 void* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct blkcipher_desc *VAR_8,
          struct blkcipher_walk *VAR_9)
{
 struct crypto_blkcipher *VAR_10 = VAR_8->tfm;
 unsigned int VAR_11 = FUNC_5(VAR_10);
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_13 = VAR_9->total;
 if (FUNC_10(VAR_13 < FUNC_6(VAR_10))) {
  VAR_8->flags |= VAR_4;
  return FUNC_4(VAR_8, VAR_9, -VAR_5);
 }

 VAR_9->flags &= ~(VAR_3 | VAR_0 |
    VAR_1);
 if (!FUNC_8(&VAR_9->in, VAR_11) ||
     !FUNC_8(&VAR_9->out, VAR_11)) {
  VAR_9->flags |= VAR_0;
  if (!VAR_9->page) {
   VAR_9->page = (void *)FUNC_0(VAR_6);
   if (!VAR_9->page)
    VAR_13 = 0;
  }
 }

 VAR_12 = FUNC_7(VAR_9->blocksize, VAR_13);
 VAR_13 = FUNC_9(&VAR_9->in, VAR_13);
 VAR_13 = FUNC_9(&VAR_9->out, VAR_13);

 if (FUNC_10(VAR_13 < VAR_12)) {
  VAR_14 = FUNC_3(VAR_8, VAR_9, VAR_12, VAR_11);
  goto set_phys_lowmem;
 }

 VAR_9->nbytes = VAR_13;
 if (VAR_9->flags & VAR_0) {
  VAR_14 = FUNC_1(VAR_9);
  goto set_phys_lowmem;
 }

 return FUNC_2(VAR_8, VAR_9);

set_phys_lowmem:
 if (VAR_9->flags & VAR_2) {
  VAR_9->src.phys.page = FUNC_11(VAR_9->src.virt.addr);
  VAR_9->dst.phys.page = FUNC_11(VAR_9->dst.virt.addr);
  VAR_9->src.phys.offset &= VAR_7 - 1;
  VAR_9->dst.phys.offset &= VAR_7 - 1;
 }
 return VAR_14;
}
