
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct common_glue_ctx {int num_funcs; TYPE_2__* funcs; int fpu_blocks_limit; } ;
struct blkcipher_walk {unsigned int nbytes; } ;
struct blkcipher_desc {int dummy; } ;
struct TYPE_3__ {int ctr; } ;
struct TYPE_4__ {TYPE_1__ fn_u; } ;


 unsigned int FUNC_0 (struct common_glue_ctx const*,struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int const) ;
 int FUNC_4 (int ,struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_5 (unsigned int const,int ,struct blkcipher_desc*,int,unsigned int) ;
 int FUNC_6 (int) ;

int FUNC_7(const struct common_glue_ctx *VAR_0,
     struct blkcipher_desc *VAR_1, struct scatterlist *VAR_2,
     struct scatterlist *VAR_3, unsigned int VAR_4)
{
 const unsigned int VAR_5 = 128 / 8;
 bool VAR_6 = 0;
 struct blkcipher_walk VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, VAR_2, VAR_3, VAR_4);
 VAR_8 = FUNC_3(VAR_1, &VAR_7, VAR_5);

 while ((VAR_4 = VAR_7.nbytes) >= VAR_5) {
  VAR_6 = FUNC_5(VAR_5, VAR_0->fpu_blocks_limit,
          VAR_1, VAR_6, VAR_4);
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_7);
  VAR_8 = FUNC_1(VAR_1, &VAR_7, VAR_4);
 }

 FUNC_6(VAR_6);

 if (VAR_7.nbytes) {
  FUNC_4(
   VAR_0->funcs[VAR_0->num_funcs - 1].fn_u.ctr, VAR_1, &VAR_7);
  VAR_8 = FUNC_1(VAR_1, &VAR_7, 0);
 }

 return VAR_8;
}
