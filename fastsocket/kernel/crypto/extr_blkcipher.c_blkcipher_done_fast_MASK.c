
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ virt; } ;
struct blkcipher_walk {int flags; int out; int in; int page; TYPE_2__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct blkcipher_walk*) ;
 int FUNC_1 (struct blkcipher_walk*) ;
 int FUNC_2 (struct blkcipher_walk*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_5(struct blkcipher_walk *VAR_3,
            unsigned int VAR_4)
{
 if (VAR_3->flags & VAR_0) {
  FUNC_0(VAR_3);
  FUNC_3(VAR_3->dst.virt.addr, VAR_3->page, VAR_4);
  FUNC_1(VAR_3);
 } else if (!(VAR_3->flags & VAR_2)) {
  if (VAR_3->flags & VAR_1)
   FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }

 FUNC_4(&VAR_3->in, VAR_4);
 FUNC_4(&VAR_3->out, VAR_4);

 return VAR_4;
}
