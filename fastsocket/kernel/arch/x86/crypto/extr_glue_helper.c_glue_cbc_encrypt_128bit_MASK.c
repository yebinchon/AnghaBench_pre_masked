
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct blkcipher_walk {unsigned int nbytes; } ;
struct blkcipher_desc {int dummy; } ;
typedef int common_glue_func_t ;


 unsigned int FUNC_0 (int const,struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*) ;

int FUNC_4(const common_glue_func_t VAR_0,
       struct blkcipher_desc *VAR_1,
       struct scatterlist *VAR_2,
       struct scatterlist *VAR_3, unsigned int VAR_4)
{
 struct blkcipher_walk VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_3(VAR_1, &VAR_5);

 while ((VAR_4 = VAR_5.nbytes)) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
  VAR_6 = FUNC_1(VAR_1, &VAR_5, VAR_4);
 }

 return VAR_6;
}
