
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct common_glue_ctx {int fpu_blocks_limit; } ;
struct blkcipher_walk {unsigned int nbytes; } ;
struct blkcipher_desc {int dummy; } ;


 unsigned int FUNC_0 (struct common_glue_ctx const*,struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_4 (unsigned int const,int ,struct blkcipher_desc*,int,unsigned int) ;
 int FUNC_5 (int) ;

int FUNC_6(const struct common_glue_ctx *VAR_0,
       struct blkcipher_desc *VAR_1,
       struct scatterlist *VAR_2,
       struct scatterlist *VAR_3, unsigned int VAR_4)
{
 const unsigned int VAR_5 = 128 / 8;
 bool VAR_6 = 0;
 struct blkcipher_walk VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, VAR_2, VAR_3, VAR_4);
 VAR_8 = FUNC_3(VAR_1, &VAR_7);

 while ((VAR_4 = VAR_7.nbytes)) {
  VAR_6 = FUNC_4(VAR_5, VAR_0->fpu_blocks_limit,
          VAR_1, VAR_6, VAR_4);
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_7);
  VAR_8 = FUNC_1(VAR_1, &VAR_7, VAR_4);
 }

 FUNC_5(VAR_6);
 return VAR_8;
}
