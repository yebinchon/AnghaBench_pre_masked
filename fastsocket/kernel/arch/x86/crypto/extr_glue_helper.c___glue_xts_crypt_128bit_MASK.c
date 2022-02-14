
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


typedef int u128 ;
struct common_glue_ctx {unsigned int num_funcs; TYPE_6__* funcs; } ;
struct TYPE_9__ {scalar_t__ addr; } ;
struct TYPE_10__ {TYPE_3__ virt; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; scalar_t__ iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {int dummy; } ;
typedef int le128 ;
struct TYPE_11__ {int (* xts ) (void*,int *,int *,int *) ;} ;
struct TYPE_12__ {unsigned int num_blocks; TYPE_5__ fn_u; } ;


 int FUNC_0 (void*,int *,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(const struct common_glue_ctx *VAR_0,
         void *VAR_1,
         struct blkcipher_desc *VAR_2,
         struct blkcipher_walk *VAR_3)
{
 const unsigned int VAR_4 = 128 / 8;
 unsigned int VAR_5 = VAR_3->nbytes;
 u128 *VAR_6 = (u128 *)VAR_3->src.virt.addr;
 u128 *VAR_7 = (u128 *)VAR_3->dst.virt.addr;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_0->num_funcs; VAR_10++) {
  VAR_8 = VAR_0->funcs[VAR_10].num_blocks;
  VAR_9 = VAR_4 * VAR_8;

  if (VAR_5 >= VAR_9) {
   do {
    VAR_0->funcs[VAR_10].fn_u.xts(VAR_1, VAR_7, VAR_6,
       (le128 *)VAR_3->iv);

    VAR_6 += VAR_8;
    VAR_7 += VAR_8;
    VAR_5 -= VAR_9;
   } while (VAR_5 >= VAR_9);

   if (VAR_5 < VAR_4)
    goto done;
  }
 }

done:
 return VAR_5;
}
