
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


typedef int u8 ;
struct common_glue_ctx {unsigned int num_funcs; TYPE_6__* funcs; int fpu_blocks_limit; } ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_3__ virt; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {int tfm; } ;
struct TYPE_11__ {int (* ecb ) (void*,int *,int *) ;} ;
struct TYPE_12__ {unsigned int const num_blocks; TYPE_5__ fn_u; } ;


 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (unsigned int const,int ,struct blkcipher_desc*,int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*,int *,int *) ;

__attribute__((used)) static int FUNC_6(const struct common_glue_ctx *VAR_0,
       struct blkcipher_desc *VAR_1,
       struct blkcipher_walk *VAR_2)
{
 void *VAR_3 = FUNC_2(VAR_1->tfm);
 const unsigned int VAR_4 = 128 / 8;
 unsigned int VAR_5, VAR_6, VAR_7;
 bool VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2);

 while ((VAR_5 = VAR_2->nbytes)) {
  u8 *VAR_10 = VAR_2->src.virt.addr;
  u8 *VAR_11 = VAR_2->dst.virt.addr;

  VAR_8 = FUNC_3(VAR_4, VAR_0->fpu_blocks_limit,
          VAR_1, VAR_8, VAR_5);

  for (VAR_6 = 0; VAR_6 < VAR_0->num_funcs; VAR_6++) {
   VAR_7 = VAR_4 * VAR_0->funcs[VAR_6].num_blocks;


   if (VAR_5 >= VAR_7) {
    do {
     VAR_0->funcs[VAR_6].fn_u.ecb(VAR_3, VAR_11,
        VAR_10);

     VAR_10 += VAR_7;
     VAR_11 += VAR_7;
     VAR_5 -= VAR_7;
    } while (VAR_5 >= VAR_7);

    if (VAR_5 < VAR_4)
     goto done;
   }
  }

done:
  VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_5);
 }

 FUNC_4(VAR_8);
 return VAR_9;
}
