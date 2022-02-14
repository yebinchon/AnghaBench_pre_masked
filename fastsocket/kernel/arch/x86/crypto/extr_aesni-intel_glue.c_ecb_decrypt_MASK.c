
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct crypto_aes_ctx {int dummy; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ src; TYPE_2__ dst; } ;
struct blkcipher_desc {int flags; int tfm; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_aes_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_aes_ctx*,int ,int ,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_3 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_4 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct blkcipher_desc *VAR_3,
         struct scatterlist *VAR_4, struct scatterlist *VAR_5,
         unsigned int VAR_6)
{
 struct crypto_aes_ctx *VAR_7 = FUNC_0(FUNC_5(VAR_3->tfm));
 struct blkcipher_walk VAR_8;
 int VAR_9;

 FUNC_3(&VAR_8, VAR_4, VAR_5, VAR_6);
 VAR_9 = FUNC_4(VAR_3, &VAR_8);
 VAR_3->flags &= ~VAR_2;

 FUNC_6();
 while ((VAR_6 = VAR_8.nbytes)) {
  FUNC_1(VAR_7, VAR_8.dst.virt.addr, VAR_8.src.virt.addr,
         VAR_6 & VAR_0);
  VAR_6 &= VAR_1 - 1;
  VAR_9 = FUNC_2(VAR_3, &VAR_8, VAR_6);
 }
 FUNC_7();

 return VAR_9;
}
