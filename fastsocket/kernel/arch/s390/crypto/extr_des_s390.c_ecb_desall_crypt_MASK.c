
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ src; TYPE_2__ dst; } ;
struct blkcipher_desc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_3 (long,void*,int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct blkcipher_desc *VAR_1, long VAR_2,
       void *VAR_3, struct blkcipher_walk *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_1, VAR_4);
 unsigned int VAR_6;

 while ((VAR_6 = VAR_4->nbytes)) {

  unsigned int VAR_7 = VAR_6 & ~(VAR_0 - 1);
  u8 *VAR_8 = VAR_4->dst.virt.addr;
  u8 *VAR_9 = VAR_4->src.virt.addr;

  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_8, VAR_9, VAR_7);
  FUNC_0((VAR_5 < 0) || (VAR_5 != VAR_7));

  VAR_6 &= VAR_0 - 1;
  VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_6);
 }

 return VAR_5;
}
