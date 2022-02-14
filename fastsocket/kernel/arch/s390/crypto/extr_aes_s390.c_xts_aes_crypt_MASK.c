
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int xts; void* key; int tweak; int bit; int block; } ;
struct s390_xts_ctx {int key_len; void* key; TYPE_1__ pcc; int xts_param; } ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_4__ virt; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_2__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_5__ src; TYPE_3__ dst; int iv; } ;
struct blkcipher_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_3 (long,void*,int *,int *,unsigned int) ;
 int FUNC_4 (long,void*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct blkcipher_desc *VAR_1, long VAR_2,
    struct s390_xts_ctx *VAR_3,
    struct blkcipher_walk *VAR_4)
{
 unsigned int VAR_5 = (VAR_3->key_len >> 1) & 0x10;
 int VAR_6 = FUNC_2(VAR_1, VAR_4);
 unsigned int VAR_7 = VAR_4->nbytes;
 unsigned int VAR_8;
 u8 *VAR_9, *VAR_10;
 void *VAR_11;

 if (!VAR_7)
  goto out;

 FUNC_6(VAR_3->pcc.block, 0, sizeof(VAR_3->pcc.block));
 FUNC_6(VAR_3->pcc.bit, 0, sizeof(VAR_3->pcc.bit));
 FUNC_6(VAR_3->pcc.xts, 0, sizeof(VAR_3->pcc.xts));
 FUNC_5(VAR_3->pcc.tweak, VAR_4->iv, sizeof(VAR_3->pcc.tweak));
 VAR_11 = VAR_3->pcc.key + VAR_5;
 VAR_6 = FUNC_4(VAR_2, VAR_11);
 FUNC_0(VAR_6 < 0);

 FUNC_5(VAR_3->xts_param, VAR_3->pcc.xts, 16);
 VAR_11 = VAR_3->key + VAR_5;
 do {

  VAR_8 = VAR_7 & ~(VAR_0 - 1);
  VAR_10 = VAR_4->dst.virt.addr;
  VAR_9 = VAR_4->src.virt.addr;

  VAR_6 = FUNC_3(VAR_2, VAR_11, VAR_10, VAR_9, VAR_8);
  FUNC_0(VAR_6 < 0 || VAR_6 != VAR_8);

  VAR_7 &= VAR_0 - 1;
  VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_7);
 } while ((VAR_7 = VAR_4->nbytes));
out:
 return VAR_6;
}
