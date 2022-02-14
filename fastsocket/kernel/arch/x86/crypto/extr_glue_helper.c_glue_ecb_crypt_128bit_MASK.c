
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct common_glue_ctx {int dummy; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {int dummy; } ;


 int FUNC_0 (struct common_glue_ctx const*,struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;

int FUNC_2(const struct common_glue_ctx *VAR_0,
     struct blkcipher_desc *VAR_1, struct scatterlist *VAR_2,
     struct scatterlist *VAR_3, unsigned int VAR_4)
{
 struct blkcipher_walk VAR_5;

 FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4);
 return FUNC_0(VAR_0, VAR_1, &VAR_5);
}
