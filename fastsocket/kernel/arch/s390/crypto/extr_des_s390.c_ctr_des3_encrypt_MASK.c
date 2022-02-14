
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypt_s390_des_ctx {int dummy; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 struct crypt_s390_des_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct blkcipher_desc*,int ,struct crypt_s390_des_ctx*,struct blkcipher_walk*) ;

__attribute__((used)) static int FUNC_3(struct blkcipher_desc *VAR_1,
       struct scatterlist *VAR_2, struct scatterlist *VAR_3,
       unsigned int VAR_4)
{
 struct crypt_s390_des_ctx *VAR_5 = FUNC_1(VAR_1->tfm);
 struct blkcipher_walk VAR_6;

 FUNC_0(&VAR_6, VAR_2, VAR_3, VAR_4);
 return FUNC_2(VAR_1, VAR_0, VAR_5, &VAR_6);
}
