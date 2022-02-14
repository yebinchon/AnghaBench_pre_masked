
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_8__ {scalar_t__ addr; } ;
struct TYPE_7__ {TYPE_4__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {scalar_t__ nbytes; TYPE_3__ src; TYPE_2__ dst; } ;
struct blkcipher_desc {int dummy; } ;


 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,int ) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct blkcipher_desc *VAR_0,
          struct scatterlist *VAR_1,
          struct scatterlist *VAR_2, unsigned int VAR_3)
{
 struct blkcipher_walk VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3);
 VAR_5 = FUNC_2(VAR_0, &VAR_4);

 while (VAR_4.nbytes) {
  if (VAR_4.src.virt.addr != VAR_4.dst.virt.addr)
   FUNC_3(VAR_4.dst.virt.addr, VAR_4.src.virt.addr,
          VAR_4.nbytes);
  VAR_5 = FUNC_0(VAR_0, &VAR_4, 0);
 }

 return VAR_5;
}
