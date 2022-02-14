
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct s390_aes_ctx {int dec; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {int tfm; } ;


 int FUNC_0 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 struct s390_aes_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct blkcipher_desc*,int ,struct s390_aes_ctx*,struct blkcipher_walk*) ;

__attribute__((used)) static int FUNC_3(struct blkcipher_desc *VAR_0,
      struct scatterlist *VAR_1, struct scatterlist *VAR_2,
      unsigned int VAR_3)
{
 struct s390_aes_ctx *VAR_4 = FUNC_1(VAR_0->tfm);
 struct blkcipher_walk VAR_5;

 FUNC_0(&VAR_5, VAR_1, VAR_2, VAR_3);
 return FUNC_2(VAR_0, VAR_4->dec, VAR_4, &VAR_5);
}
