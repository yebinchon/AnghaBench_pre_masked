
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
struct blkcipher_desc {int tfm; } ;
typedef int le128 ;
typedef int be128 ;
struct TYPE_11__ {int (* ctr ) (void*,int *,int *,int *) ;} ;
struct TYPE_12__ {unsigned int num_blocks; TYPE_5__ fn_u; } ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (void*,int *,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_4(const struct common_glue_ctx *VAR_0,
         struct blkcipher_desc *VAR_1,
         struct blkcipher_walk *VAR_2)
{
 const unsigned int VAR_3 = 128 / 8;
 void *VAR_4 = FUNC_1(VAR_1->tfm);
 unsigned int VAR_5 = VAR_2->nbytes;
 u128 *VAR_6 = (u128 *)VAR_2->src.virt.addr;
 u128 *VAR_7 = (u128 *)VAR_2->dst.virt.addr;
 le128 VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11;

 FUNC_0(&VAR_8, (be128 *)VAR_2->iv);


 for (VAR_11 = 0; VAR_11 < VAR_0->num_funcs; VAR_11++) {
  VAR_9 = VAR_0->funcs[VAR_11].num_blocks;
  VAR_10 = VAR_3 * VAR_9;

  if (VAR_5 >= VAR_10) {
   do {
    VAR_0->funcs[VAR_11].fn_u.ctr(VAR_4, VAR_7, VAR_6, &VAR_8);

    VAR_6 += VAR_9;
    VAR_7 += VAR_9;
    VAR_5 -= VAR_10;
   } while (VAR_5 >= VAR_10);

   if (VAR_5 < VAR_3)
    goto done;
  }
 }

done:
 FUNC_2((be128 *)VAR_2->iv, &VAR_8);
 return VAR_5;
}
