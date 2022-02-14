
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
struct TYPE_11__ {int (* cbc ) (void*,int *,int *) ;} ;
struct TYPE_12__ {unsigned int num_blocks; TYPE_5__ fn_u; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (void*,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static unsigned int
FUNC_3(const struct common_glue_ctx *VAR_0,
     struct blkcipher_desc *VAR_1,
     struct blkcipher_walk *VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_1->tfm);
 const unsigned int VAR_4 = 128 / 8;
 unsigned int VAR_5 = VAR_2->nbytes;
 u128 *VAR_6 = (u128 *)VAR_2->src.virt.addr;
 u128 *VAR_7 = (u128 *)VAR_2->dst.virt.addr;
 u128 VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11;


 VAR_6 += VAR_5 / VAR_4 - 1;
 VAR_7 += VAR_5 / VAR_4 - 1;

 VAR_8 = *VAR_6;

 for (VAR_11 = 0; VAR_11 < VAR_0->num_funcs; VAR_11++) {
  VAR_9 = VAR_0->funcs[VAR_11].num_blocks;
  VAR_10 = VAR_4 * VAR_9;


  if (VAR_5 >= VAR_10) {
   do {
    VAR_5 -= VAR_10 - VAR_4;
    VAR_6 -= VAR_9 - 1;
    VAR_7 -= VAR_9 - 1;

    VAR_0->funcs[VAR_11].fn_u.cbc(VAR_3, VAR_7, VAR_6);

    VAR_5 -= VAR_4;
    if (VAR_5 < VAR_4)
     goto done;

    FUNC_2(VAR_7, VAR_7, VAR_6 - 1);
    VAR_6 -= 1;
    VAR_7 -= 1;
   } while (VAR_5 >= VAR_10);

   if (VAR_5 < VAR_4)
    goto done;
  }
 }

done:
 FUNC_2(VAR_7, VAR_7, (u128 *)VAR_2->iv);
 *(u128 *)VAR_2->iv = VAR_8;

 return VAR_5;
}
