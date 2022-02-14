
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {void* addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; int flags; int in; TYPE_4__ src; TYPE_2__ dst; scalar_t__ buffer; scalar_t__ page; } ;
struct blkcipher_desc {int dummy; } ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (void*,int *,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_6(struct blkcipher_desc *VAR_3,
          struct blkcipher_walk *VAR_4,
          unsigned int VAR_5,
          unsigned int VAR_6)
{
 unsigned int VAR_7;
 unsigned VAR_8 = FUNC_0(VAR_5, VAR_6 + 1);

 if (VAR_4->buffer)
  goto ok;

 VAR_4->buffer = VAR_4->page;
 if (VAR_4->buffer)
  goto ok;

 VAR_7 = VAR_8 * 3 - (VAR_6 + 1) +
     (VAR_6 & ~(FUNC_3() - 1));
 VAR_4->buffer = FUNC_4(VAR_7, VAR_2);
 if (!VAR_4->buffer)
  return FUNC_2(VAR_3, VAR_4, -VAR_1);

ok:
 VAR_4->dst.virt.addr = (u8 *)FUNC_0((unsigned long)VAR_4->buffer,
       VAR_6 + 1);
 VAR_4->dst.virt.addr = FUNC_1(VAR_4->dst.virt.addr, VAR_5);
 VAR_4->src.virt.addr = FUNC_1(VAR_4->dst.virt.addr +
       VAR_8, VAR_5);

 FUNC_5(VAR_4->src.virt.addr, &VAR_4->in, VAR_5, 0);

 VAR_4->nbytes = VAR_5;
 VAR_4->flags |= VAR_0;

 return 0;
}
